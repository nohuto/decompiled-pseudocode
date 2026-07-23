/*
 * XREFs of MmIsFileMapped @ 0x140859F20
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x14081F908 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x14001AF48 (MiUnlockVadShared.c)
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x140075550 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x140075560 (MiLockVadShared.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall MmIsFileMapped(_KPROCESS *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v3; // r15d
  __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // r12d
  _QWORD *v7; // rax
  _QWORD *i; // rbx
  _QWORD **v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // r14
  ULONG_PTR v15; // rdx
  _BYTE v18[48]; // [rsp+28h] [rbp-70h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 40);
  v5 = (__int64)a1;
  if ( CurrentThread->ApcState.Process == a1 )
  {
    v6 = 0;
  }
  else
  {
    KiStackAttachProcess(a1, 0LL, (__int64)v18);
    v6 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
  v7 = *(_QWORD **)(v5 + 1576);
  i = 0LL;
  while ( v7 )
  {
    i = v7;
    v7 = (_QWORD *)*v7;
  }
  if ( i )
  {
    do
    {
      v9 = (_QWORD **)i[1];
      v10 = (__int64)i;
      v11 = i;
      if ( v9 )
      {
        v12 = *v9;
        for ( i = (_QWORD *)i[1]; v12; v12 = (_QWORD *)*v12 )
          i = v12;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v11 )
            break;
          v11 = i;
        }
      }
      if ( (*(_DWORD *)(v10 + 48) & 0x4000) == 0 )
      {
        MiLockVadShared((__int64)CurrentThread, v10);
        if ( !(unsigned int)MiVadDeleted(v10) )
        {
          v13 = *(__int64 **)(v10 + 72);
          v14 = *v13;
          if ( *(_QWORD *)(*v13 + 64) )
          {
            v15 = MiReferenceControlAreaFile(*v13);
            if ( *(_QWORD *)(v15 + 40) == v4 )
              v3 = 1;
            MiDereferenceControlAreaFile(v14, v15);
          }
        }
        MiUnlockVadShared((__int64)CurrentThread, v10);
        if ( v3 == 1 )
          break;
      }
    }
    while ( i );
    v5 = (__int64)a1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, v5);
  if ( v6 == 1 )
    KiUnstackDetachProcess((__int64)v18, 0LL);
  return v3;
}

/*
 * XREFs of MmIsFileMapped @ 0x140892178
 * Callers:
 *     IopQueryProcessIdsUsingFile @ 0x140857D98 (IopQueryProcessIdsUsingFile.c)
 * Callees:
 *     MiReferenceControlAreaFile @ 0x140009BF0 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x140009CFC (MiDereferenceControlAreaFile.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FA20 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140053970 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiLockVadShared @ 0x1400539E0 (MiLockVadShared.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     MiUnlockVadShared @ 0x1401162B4 (MiUnlockVadShared.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall MmIsFileMapped(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  __int64 v2; // r13
  _KPROCESS *v3; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v5; // r15d
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

  v2 = *(_QWORD *)(a2 + 40);
  v3 = BugCheckParameter1;
  memset(v18, 0, sizeof(v18));
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  if ( CurrentThread->ApcState.Process == v3 )
  {
    v6 = 0;
  }
  else
  {
    KiStackAttachProcess(v3, 0, (__int64)v18);
    v6 = 1;
  }
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v3);
  v7 = (_QWORD *)v3[2].Affinity.Bitmap[8];
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
      if ( (*(_DWORD *)(v10 + 48) & 0x100000) == 0 )
      {
        MiLockVadShared((__int64)CurrentThread, v10);
        if ( !(unsigned int)MiVadDeleted(v10) )
        {
          v13 = *(__int64 **)(v10 + 72);
          v14 = *v13;
          if ( *(_QWORD *)(*v13 + 64) )
          {
            v15 = MiReferenceControlAreaFile(*v13);
            if ( *(_QWORD *)(v15 + 40) == v2 )
              v5 = 1;
            MiDereferenceControlAreaFile(v14, v15);
          }
        }
        MiUnlockVadShared((__int64)CurrentThread, v10);
        if ( v5 == 1 )
          break;
      }
    }
    while ( i );
    v3 = BugCheckParameter1;
  }
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, (__int64)v3);
  if ( v6 == 1 )
    KiUnstackDetachProcess((struct _KTHREAD *)v18, 0);
  return v5;
}

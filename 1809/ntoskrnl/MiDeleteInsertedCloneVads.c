/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x14085F5C8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14085F284 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiReferenceVad @ 0x140075590 (MiReferenceVad.c)
 *     MiLockVad @ 0x140076994 (MiLockVad.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiDeleteCloneDescriptor @ 0x1402C998C (MiDeleteCloneDescriptor.c)
 */

__int64 __fastcall MiDeleteInsertedCloneVads(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r8
  __int64 v4; // r9
  _QWORD *v5; // rax
  _QWORD *i; // rbx
  _QWORD **v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  unsigned int *v11; // rcx
  _QWORD *j; // rax
  _QWORD **v13; // rcx
  _QWORD *v14; // rax
  _QWORD *k; // rcx
  _BYTE v17[48]; // [rsp+20h] [rbp-48h] BYREF

  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)a1, 0LL, (__int64)v17);
  *(_BYTE *)(*(_QWORD *)(a1 + 1296) + 305LL) |= 1u;
  v5 = *(_QWORD **)(a1 + 1576);
  i = 0LL;
  while ( v5 )
  {
    i = v5;
    v5 = (_QWORD *)*v5;
  }
  while ( i )
  {
    v7 = (_QWORD **)i[1];
    v8 = (__int64)i;
    v9 = i;
    if ( v7 )
    {
      v10 = *v7;
      for ( i = (_QWORD *)i[1]; v10; v10 = (_QWORD *)*v10 )
        i = v10;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v9 )
          break;
        v9 = i;
      }
    }
    MiLockVad((__int64)CurrentThread, v8);
    MiReferenceVad(v8);
    MiDeleteVad(v11, 0LL, 0);
  }
  for ( j = *(_QWORD **)(a1 + 912); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor(a1, (__int64)i);
    v13 = (_QWORD **)i[1];
    v14 = i;
    if ( v13 )
    {
      i = (_QWORD *)i[1];
      for ( k = *v13; k; k = (_QWORD *)*k )
        i = k;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v14 )
          break;
        v14 = i;
      }
    }
  }
  MiDeleteCloneZombies(a1, 0LL, v3, v4);
  return KiUnstackDetachProcess((__int64)v17, 0LL);
}

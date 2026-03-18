/*
 * XREFs of MiDeleteInsertedCloneVads @ 0x14089B22C
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiReferenceVad @ 0x140053980 (MiReferenceVad.c)
 *     MiDeleteVad @ 0x140055030 (MiDeleteVad.c)
 *     MiLockVad @ 0x140072FCC (MiLockVad.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     MiDeleteCloneZombies @ 0x140134494 (MiDeleteCloneZombies.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDeleteCloneDescriptor @ 0x1402E3AF0 (MiDeleteCloneDescriptor.c)
 */

unsigned __int64 __fastcall MiDeleteInsertedCloneVads(__int64 BugCheckParameter1)
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
  _QWORD **v13; // rax
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _BYTE v17[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v17, 0, sizeof(v17));
  CurrentThread = KeGetCurrentThread();
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v17);
  *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1296) + 353LL) |= 1u;
  v5 = *(_QWORD **)(BugCheckParameter1 + 1624);
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
  for ( j = *(_QWORD **)(BugCheckParameter1 + 920); j; j = (_QWORD *)*j )
    i = j;
  while ( i )
  {
    i[6] = 0LL;
    MiDeleteCloneDescriptor(BugCheckParameter1, (__int64)i);
    v13 = (_QWORD **)i[1];
    v14 = i;
    if ( v13 )
    {
      v15 = *v13;
      for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
        i = v15;
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
  MiDeleteCloneZombies(BugCheckParameter1, 0LL, v3, v4);
  return KiUnstackDetachProcess((struct _KTHREAD *)v17, 0);
}

/*
 * XREFs of ?HampClientRundownObjects@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B9B0
 * Callers:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BB34 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     CemRcTableGetNext @ 0x18000858C (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180009FF4 (-HampClientPkgClose@@YAJPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     RmpWnfCleanupPendingCallbackList @ 0x18000B938 (RmpWnfCleanupPendingCallbackList.c)
 *     CemRcTableGetFirst @ 0x18000BA38 (CemRcTableGetFirst.c)
 *     ?HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BAD0 (-HampClientReleaseLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BB00 (-HampClientAcquireLockExclusive@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FAC0 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000FB0C (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x180022D20 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 */

void __fastcall HampClientRundownObjects(struct _HAM_CLIENT_CONTEXT *a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx
  _QWORD *v3; // rsi
  _QWORD *v4; // rdi
  struct _HAM_PACKAGE **i; // rax
  struct _HAM_PACKAGE **v6; // rdi
  _QWORD *v7; // rcx

  HampClientAcquireLockExclusive(a1);
  HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)a1);
  v2 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  *((_DWORD *)a1 + 32) |= 1u;
  HampManagerReleaseLockExclusive(v2);
  v3 = (_QWORD *)((char *)a1 + 40);
  while ( 1 )
  {
    v4 = (_QWORD *)*v3;
    if ( (_QWORD *)*v3 == v3 )
      break;
    if ( _InterlockedIncrement64(v4 - 3) <= 1 )
      __fastfail(0xEu);
    HampClientReleaseLockExclusive(a1);
    HampActClose((struct _HAM_ACTIVITY *)(v4 - 6));
    CemRcObjectDereference(v4 - 6);
    HampClientAcquireLockExclusive(a1);
  }
  HampClientReleaseLockExclusive(a1);
  for ( i = (struct _HAM_PACKAGE **)CemRcTableGetFirst((char *)a1 + 56); ; i = (struct _HAM_PACKAGE **)CemRcTableGetNext(v6) )
  {
    v6 = i;
    if ( !i )
      break;
    HampClientPkgClose(i);
  }
  if ( (*((_BYTE *)a1 + 128) & 2) == 0 )
  {
    v7 = (_QWORD *)*((_QWORD *)a1 + 14);
    if ( v7 )
      RmpWnfCleanupPendingCallbackList(v7);
  }
}

/*
 * XREFs of LinkNodepRestoreIrqRoutingWorker @ 0x1C006BB00
 * Callers:
 *     LinkNodeRestoreHardwareState @ 0x1C006BA1C (LinkNodeRestoreHardwareState.c)
 * Callees:
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     LinkNodepRunSrsAsync @ 0x1C006BC6C (LinkNodepRunSrsAsync.c)
 */

__int64 __fastcall LinkNodepRestoreIrqRoutingWorker(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  KSPIN_LOCK *v7; // rsi
  char i; // al
  __int64 v9; // rcx
  __int64 v10; // rdx
  bool v11; // zf
  __int64 *v12; // rax
  volatile signed __int32 *v13; // rbp
  __int64 v14; // rax
  KIRQL v15; // dl

  _InterlockedIncrement((volatile signed __int32 *)a4 + 7);
  v7 = (KSPIN_LOCK *)(a4 + 16);
  a4[24] = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4 + 2);
  for ( i = a4[25]; ; i = 0 )
  {
    if ( i )
      goto LABEL_8;
    v9 = *(_QWORD *)a4;
    if ( *(_DWORD *)(*(_QWORD *)a4 + 24LL) )
    {
      v10 = *(unsigned int *)(v9 + 32);
      *((_DWORD *)a4 + 2) = v10;
      a2 = LinkNodepRunSrsAsync(*(_QWORD *)(v9 + 552), v10, LinkNodepRestoreIrqRoutingWorker, a4);
      v11 = a2 == 259;
    }
    else
    {
      v12 = AMLIGetNamedChild(*(__int64 **)(v9 + 552), 1397310559);
      v13 = (volatile signed __int32 *)v12;
      if ( !v12 )
        goto LABEL_8;
      a2 = AMLIAsyncEvalObject(v12, 0LL, 0, 0LL, LinkNodepRestoreIrqRoutingWorker, a4);
      AMLIDereferenceHandleEx(v13);
      v11 = a2 == 259;
    }
    if ( v11 )
    {
      v15 = a4[24];
      a4[25] = 1;
      KeReleaseSpinLock(v7, v15);
      return 259LL;
    }
LABEL_8:
    v14 = *(_QWORD *)a4;
    if ( *(__int64 **)(*(_QWORD *)a4 + 56LL) == &LinkNodeListHead )
      break;
    a4[25] = 0;
    *(_QWORD *)a4 = *(_QWORD *)(v14 + 56) - 56LL;
  }
  KeReleaseSpinLock(v7, a4[24]);
  (*(void (**)(void))(PmHalDispatchTable + 40))();
  if ( *((_DWORD *)a4 + 7) )
    (*((void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a4 + 4))(a1, a2, 0LL, *((_QWORD *)a4 + 5));
  ExFreePoolWithTag(a4, 0);
  return a2;
}

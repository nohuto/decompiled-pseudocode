/*
 * XREFs of imp_WdfInterruptReleaseLock @ 0x1C0003B10
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000B6F4 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  FxInterrupt *v2; // r10
  __int64 Offset; // rcx
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxWaitLockInternal *v5; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  v2 = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxInterrupt *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4135 )
  {
    pFxInterrupt = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v2 = pFxInterrupt;
  }
  if ( v2->m_PassiveHandling )
  {
    if ( FxVerifierCheckIrqlLevel(v2->m_Globals, 0) < 0 )
      return;
    v2 = pFxInterrupt;
    if ( pFxInterrupt->m_PassiveHandling )
    {
      v5 = &pFxInterrupt->m_WaitLock->FxWaitLockInternal;
      v5->m_OwningThread = 0LL;
      KeSetEvent(&v5->m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      return;
    }
  }
  m_Interrupt = v2->m_Interrupt;
  if ( m_Interrupt || (m_Interrupt = v2->m_InterruptCaptured) != 0LL )
    KeReleaseInterruptSpinLock(m_Interrupt, v2->m_OldIrql);
}

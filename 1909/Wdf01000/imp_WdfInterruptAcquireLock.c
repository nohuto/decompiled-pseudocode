/*
 * XREFs of imp_WdfInterruptAcquireLock @ 0x1C0002960
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C001598C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  unsigned __int64 v2; // rbx
  __int64 Offset; // rcx
  struct _KINTERRUPT *v4; // rcx
  _FX_DRIVER_GLOBALS *v5; // rdx
  const void *_a1; // rcx
  FxInterrupt *pFxInterrupt; // [rsp+48h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  v2 = ~Interrupt & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v2;
    v2 -= Offset;
  }
  if ( *(_WORD *)(v2 + 8) == 4135 )
  {
    pFxInterrupt = (FxInterrupt *)v2;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v2, (void **)&pFxInterrupt, (void *)Interrupt, 0x1027u, Offset);
    v2 = (unsigned __int64)pFxInterrupt;
  }
  if ( *(_BYTE *)(v2 + 258) )
  {
    if ( FxVerifierCheckIrqlLevel(*(_FX_DRIVER_GLOBALS **)(v2 + 16), 0) < 0 )
      return;
    v2 = (unsigned __int64)pFxInterrupt;
    if ( pFxInterrupt->m_PassiveHandling )
    {
      FxWaitLockInternal::AcquireLock(&pFxInterrupt->m_WaitLock->FxWaitLockInternal, v5, 0LL);
      return;
    }
  }
  v4 = *(struct _KINTERRUPT **)(v2 + 128);
  if ( v4 || (v4 = *(struct _KINTERRUPT **)(v2 + 424)) != 0LL )
  {
    *(_BYTE *)(v2 + 144) = KeAcquireInterruptSpinLock(v4);
  }
  else
  {
    _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v2 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v2 + 16), 2u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v2 + 16));
    *(_BYTE *)(v2 + 144) = KeGetCurrentIrql();
  }
}

/*
 * XREFs of imp_WdfInterruptReleaseLock @ 0x1C00028D0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C000BB38 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfInterruptReleaseLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  unsigned __int64 v2; // rcx
  __int64 Offset; // r8
  struct _KINTERRUPT *v4; // rax
  FxWaitLockInternal *v5; // rcx
  __int64 v6; // rax
  _FX_DRIVER_GLOBALS **v7; // rbx
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
      v5 = &pFxInterrupt->m_WaitLock->FxWaitLockInternal;
      v5->m_OwningThread = 0LL;
      KeSetEvent(&v5->m_Event.m_Event, 0, 0);
      KeLeaveCriticalRegion();
      return;
    }
  }
  v4 = *(struct _KINTERRUPT **)(v2 + 128);
  if ( v4 || (v4 = *(struct _KINTERRUPT **)(v2 + 424)) != 0LL )
  {
    KeReleaseInterruptSpinLock(v4, *(_BYTE *)(v2 + 144));
  }
  else
  {
    v6 = *(unsigned __int16 *)(v2 + 10);
    v7 = (_FX_DRIVER_GLOBALS **)(v2 + 16);
    _a1 = (const void *)(v2 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(_WORD)v6 )
      _a1 = 0LL;
    WPP_IFR_SF_q(*v7, 2u, 0xCu, 0x1Du, WPP_InterruptObject_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*v7);
  }
}

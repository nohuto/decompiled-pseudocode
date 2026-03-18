/*
 * XREFs of imp_WdfSpinLockAcquire @ 0x1C0001470
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall imp_WdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  void *v3; // rbp
  FxSpinLock *v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _QWORD *v7; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  FxSpinLock *pLock; // [rsp+48h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  v3 = 0LL;
  v4 = (FxSpinLock *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxSpinLock *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4132 )
  {
    pLock = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pLock, (void *)SpinLock, 0x1024u, Offset);
    v4 = pLock;
  }
  m_Globals = v4->m_Globals;
  if ( v4->m_InterruptLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xAu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( m_Globals->FxVerifierLock )
      v3 = retaddr;
    v4->m_Irql = KeAcquireSpinLockRaiseToDpc(&v4->m_SpinLock.m_Lock);
    if ( v4->m_ObjectSize != 128 && v4 != (FxSpinLock *)-128LL )
    {
      v4[1].__vftable = (FxSpinLock_vtbl *)KeGetCurrentThread();
      v7 = *(_QWORD **)&v4[1].m_Type;
      v7[1] = MEMORY[0xFFFFF78000000320];
      *v7 = v3;
    }
  }
}

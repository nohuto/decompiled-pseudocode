/*
 * XREFs of ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1C00C2DC8
 * Callers:
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C00020D0 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqdqdd @ 0x1C00684BC (WPP_IFR_SF_qqdqdd.c)
 */

__int64 __fastcall FxIoTarget::Vf_VerifySubmitLocked(
        FxIoTarget *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxRequestBase *Request)
{
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  __int16 v7; // ax
  unsigned __int64 v8; // rcx
  const void *_a1; // rax
  int _a6; // r8d
  unsigned __int16 *v11; // rbx
  ULONG_PTR v12; // rdi
  unsigned __int64 v13; // rax
  char *v14; // r10
  int v15; // eax
  int _a4; // r14d
  unsigned __int16 m_ObjectSize; // ax
  const void *_a5; // rbx
  unsigned __int64 v19; // rcx
  const void *v20; // rdx
  unsigned __int8 irql; // [rsp+90h] [rbp+18h] BYREF

  v5 = 0;
  v6 = (unsigned __int64)Request;
  FxNonPagedObject::Lock(Request, &irql, (unsigned __int8)Request);
  v7 = *(_WORD *)(v6 + 218);
  if ( (v7 & 0x80u) != 0 )
  {
    if ( (v7 & 0x100) != 0 )
    {
      v11 = (unsigned __int16 *)(v6 + 10);
      v12 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v13 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v6 + 10) )
        v13 = 0LL;
      if ( v13 )
        v6 = v13;
      WPP_IFR_SF_q(FxDriverGlobals, 2u, 0xEu, 0x1Bu, WPP_FxIoTarget_cpp_Traceguids, (const void *)v6);
      if ( !*v11 )
        v12 = 0LL;
      FxVerifierBugCheckWorker(FxDriverGlobals, WDF_REQUEST_FATAL_ERROR, 3uLL, v12);
    }
    v14 = *(char **)(v6 + 152);
    _a6 = this->m_TargetStackSize;
    v15 = v14[67];
    _a4 = v15 - 1;
    if ( v15 <= _a6 )
    {
      v5 = -1073741616;
      m_ObjectSize = this->m_ObjectSize;
      _a5 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a5 = 0LL;
      v19 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v20 = (const void *)v6;
      if ( !*(_WORD *)(v6 + 10) )
        v19 = 0LL;
      if ( v19 )
        v20 = (const void *)v19;
      WPP_IFR_SF_qqdqdd(
        FxDriverGlobals,
        (unsigned __int8)v20,
        0xEu,
        0x1Cu,
        WPP_FxIoTarget_cpp_Traceguids,
        v20,
        v14,
        _a4,
        _a5,
        _a6,
        -1073741616);
    }
  }
  else
  {
    v5 = -1073741616;
    v8 = v6 ^ 0xFFFFFFFFFFFFFFF8uLL;
    _a1 = (const void *)v6;
    if ( !*(_WORD *)(v6 + 10) )
      v8 = 0LL;
    if ( v8 )
      _a1 = (const void *)v8;
    WPP_IFR_SF_qL(FxDriverGlobals, 2u, 0xEu, 0x1Au, WPP_FxIoTarget_cpp_Traceguids, _a1, 0xC00000D0);
  }
  FxNonPagedObject::Unlock((FxNonPagedObject *)v6, irql, _a6);
  return v5;
}

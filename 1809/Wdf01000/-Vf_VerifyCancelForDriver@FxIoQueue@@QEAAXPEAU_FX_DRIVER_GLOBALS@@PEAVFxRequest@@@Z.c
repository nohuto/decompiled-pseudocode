/*
 * XREFs of ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C30DC
 * Callers:
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013154 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxIoQueue::Vf_VerifyCancelForDriver(
        FxIoQueue *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Request)
{
  unsigned __int16 *p_m_ObjectSize; // r14
  const void *v6; // rdi
  const void *v7; // rbx
  const void *_a2; // r10
  const void *_a1; // rax

  p_m_ObjectSize = &this->m_ObjectSize;
  v6 = (const void *)(Request ^ 0xFFFFFFFFFFFFFFF8uLL);
  v7 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  _a1 = (const void *)(Request ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !this->m_ObjectSize )
    _a2 = 0LL;
  if ( !*(_WORD *)(Request + 10) )
    _a1 = 0LL;
  WPP_IFR_SF_qq(FxDriverGlobals, 3u, 0xDu, 0x4Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
  if ( *(_QWORD *)(Request + 288) != Request + 288 )
  {
    if ( !*p_m_ObjectSize )
      v7 = 0LL;
    if ( !*(_WORD *)(Request + 10) )
      v6 = 0LL;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0xDu, 0x50u, WPP_FxIoQueue_cpp_Traceguids, v6, v7);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}

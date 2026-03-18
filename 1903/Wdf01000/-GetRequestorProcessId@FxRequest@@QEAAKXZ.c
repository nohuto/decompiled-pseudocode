/*
 * XREFs of ?GetRequestorProcessId@FxRequest@@QEAAKXZ @ 0x1C004F80C
 * Callers:
 *     imp_WdfRequestGetRequestorProcessId @ 0x1C004B910 (imp_WdfRequestGetRequestorProcessId.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z @ 0x1C0012BA4 (-GetIrp@FxRequest@@QEAAJPEAPEAU_IRP@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

ULONG __fastcall FxRequest::GetRequestorProcessId(FxRequest *this, __int64 a2, unsigned __int8 a3)
{
  signed int _a2; // eax
  unsigned __int16 m_ObjectSize; // dx
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  const void *_a1; // rdi
  _IRP *irp; // [rsp+58h] [rbp+10h] BYREF

  _a2 = FxRequest::GetIrp(this, &irp, a3);
  if ( _a2 >= 0 )
    return IoGetRequestorProcessId(irp);
  m_ObjectSize = this->m_ObjectSize;
  p_m_Globals = &this->m_Globals;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qL(*p_m_Globals, 2u, 0x10u, 0x24u, WPP_FxRequestKm_cpp_Traceguids, _a1, _a2);
  FxVerifierDbgBreakPoint(*p_m_Globals);
  return 0;
}

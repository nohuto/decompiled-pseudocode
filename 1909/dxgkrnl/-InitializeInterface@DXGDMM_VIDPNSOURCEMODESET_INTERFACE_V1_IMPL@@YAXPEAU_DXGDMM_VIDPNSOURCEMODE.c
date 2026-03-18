/*
 * XREFs of ?InitializeInterface@DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDPNSOURCEMODESET_INTERFACE@@@Z @ 0x1C016F568
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016F2E8 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDPNSOURCEMODESET_INTERFACE *a2)
{
  __int64 v3; // rax

  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  *(_QWORD *)this = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::GetNumModes;
  *((_QWORD *)this + 1) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireFirstModeInfo;
  *((_QWORD *)this + 2) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquireNextModeInfo;
  *((_QWORD *)this + 3) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo;
  *((_QWORD *)this + 4) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo;
  *((_QWORD *)this + 5) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode;
  *((_QWORD *)this + 6) = DXGDMM_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::UnpinMode;
}

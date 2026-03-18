/*
 * XREFs of ?InitializeInterface@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE@@@Z @ 0x1C016F71C
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016F2E8 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE *a2)
{
  __int64 v3; // rax

  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  *(_QWORD *)this = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::GetNumTargets;
  *((_QWORD *)this + 1) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireFirstTargetInfo;
  *((_QWORD *)this + 2) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::AcquireNextTargetInfo;
  *((_QWORD *)this + 3) = DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::ReleaseTargetInfo;
}

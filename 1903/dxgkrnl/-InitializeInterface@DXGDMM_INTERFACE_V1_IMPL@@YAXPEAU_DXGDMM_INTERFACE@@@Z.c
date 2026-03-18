/*
 * XREFs of ?InitializeInterface@DXGDMM_INTERFACE_V1_IMPL@@YAXPEAU_DXGDMM_INTERFACE@@@Z @ 0x1C016B9C4
 * Callers:
 *     ?_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ @ 0x1C016B4F8 (-_InitializeDmmClientInterfaces@VIDPN_MGR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDMM_INTERFACE_V1_IMPL::InitializeInterface(
        DXGDMM_INTERFACE_V1_IMPL *this,
        struct _DXGDMM_INTERFACE *a2)
{
  __int64 v3; // rax

  if ( !this )
  {
    v3 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v3);
  }
  *(_DWORD *)this = 1;
  *((_QWORD *)this + 1) = DXGDMM_INTERFACE_V1_IMPL::AcquireSourceSet;
  *((_QWORD *)this + 2) = DXGDMM_INTERFACE_V1_IMPL::ReleaseSourceSet;
  *((_QWORD *)this + 3) = DXGDMM_INTERFACE_V1_IMPL::AcquireTargetSet;
  *((_QWORD *)this + 4) = DXGDMM_INTERFACE_V1_IMPL::ReleaseTargetSet;
  *((_QWORD *)this + 5) = DXGDMM_INTERFACE_V1_IMPL::CreateVidPn;
  *((_QWORD *)this + 6) = DXGDMM_INTERFACE_V1_IMPL::CreateVidPnFromLastClientCommittedVidPn;
  *((_QWORD *)this + 7) = DXGDMM_INTERFACE_V1_IMPL::CreateVidPnCopy;
  *((_QWORD *)this + 8) = DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn;
  *((_QWORD *)this + 9) = DXGDMM_INTERFACE_V1_IMPL::IsMonitorConnected;
  *((_QWORD *)this + 10) = DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile;
}

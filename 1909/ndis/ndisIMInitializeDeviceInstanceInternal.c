/*
 * XREFs of ndisIMInitializeDeviceInstanceInternal @ 0x1C0080470
 * Callers:
 *     ndisStartDeviceSynchronous @ 0x1C002F158 (ndisStartDeviceSynchronous.c)
 *     NdisIMInitializeDeviceInstanceEx @ 0x1C007FBB0 (NdisIMInitializeDeviceInstanceEx.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028648 (WPP_RECORDER_SF_Zq.c)
 *     ndisPnPStartDevice @ 0x1C002D21C (ndisPnPStartDevice.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FD0B0 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z @ 0x1C0105B3C (-SetPause@BindState@Ndis@@QEAA_NW4PAUSE_OR_RESTART@@W4NDIS_PAUSE_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279DC (-ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ndisReinitializeMiniportBlock @ 0x1C013AC78 (ndisReinitializeMiniportBlock.c)
 */

__int64 __fastcall ndisIMInitializeDeviceInstanceInternal(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // edx
  int v7; // edx
  unsigned int v8; // edi
  char v10; // [rsp+30h] [rbp-B8h]
  char v11[160]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      1,
      46,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1,
      v10);
  }
  ndisReinitializeMiniportBlock(a1);
  if ( *(_BYTE *)(a1 + 32) < 6u )
  {
    *(_DWORD *)(a1 + 3868) = 0;
    *(_DWORD *)(a1 + 3880) = 0;
    Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(a1 + 5224, v4, v5);
    Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(a1 + 5104));
    if ( Ndis::BindState::SetPause((Ndis::BindState *)(a1 + 5032), DatapathRunning, PauseReason_LowPower) )
    {
      memset(v11, 0, sizeof(v11));
      if ( (unsigned __int8)byte_1C00E677B >= 4u )
      {
        ndisGetBindLinkNameForTracing((struct _NDIS_MINIPORT_BLOCK *)a1, (struct NDIS_PNPTRACE_LOCALS *)v11);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v6,
            0x1Cu,
            0x2Fu,
            &WPP_a3868331fe073391203672ef2b551460_Traceguids,
            *(unsigned __int16 **)&v11[8],
            *(_QWORD *)v11);
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(a1 + 5104));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(a1 + 5104), RunSynchronous, 0);
  }
  *(_QWORD *)(a1 + 1976) = v2;
  v8 = ndisPnPStartDevice(a1, 0LL, v5);
  if ( v8 )
    v8 = -1073741823;
  else
    ndisMSetMiniportReadyForBinding(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      1,
      48,
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      a1,
      v2,
      v8);
  }
  return v8;
}

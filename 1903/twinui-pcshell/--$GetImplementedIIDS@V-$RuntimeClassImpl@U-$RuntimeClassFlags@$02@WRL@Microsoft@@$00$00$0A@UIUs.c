/*
 * XREFs of ??$GetImplementedIIDS@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$02@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@123@PEAKPEAPEAU_GUID@@@Z @ 0x1801EDDB4
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUserActivityMonitor@UserActivities@Internal@ApplicationModel@Windows@@UITaskDataBroker@DataEngine@TaskFlow@Shell@68@UITaskDataCacheBroker@Activities@Data@68@UISetActivityMonitor@Activities@Data@68@VCImmersiveShellComponentWithGITSite@@VICDPUserActivitySettingsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801F2B60 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUse_ea_1801F2B60.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<3>::GetImplementedIIDS<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Internal::UserActivities::IUserActivityMonitor,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataBroker,Windows::Internal::Data::Activities::ITaskDataCacheBroker,Windows::Internal::Data::Activities::ISetActivityMonitor,CImmersiveShellComponentWithGITSite,ICDPUserActivitySettingsCallback,Microsoft::WRL::FtmBase>>(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  GUID *v5; // rax

  *a3 = 0LL;
  *a2 = 0;
  v5 = (GUID *)CoTaskMemAlloc(0x90uLL);
  if ( !v5 )
    return 2147942414LL;
  *v5 = GUID_a66b424a_5568_56e8_bbb8_a3401dfdf5bd;
  v5[1] = GUID_00000038_0000_0000_c000_000000000046;
  v5[2] = GUID_a629347b_7a47_4061_9c3e_8ac7c6f000a7;
  v5[3] = GUID_cc499118_533c_5765_8feb_8c0fd2629402;
  v5[4] = GUID_1a212157_be49_4892_afc4_1a168e546329;
  v5[5] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
  v5[6] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
  v5[7] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
  v5[8] = GUID_1531f00e_3fe1_4b79_b0bc_f6cde362f7ea;
  *a2 = 9;
  *a3 = v5;
  return 0LL;
}

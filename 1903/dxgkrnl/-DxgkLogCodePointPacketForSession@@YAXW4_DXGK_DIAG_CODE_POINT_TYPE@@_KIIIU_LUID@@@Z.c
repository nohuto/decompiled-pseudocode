/*
 * XREFs of ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x1C000D5C8
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1C00C798C (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 *     _lambda_d7c4861ef0734605370a98f05df27570_::operator() @ 0x1C00C7D1C (_lambda_d7c4861ef0734605370a98f05df27570_--operator().c)
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x1C017E9BC (-DmmInitializeAdapter@@YAJQEAX@Z.c)
 *     _lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_::operator() @ 0x1C0233F58 (_lambda_aeb2ec9c72e3b3e5d8a29a6011b3db37_--operator().c)
 *     _lambda_e7ca8b971ae1a22ae980baf136bd7096_::operator() @ 0x1C02340C8 (_lambda_e7ca8b971ae1a22ae980baf136bd7096_--operator().c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C023DB30 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 *     ?DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@@Z @ 0x1C02B4748 (-DmmLogDriverRecommendVidPnPacket@@YAXPEBVDMMVIDPNTOPOLOGY@@W4_DXGK_RECOMMENDFUNCTIONALVIDPN_REA.c)
 *     ?HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z @ 0x1C02BA608 (-HandleLinkTrainingTimeout@VIDPN_MGR@@QEAAXIEPEAE0@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C02BA888 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C00D489C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall DxgkLogCodePointPacketForSession(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        __int64 a6)
{
  _QWORD v11[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v11, 0, 0x48uLL);
  if ( a6 )
  {
    memset(&v11[1], 0, 36);
    HIDWORD(v11[7]) = a5;
    v11[0] = 0x480000001ELL;
    v11[8] = a6;
  }
  else
  {
    v11[0] = 0x4000000006LL;
    memset(&v11[1], 0, 36);
    HIDWORD(v11[7]) = a5;
  }
  LODWORD(v11[7]) = a4;
  v11[6] = __PAIR64__(a3, a1);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v11, a2);
}

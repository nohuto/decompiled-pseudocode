/*
 * XREFs of ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801BA3E0
 * Callers:
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WHI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0890 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800A0890.c)
 *     ?GetIids@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIHolographicViewHostItemHistory@Holographic@Shell@Internal@Windows@@U?$CloakedIid@UIHolographicViewHostItemLedgerPrivate@Holographic@Shell@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@WIA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A08A0 (-GetIids@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_1800A08A0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,Windows::Internal::Shell::Holographic::IHolographicViewHostItemHistory,Microsoft::WRL::CloakedIid<Windows::Internal::Shell::Holographic::IHolographicViewHostItemLedgerPrivate>,Microsoft::WRL::FtmBase>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x60uLL);
  if ( v6 )
  {
    *v6 = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[1] = GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352;
    v6[2] = GUID_e67ad469_a445_4371_82a5_7a5cefa85fc4;
    v6[3] = GUID_6d5140c1_7436_11ce_8034_00aa006009fa;
    v6[4] = GUID_00000038_0000_0000_c000_000000000046;
    v6[5] = GUID_321d1a85_14d5_4a15_bfec_edf12b00f03f;
    *a2 = 6;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}

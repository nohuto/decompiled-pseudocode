/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIInspectable@@UISpatialGraphDriverClient@Holographic@Internal@Windows@@UIWeakReferenceSource@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18011C698
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialGraphDriverClient@Holographic@Internal@Windows@@U?$CloakedIid@UISpatialGraphDriverClientInternal@Holographic@Internal@Windows@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180118CD0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180118CD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,IInspectable,Windows::Internal::Holographic::ISpatialGraphDriverClient,IWeakReferenceSource,Microsoft::WRL::CloakedIid<Windows::Internal::Holographic::ISpatialGraphDriverClientInternal>,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != -1350114592
    || a2[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
    || a2[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
    || a2[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != 564066853
      || a2[1] != *(_DWORD *)&GUID_219efa25_266f_4e4a_a29a_e5969237f318.Data2
      || a2[2] != *(_DWORD *)GUID_219efa25_266f_4e4a_a29a_e5969237f318.Data4
      || a2[3] != *(_DWORD *)&GUID_219efa25_266f_4e4a_a29a_e5969237f318.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != 56
        || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
        || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
        || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 301586245
          || a2[1] != *(_DWORD *)&GUID_11f9d745_3db3_43ad_aa6e_1ab44b888b73.Data2
          || a2[2] != *(_DWORD *)GUID_11f9d745_3db3_43ad_aa6e_1ab44b888b73.Data4
          || a2[3] != *(_DWORD *)&GUID_11f9d745_3db3_43ad_aa6e_1ab44b888b73.Data4[4] )
        {
          a1 += 8LL;
          if ( (*a2 != -1796592748
             || a2[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
             || a2[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
             || a2[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
            && (*a2 != 3
             || a2[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
             || a2[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
             || a2[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
          {
            return 2147500034LL;
          }
        }
      }
    }
  }
  *a3 = a1;
  return 0LL;
}

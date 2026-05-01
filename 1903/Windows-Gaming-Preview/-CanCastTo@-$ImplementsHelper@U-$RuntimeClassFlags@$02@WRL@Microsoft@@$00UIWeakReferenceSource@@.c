/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UIGameListEntry2@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry_Private@6789@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000FFE0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180010100 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180010100.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFastRundown@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FF4C (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFast.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  __int64 v5; // r9

  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( *a2 == -666202229
    && a2[1] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data2
    && a2[2] == *(_DWORD *)GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4
    && a2[3] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4[4] )
  {
    goto LABEL_9;
  }
  a1 += 8LL;
  if ( *a2 == 1426958011
    && a2[1] == *(_DWORD *)&GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data2
    && a2[2] == *(_DWORD *)GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data4
    && a2[3] == *(_DWORD *)&GUID_550da6bb_642b_4fc2_b208_a647bd85a0e3.Data4[4] )
  {
    goto LABEL_9;
  }
  result = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMarshal,IAgileObject,IFastRundown>::CanCastTo(
             a1 + 8,
             a2,
             a3);
  if ( (_DWORD)result == -2147467262 )
    result = 2147500034LL;
  if ( (_DWORD)result == -2147467262 )
  {
    a1 = v5 + 64;
    if ( (*v4 != -1796592748
       || v4[1] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
       || v4[2] != *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
       || v4[3] != *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4])
      && (*v4 != 3
       || v4[1] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
       || v4[2] != *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
       || v4[3] != *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4]) )
    {
      return 2147500034LL;
    }
LABEL_9:
    *a3 = a1;
    return 0LL;
  }
  return result;
}

/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180036F5C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIInspectable@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@23@VCFTMCrossProcClientImpl@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037060 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180037060.c)
 * Callees:
 *     ?CanCastTo@?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFastRundown@@@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000FF4C (-CanCastTo@-$Implements@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIMarshal@@UIAgileObject@@UIFast.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>,CFTMCrossProcClientImpl>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  _QWORD *v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r10d
  bool v8; // zf

  if ( *a2 == 56
    && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
    || (a1 += 8LL, *a2 == 1935221971)
    && a2[1] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data2
    && a2[2] == *(_DWORD *)GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4
    && a2[3] == *(_DWORD *)&GUID_735924d3_811f_4494_b69c_c641a0c61543.Data4[4] )
  {
    *a3 = a1;
    return 0LL;
  }
  if ( *a2 == -666202229
    && a2[1] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data2
    && a2[2] == *(_DWORD *)GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4
    && a2[3] == *(_DWORD *)&GUID_d84a8f8b_8749_4a25_90d3_f6c5a427886d.Data4[4] )
  {
    *a3 = a1 + 8;
    result = 0LL;
  }
  else
  {
    result = 2147500034LL;
  }
  if ( (_DWORD)result == -2147467262 )
  {
    result = Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IMarshal,IAgileObject,IFastRundown>::CanCastTo(
               a1 + 24,
               a2,
               a3);
    v8 = (_DWORD)result == v7;
    if ( (_DWORD)result == v7 )
    {
      if ( *v4 == 324
        && v4[1] == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data2
        && v4[2] == *(_DWORD *)GUID_00000144_0000_0000_c000_000000000046.Data4
        && v4[3] == *(_DWORD *)&GUID_00000144_0000_0000_c000_000000000046.Data4[4] )
      {
        *v5 = v6 + 56;
        return 0LL;
      }
      result = v7;
      v8 = 1;
    }
    if ( v8 )
      return v7;
  }
  return result;
}

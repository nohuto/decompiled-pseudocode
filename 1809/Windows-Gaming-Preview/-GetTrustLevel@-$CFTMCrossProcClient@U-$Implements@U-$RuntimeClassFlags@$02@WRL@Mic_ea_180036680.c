/*
 * XREFs of ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@UEAAJPEAW4TrustLevel@@@Z @ 0x180036680
 * Callers:
 *     ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x180035DF0 (-GetTrustLevel@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIGam.c)
 *     ?GetTrustLevel@?$CFTMCrossProcClient@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@@WRL@Microsoft@@@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x180036340 (-GetTrustLevel@-$CFTMCrossProcClient@U-$Implements@U-$RuntimeClassFlags@$02@WRL@Mic_ea_180036340.c)
 * Callees:
 *     ?_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037404 (-_GetRemoteIdentity@CFTMCrossProcClientImpl@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180043EE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CFTMCrossProcClient<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2>>::GetTrustLevel(
        __int64 a1,
        _DWORD *a2)
{
  int RemoteIdentity; // ebx
  void *v4; // rcx
  void *v6; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0;
  v6 = 0LL;
  RemoteIdentity = CFTMCrossProcClientImpl::_GetRemoteIdentity(
                     (CFTMCrossProcClientImpl *)(a1 + 40),
                     &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
                     &v6);
  if ( RemoteIdentity >= 0 )
    RemoteIdentity = (*(__int64 (__fastcall **)(void *, _DWORD *))(*(_QWORD *)v6 + 40LL))(v6, a2);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return (unsigned int)RemoteIdentity;
}

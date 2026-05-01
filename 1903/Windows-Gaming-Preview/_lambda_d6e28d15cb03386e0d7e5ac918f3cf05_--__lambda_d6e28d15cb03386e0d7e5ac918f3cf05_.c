/*
 * XREFs of _lambda_d6e28d15cb03386e0d7e5ac918f3cf05_::__lambda_d6e28d15cb03386e0d7e5ac918f3cf05_ @ 0x18002AE58
 * Callers:
 *     _Windows::Internal::MakeAsyncAction_Microsoft::WRL::DisableCausality_Windows::Internal::ComTaskPoolHandler__lambda_d6e28d15cb03386e0d7e5ac918f3cf05____::_1_::dtor$2 @ 0x18004515A (_Windows--Internal--MakeAsyncAction_Microsoft--WRL--DisableCausality_Windows--Inter_ea_18004515A.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800116A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGam_ea_1800116A0.c)
 */

volatile signed __int64 *__fastcall lambda_d6e28d15cb03386e0d7e5ac918f3cf05_::__lambda_d6e28d15cb03386e0d7e5ac918f3cf05_(
        __int64 a1)
{
  volatile signed __int64 *result; // rax

  result = *(volatile signed __int64 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}

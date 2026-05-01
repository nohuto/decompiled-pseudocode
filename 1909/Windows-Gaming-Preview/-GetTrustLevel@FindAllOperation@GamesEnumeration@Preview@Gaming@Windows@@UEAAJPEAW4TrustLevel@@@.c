/*
 * XREFs of ?GetTrustLevel@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18000B340
 * Callers:
 *     ?GetTrustLevel@?$SimpleVectorView@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18000F920 (-GetTrustLevel@-$SimpleVectorView@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPred.c)
 *     ?GetTrustLevel@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAW4TrustLevel@@@Z @ 0x18000FA70 (-GetTrustLevel@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAJPEAW4TrustLe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::GetTrustLevel(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        enum TrustLevel *a2)
{
  *a2 = BaseTrust;
  return 0LL;
}

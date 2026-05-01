/*
 * XREFs of ?AddRef@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18000CF20
 * Callers:
 *     ?AddRef@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@W7EAAKXZ @ 0x18000F860 (-AddRef@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredica.c)
 *     ?AddRef@SplitIterator@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x18000F9C0 (-AddRef@SplitIterator@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredic.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,IInspectable,Microsoft::WRL::FtmBase>::AddRef(this);
}

/*
 * XREFs of ?AddRef@MobilityExperienceSettings@ContentManagement@@UEAAKXZ @ 0x18000BAF0
 * Callers:
 *     ?AddRef@LaunchManager@ContentManagement@@WDA@EAAKXZ @ 0x18001DED0 (-AddRef@LaunchManager@ContentManagement@@WDA@EAAKXZ.c)
 *     ?AddRef@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ @ 0x18001E0E0 (-AddRef@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@W7EAAKXZ.c)
 *     ?AddRef@ActionHelper@ContentManagement@@WCI@EAAKXZ @ 0x18001E130 (-AddRef@ActionHelper@ContentManagement@@WCI@EAAKXZ.c)
 *     ?AddRef@View@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@WBI@EAAKXZ @ 0x180043C60 (-AddRef@View@-$HashMap@W4WindowPosition@ContentManagement@@IU-$DefaultHash@W4WindowPosition@Cont.c)
 *     ?AddRef@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@WBA@EAAKXZ @ 0x180043DE0 (-AddRef@-$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ContentManagement::MobilityExperienceSettings::AddRef(
        ContentManagement::MobilityExperienceSettings *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IIdentityManager>::AddRef(this);
}

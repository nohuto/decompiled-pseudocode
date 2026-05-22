/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A8A0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180038D50 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038D50.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180038D60 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038D60.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180038D70 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038D70.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180038D80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038D80.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180038D90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038D90.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@WDA@EAAKXZ @ 0x180038DA0 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpat_ea_180038DA0.c)
 * Callees:
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x18008DC74 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollection,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>::AddRef(
        __int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // ecx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 88);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v3 = v1 + 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 88), v1 + 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v1 + 16));
}

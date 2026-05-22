/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIHapticsTimerCallback@SpatialInteractions@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18008CE08
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x18008CDFC (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UISpatialGraphNodeReferenceFactory@Hol.c)
 *     ??1MPCGestureHandler@@UEAA@XZ @ 0x18008CEDC (--1MPCGestureHandler@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18008D080 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIRawInputProvider@@VFtmBase@23@@WRL@.c)
 *     ??_EActivationContext@@UEAAPEAXI@Z @ 0x1800C2A50 (--_EActivationContext@@UEAAPEAXI@Z.c)
 *     ??1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ @ 0x1800EA9EC (--1SpatialInteractionObjectDevice@SpatialInteractions@Internal@Windows@@MEAA@XZ.c)
 *     ??_GSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAPEAXI@Z @ 0x1800EB630 (--_GSpatialObjectDDIClientFactoryHelper@Holographic@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ @ 0x180152020 (--1SpatialGraphNodeReference@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x180152180 (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ??_GHapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x1801639C0 (--_GHapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z @ 0x180163A70 (--_ESimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::SpatialInteractions::IHapticsTimerCallback,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 64);
  result = (unsigned __int64)v3 >> 63;
  if ( v3 < 0 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
               2 * v3,
               a2);
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}

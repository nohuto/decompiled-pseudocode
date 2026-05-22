/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@UISpatialInteractionSourceDeviceCollectionPrivate@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionInternal@678@UISpatialObjectDeviceWatcherCallback@Holographic@78@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800B6B6C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialInteractionSourceCollection@SpatialInteractions@Internal@Windows@@UISpatialInteractionSourceDeviceCollectionPrivate@567@UISpatialInteractionSourceDeviceCollectionInternal@567@UISpatialObjectDeviceWatcherCallback@Holographic@67@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B4CC0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISpatialIn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionPrivate,Windows::Internal::SpatialInteractions::ISpatialInteractionSourceDeviceCollectionInternal,Windows::Internal::Holographic::ISpatialObjectDeviceWatcherCallback,Microsoft::WRL::FtmBase>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  if ( *a2 != 56
    || a2[1] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4] )
  {
    a1 += 8LL;
    if ( *a2 != -442307146
      || a2[1] != *(_DWORD *)&GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data2
      || a2[2] != *(_DWORD *)GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data4
      || a2[3] != *(_DWORD *)&GUID_e5a2edb6_da79_47c5_b6a8_8869c36f0f6f.Data4[4] )
    {
      a1 += 8LL;
      if ( *a2 != -1743564364
        || a2[1] != *(_DWORD *)&GUID_981351b4_74ca_46e5_83e7_55640c3aae9d.Data2
        || a2[2] != *(_DWORD *)GUID_981351b4_74ca_46e5_83e7_55640c3aae9d.Data4
        || a2[3] != *(_DWORD *)&GUID_981351b4_74ca_46e5_83e7_55640c3aae9d.Data4[4] )
      {
        a1 += 8LL;
        if ( *a2 != 179686757
          || a2[1] != *(_DWORD *)&GUID_0ab5cd65_09a7_426a_9735_00e63e8a0273.Data2
          || a2[2] != *(_DWORD *)GUID_0ab5cd65_09a7_426a_9735_00e63e8a0273.Data4
          || a2[3] != *(_DWORD *)&GUID_0ab5cd65_09a7_426a_9735_00e63e8a0273.Data4[4] )
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

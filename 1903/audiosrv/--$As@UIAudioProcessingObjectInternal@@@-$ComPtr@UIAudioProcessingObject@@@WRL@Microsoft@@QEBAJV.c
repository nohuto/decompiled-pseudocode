/*
 * XREFs of ??$As@UIAudioProcessingObjectInternal@@@?$ComPtr@UIAudioProcessingObject@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAudioProcessingObjectInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011D448
 * Callers:
 *     ?GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z @ 0x18011D860 (-GetExtendedProperties@CCompositeSystemEffect@@UEAAJPEAW4EXTENDED_APO_FLAGS@@@Z.c)
 *     ?IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18011D8D0 (-IsInputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 *     ?IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z @ 0x18011DCB0 (-IsOutputFormatSupported@CCompositeSystemEffect@@UEAAJPEAUIAudioMediaType@@0PEAPEAU2@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180043864 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IAudioProcessingObject>::As<IAudioProcessingObjectInternal>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014,
           a2);
}

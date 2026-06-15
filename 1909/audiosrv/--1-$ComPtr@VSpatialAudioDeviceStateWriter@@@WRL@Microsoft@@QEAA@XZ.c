/*
 * XREFs of ??1?$ComPtr@VSpatialAudioDeviceStateWriter@@@WRL@Microsoft@@QEAA@XZ @ 0x1801318B0
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAudioDeviceStateWriter_unsigned_short_const___&_IPropertyStore___&__::_1_::dtor$1 @ 0x18006DBD2 (_Microsoft--WRL--Details--MakeAndInitialize_SpatialAudioDeviceStateWriter_SpatialAu_ea_18006DBD2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<SpatialAudioDeviceStateWriter>::~ComPtr<SpatialAudioDeviceStateWriter>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(a1);
}

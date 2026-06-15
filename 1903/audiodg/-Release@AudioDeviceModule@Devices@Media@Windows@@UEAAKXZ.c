/*
 * XREFs of ?Release@AudioDeviceModule@Devices@Media@Windows@@UEAAKXZ @ 0x14004B320
 * Callers:
 *     ?Release@AudioDeviceModule@Devices@Media@Windows@@W7EAAKXZ @ 0x1400190E0 (-Release@AudioDeviceModule@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModule@Devices@Media@Windows@@WBA@EAAKXZ @ 0x1400190F0 (-Release@AudioDeviceModule@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::Release(this);
}

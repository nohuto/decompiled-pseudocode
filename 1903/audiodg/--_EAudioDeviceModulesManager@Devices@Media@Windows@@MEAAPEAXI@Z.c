/*
 * XREFs of ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140046780
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015744 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x140045BB4 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

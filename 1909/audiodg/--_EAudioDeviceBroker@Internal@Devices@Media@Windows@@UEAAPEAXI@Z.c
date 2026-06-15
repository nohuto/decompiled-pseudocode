/*
 * XREFs of ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140046560
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x140045908 (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBroker *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::`vector deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this,
        char a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

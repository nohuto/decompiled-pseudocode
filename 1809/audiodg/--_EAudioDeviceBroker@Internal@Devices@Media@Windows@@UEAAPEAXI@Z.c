/*
 * XREFs of ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x140018700
 * Callers:
 *     <none>
 * Callees:
 *     ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x14001873C (--1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
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

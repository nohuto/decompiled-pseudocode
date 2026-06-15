/*
 * XREFs of ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x1400465A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x140015B54 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140045A68 (--1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ.c)
 */

Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *__fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`scalar deleting destructor'(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this,
        char a2)
{
  Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::~AudioDeviceBrokerChangedEventArgs(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

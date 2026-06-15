/*
 * XREFs of ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140048C10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001B8FC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x14004821C (--1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ.c)
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

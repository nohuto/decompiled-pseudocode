/*
 * XREFs of ?AddRef@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x140014A20
 * Callers:
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x140018C10 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x140018C20 (-AddRef@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AddRef(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *((_QWORD *)this + 7);
  while ( v1 >= 0 )
  {
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 7, v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(2 * v1 + 16));
}

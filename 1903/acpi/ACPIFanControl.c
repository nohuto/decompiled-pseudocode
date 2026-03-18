/*
 * XREFs of ACPIFanControl @ 0x1C0030520
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000CC54 (ACPIDeviceInternalDeviceRequest.c)
 */

__int64 __fastcall ACPIFanControl(__int64 a1, char a2)
{
  unsigned int v2; // edx
  __int64 result; // rax

  v2 = a2 != 0 ? 1 : 4;
  if ( *(_DWORD *)(a1 + 336) != v2 )
    return ACPIDeviceInternalDeviceRequest((_QWORD *)a1, v2, (__int64)ACPIFanPowerCallback, 0LL, 0);
  return result;
}

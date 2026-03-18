/*
 * XREFs of ACPIFanControl @ 0x1C000D670
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDeviceRequest @ 0x1C000DA34 (ACPIDeviceInternalDeviceRequest.c)
 */

__int64 __fastcall ACPIFanControl(__int64 a1, char a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = a2 != 0 ? 1 : 4;
  if ( *(_DWORD *)(a1 + 336) != v2 )
    return ACPIDeviceInternalDeviceRequest(a1, v2, (unsigned int)ACPIFanPowerCallback, 0, 0);
  return result;
}

/*
 * XREFs of ACPIInternalSetProximityDomain @ 0x1C00958A0
 * Callers:
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0095310 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0095390 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIGet @ 0x1C0002200 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C0015950 (AMLIIsNamedChildPresent.c)
 */

NTSTATUS __fastcall ACPIInternalSetProximityDomain(__int64 a1)
{
  NTSTATUS result; // eax
  __int64 Data; // [rsp+60h] [rbp+8h] BYREF

  if ( !AMLIIsNamedChildPresent(*(__int64 **)(a1 + 712), 1297633375) )
    return -1073741772;
  Data = 0LL;
  result = ACPIGet((__int64 *)a1, 1297633375, 268697602, 0LL, 0, 0LL, 0LL, (__int64)&Data, 0LL);
  if ( result >= 0 )
    return IoSetDevicePropertyData(
             *(PDEVICE_OBJECT *)(a1 + 736),
             &DEVPKEY_Device_Numa_Proximity_Domain,
             0,
             0,
             7u,
             4u,
             &Data);
  return result;
}

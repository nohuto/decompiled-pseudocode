/*
 * XREFs of VrpRegistryUnload @ 0x1408410C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14008BA00 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1408C42E0 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_140425BF8.LevelPlus1 > 5 )
    TlgWrite(&stru_140425BF8, &unk_14038C647, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_140425BF8.RegHandle);
  stru_140425BF8.RegHandle = 0LL;
  stru_140425BF8.LevelPlus1 = 0;
  return result;
}

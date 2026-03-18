/*
 * XREFs of VrpRegistryUnload @ 0x140841A60
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x14008A700 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1408C4A10 (PsFreeSiloContextSlot.c)
 */

NTSTATUS VrpRegistryUnload()
{
  NTSTATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_140425BF8.LevelPlus1 > 5 )
    TlgWrite(&stru_140425BF8, &unk_14038C37E, 0LL, 0LL, 2u, &pData);
  result = EtwUnregister(stru_140425BF8.RegHandle);
  stru_140425BF8.RegHandle = 0LL;
  stru_140425BF8.LevelPlus1 = 0;
  return result;
}

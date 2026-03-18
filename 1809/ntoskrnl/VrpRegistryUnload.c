/*
 * XREFs of VrpRegistryUnload @ 0x1408081D0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400DAAC0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     TraceLoggingUnregister @ 0x1408079A8 (TraceLoggingUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140886670 (PsFreeSiloContextSlot.c)
 */

void VrpRegistryUnload()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_1403FFAD8.LevelPlus1 > 5 )
    TlgWrite(&stru_1403FFAD8, &unk_14036C875, 0LL, 0LL, 2u, &pData);
  TraceLoggingUnregister(&stru_1403FFAD8);
}

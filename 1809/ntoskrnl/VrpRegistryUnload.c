/*
 * XREFs of VrpRegistryUnload @ 0x1408081B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400DAAE0 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     TraceLoggingUnregister @ 0x140807988 (TraceLoggingUnregister.c)
 *     PsFreeSiloContextSlot @ 0x140886650 (PsFreeSiloContextSlot.c)
 */

void VrpRegistryUnload()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_1403FFAD8.LevelPlus1 > 5 )
    TlgWrite(&stru_1403FFAD8, &unk_14036C985, 0LL, 0LL, 2u, &pData);
  TraceLoggingUnregister(&stru_1403FFAD8);
}

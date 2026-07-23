/*
 * XREFs of VrpRegistryUnload @ 0x1408093B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x140012EE4 (_TlgWrite.c)
 *     IoDeleteDevice @ 0x1400DAB60 (IoDeleteDevice.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     TraceLoggingUnregister @ 0x140808B88 (TraceLoggingUnregister.c)
 *     PsFreeSiloContextSlot @ 0x1408878B0 (PsFreeSiloContextSlot.c)
 */

void VrpRegistryUnload()
{
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  IoDeleteDevice(VrpDeviceObject);
  VrpDeviceObject = 0LL;
  PsFreeSiloContextSlot((unsigned int)VrpSiloContextSlot);
  if ( stru_140400AD8.LevelPlus1 > 5 )
    TlgWrite(&stru_140400AD8, &unk_14036D915, 0LL, 0LL, 2u, &pData);
  TraceLoggingUnregister(&stru_140400AD8);
}

/*
 * XREFs of RaidDeleteUnit @ 0x1C001242C
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0013018 (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021B10 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0044E20 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitSavePowerCycleCount @ 0x1C00123A8 (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitFreeResources @ 0x1C00124B4 (RaidUnitFreeResources.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0034B2C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C005147C (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rax

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 450) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( a1 == *(_QWORD *)(v2 + 5080) )
    {
      *(_QWORD *)(v2 + 5080) = 0LL;
      v2 = *(_QWORD *)(a1 + 24);
    }
    if ( v2 && *(_BYTE *)(a1 + 2976) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3008), 0, 1) == 1 )
      RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1840) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1832));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}

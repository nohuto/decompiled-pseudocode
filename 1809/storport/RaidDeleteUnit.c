/*
 * XREFs of RaidDeleteUnit @ 0x1C001A750
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C00178EC (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C002537C (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0046570 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitFreeResources @ 0x1C001A4C8 (RaidUnitFreeResources.c)
 *     RaidUnitSavePowerCycleCount @ 0x1C001A7D8 (RaidUnitSavePowerCycleCount.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C0037BA0 (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C0051F30 (RaidSecondaryDumpDeregister.c)
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
    if ( a1 == *(_QWORD *)(v2 + 5208) )
    {
      *(_QWORD *)(v2 + 5208) = 0LL;
      v2 = *(_QWORD *)(a1 + 24);
    }
    if ( v2 && *(_BYTE *)(a1 + 3192) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 3224), 0, 1) == 1 )
      RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1840) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1832));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}

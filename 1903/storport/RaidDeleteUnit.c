/*
 * XREFs of RaidDeleteUnit @ 0x1C0012390
 * Callers:
 *     RaidDeleteBusEnumerator @ 0x1C0012F7C (RaidDeleteBusEnumerator.c)
 *     RaUnitDeleteDeviceIrp @ 0x1C0021978 (RaUnitDeleteDeviceIrp.c)
 *     RaUnitAdapterRemove @ 0x1C0043A30 (RaUnitAdapterRemove.c)
 * Callees:
 *     RaidUnitSavePowerCycleCount @ 0x1C001230C (RaidUnitSavePowerCycleCount.c)
 *     RaidUnitFreeResources @ 0x1C0012418 (RaidUnitFreeResources.c)
 *     RaidAdapterDisableQosWaitTimeoutCheck @ 0x1C003373C (RaidAdapterDisableQosWaitTimeoutCheck.c)
 *     RaidSecondaryDumpDeregister @ 0x1C00502FC (RaidSecondaryDumpDeregister.c)
 */

void __fastcall RaidDeleteUnit(__int64 a1)
{
  __int64 v2; // rax

  RaidUnitSavePowerCycleCount(a1);
  if ( (*(_BYTE *)(a1 + 162) & 1) != 0 && BootDriveExtension == a1 )
    RaidSecondaryDumpDeregister();
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
  {
    if ( a1 == *(_QWORD *)(v2 + 5080) )
    {
      *(_QWORD *)(v2 + 5080) = 0LL;
      v2 = *(_QWORD *)(a1 + 24);
    }
    if ( v2 && *(_BYTE *)(a1 + 2720) && _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2752), 0, 1) == 1 )
      RaidAdapterDisableQosWaitTimeoutCheck(*(_QWORD *)(a1 + 24));
  }
  RaidUnitFreeResources(a1);
  if ( *(_QWORD *)(a1 + 1584) )
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 1576));
  IoDeleteDevice(*(PDEVICE_OBJECT *)(a1 + 8));
}

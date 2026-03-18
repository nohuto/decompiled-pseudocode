/*
 * XREFs of ACPIUnload @ 0x1C00511F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     WppCleanupKm @ 0x1C00A8D44 (WppCleanupKm.c)
 */

__int64 __fastcall ACPIUnload(__int64 a1)
{
  KeSetEvent(&ACPITerminateEvent, 0, 0);
  KeWaitForSingleObject(ACPIThread, Executive, 0, 0, 0LL);
  ObfDereferenceObject(ACPIThread);
  IoDeleteSymbolicLink(&ACPISymbolicLinkName);
  ExDeleteNPagedLookasideList(&BuildRequestLookAsideList);
  ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&RequestLookAsideList);
  ExDeleteNPagedLookasideList(&DeviceExtensionLookAsideList);
  ExDeleteNPagedLookasideList(&ObjectDataLookAsideList);
  ExDeleteNPagedLookasideList(&XswContextLookAsideList);
  ExDeleteNPagedLookasideList(&WakeInterruptLookAsideList);
  ExDeleteNPagedLookasideList(&NotificationContextLookAsideList);
  if ( AcpiRegistryPath.Buffer )
    ExFreePoolWithTag(AcpiRegistryPath.Buffer, 0);
  if ( Src )
    ExFreePoolWithTag((PVOID)Src, 0);
  if ( E820Info )
    ExFreePoolWithTag((PVOID)E820Info, 0);
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x12u,
    (__int64)&WPP_ab258ff9f03f3cf3ffad82b9e12a3728_Traceguids);
  return WppCleanupKm(a1);
}

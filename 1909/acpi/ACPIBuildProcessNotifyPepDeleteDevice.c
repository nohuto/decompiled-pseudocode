/*
 * XREFs of ACPIBuildProcessNotifyPepDeleteDevice @ 0x1C002BD9C
 * Callers:
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002BB30 (ACPIInitResetDeviceExtension.c)
 *     ACPITableNotifyFreeObject @ 0x1C005F340 (ACPITableNotifyFreeObject.c)
 * Callees:
 *     AcpiNotifyPlExtDeleteDeviceSync @ 0x1C005B32C (AcpiNotifyPlExtDeleteDeviceSync.c)
 *     AMLIRemoveNativeObjectsFromNamespace @ 0x1C00640D8 (AMLIRemoveNativeObjectsFromNamespace.c)
 */

char __fastcall ACPIBuildProcessNotifyPepDeleteDevice(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 952);
  if ( (v2 & 0x4000000) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 952), 0xFFFFFFFFF9FFFFFFuLL);
    AcpiNotifyPlExtDeleteDeviceSync(*(_QWORD *)(a1 + 712), *(_QWORD *)(a1 + 896));
    LOBYTE(v2) = (a2 & 1) == 0;
    if ( (((*(_QWORD *)(a1 + 8) & 0x80000000000LL) == 0) & (unsigned __int8)v2) != 0 )
      LOBYTE(v2) = AMLIRemoveNativeObjectsFromNamespace(*(_QWORD *)(a1 + 712));
  }
  return v2;
}

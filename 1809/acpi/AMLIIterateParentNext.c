/*
 * XREFs of AMLIIterateParentNext @ 0x1C002E3F4
 * Callers:
 *     GetOpRegionScopeWorker @ 0x1C00179C0 (GetOpRegionScopeWorker.c)
 *     OSNotifyCreateOperationRegion @ 0x1C0017F78 (OSNotifyCreateOperationRegion.c)
 *     OSNotifyDeviceEnum @ 0x1C002E2C4 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x1C0056C14 (OSNotifyDeviceCheck.c)
 *     AcpiHandleInternalNotify @ 0x1C0059110 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIGetParent @ 0x1C001AEEC (AMLIGetParent.c)
 */

__int64 __fastcall AMLIIterateParentNext(__int64 a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent(a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}

/*
 * XREFs of AMLIIterateParentNext @ 0x1C002EB98
 * Callers:
 *     OSNotifyCreateOperationRegion @ 0x1C000CE20 (OSNotifyCreateOperationRegion.c)
 *     GetOpRegionScopeWorker @ 0x1C00236A0 (GetOpRegionScopeWorker.c)
 *     OSNotifyDeviceEnum @ 0x1C002EA54 (OSNotifyDeviceEnum.c)
 *     OSNotifyDeviceCheck @ 0x1C00586F4 (OSNotifyDeviceCheck.c)
 *     AcpiHandleInternalNotify @ 0x1C005ADA4 (AcpiHandleInternalNotify.c)
 * Callees:
 *     AMLIGetParent @ 0x1C000FF40 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 */

__int64 __fastcall AMLIIterateParentNext(volatile signed __int32 *a1)
{
  __int64 v2; // rbx

  v2 = AMLIGetParent((__int64)a1);
  AMLIDereferenceHandleEx(a1);
  return v2;
}

/*
 * XREFs of NtGdiCreateOPMProtectedOutputs @ 0x1C00B2240
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00B22D0 (DrvCreatePhysicalMonitorObjects.c)
 */

__int64 __fastcall NtGdiCreateOPMProtectedOutputs(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        int a3,
        volatile void *a4,
        volatile void *Address)
{
  __int64 result; // rax
  unsigned int v9; // edi
  int PhysicalMonitorObjects; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v9 = 0;
  if ( (int)result >= 0 )
  {
    PhysicalMonitorObjects = DrvCreatePhysicalMonitorObjects(a1, UserMode, a3, a4, Address);
    UserSessionSwitchLeaveCrit(v12, v11);
    if ( PhysicalMonitorObjects < 0 )
      return (unsigned int)PhysicalMonitorObjects;
    return v9;
  }
  return result;
}

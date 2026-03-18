/*
 * XREFs of NtGdiCreateOPMProtectedOutputs @ 0x1C00AF310
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A45F0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00AF3A0 (DrvCreatePhysicalMonitorObjects.c)
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

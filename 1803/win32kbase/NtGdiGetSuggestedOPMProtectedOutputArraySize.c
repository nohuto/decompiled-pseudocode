/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00C6970
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00C03E0 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C00D5240 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(
        struct _UNICODE_STRING *a1,
        volatile void *Address,
        __int64 a3)
{
  __int64 result; // rax
  unsigned int v6; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx
  __int64 v8; // rcx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList((__int64)a1, (__int64)Address, a3);
  v6 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, UserMode, Address);
    UserSessionSwitchLeaveCrit(v8);
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v6;
  }
  return result;
}

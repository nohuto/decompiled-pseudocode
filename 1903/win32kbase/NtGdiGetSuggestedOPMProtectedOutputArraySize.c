/*
 * XREFs of NtGdiGetSuggestedOPMProtectedOutputArraySize @ 0x1C00B3720
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x1C008FF70 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00A5640 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtGdiGetSuggestedOPMProtectedOutputArraySize(struct _UNICODE_STRING *a1, unsigned int *Address)
{
  __int64 result; // rax
  unsigned int v5; // edi
  int SuggestedPhysicalMonitorArraySize; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx

  result = AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList();
  v5 = 0;
  if ( (int)result >= 0 )
  {
    SuggestedPhysicalMonitorArraySize = DrvGetSuggestedPhysicalMonitorArraySize(a1, UserMode, Address);
    UserSessionSwitchLeaveCrit(v8, v7);
    if ( SuggestedPhysicalMonitorArraySize < 0 )
      return (unsigned int)SuggestedPhysicalMonitorArraySize;
    return v5;
  }
  return result;
}

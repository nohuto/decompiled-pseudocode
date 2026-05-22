/*
 * XREFs of ?DeviceHandleCallbackStatic@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x1801101B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180110208 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXW4_CM_NO.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallbackStatic(
        __int64 a1,
        struct _RTL_CRITICAL_SECTION *a2,
        unsigned int a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  EnterCriticalSection(a2);
  DebugInfo = a2[1].DebugInfo;
  if ( DebugInfo )
    Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback(DebugInfo, a3);
  LeaveCriticalSection(a2);
  return 0LL;
}

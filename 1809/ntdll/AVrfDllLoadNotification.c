/*
 * XREFs of AVrfDllLoadNotification @ 0x180087A8C
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x1800277F8 (LdrpSendPostSnapNotifications.c)
 *     LdrpCorProcessImports @ 0x180087A24 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 *     AVrfpDllLoadNotificationInternal @ 0x1800DBC3C (AVrfpDllLoadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800DC144 (AVrfpIsVerifierProviderDll.c)
 */

__int64 __fastcall AVrfDllLoadNotification(__int64 a1)
{
  int NotificationInternal; // esi
  __int64 *v4; // rbx
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  NotificationInternal = 0;
  RtlEnterCriticalSection(&AVrfpVerifierLock);
  if ( !(unsigned __int8)AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
  {
    NotificationInternal = AVrfpDllLoadNotificationInternal(a1);
    if ( NotificationInternal >= 0 )
    {
      v4 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v4 != &AVrfpVerifierProvidersList )
      {
        v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v4[6];
        v4 = (__int64 *)*v4;
        if ( v5 )
          v5(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection(&AVrfpVerifierLock);
  return (unsigned int)NotificationInternal;
}

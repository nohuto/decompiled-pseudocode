/*
 * XREFs of AVrfDllUnloadNotification @ 0x1800DAC24
 * Callers:
 *     LdrpUnloadNode @ 0x180055870 (LdrpUnloadNode.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     AVrfpDllUnloadNotificationInternal @ 0x1800DBD18 (AVrfpDllUnloadNotificationInternal.c)
 *     AVrfpIsVerifierProviderDll @ 0x1800DC144 (AVrfpIsVerifierProviderDll.c)
 */

struct _PEB *__fastcall AVrfDllUnloadNotification(__int64 a1)
{
  struct _PEB *result; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  result = NtCurrentPeb();
  if ( (result->NtGlobalFlag & 0x100) != 0 && AVrfpEnabled )
  {
    RtlEnterCriticalSection((__int64)&AVrfpVerifierLock);
    if ( (unsigned __int8)AVrfpIsVerifierProviderDll(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)AVrfpDllUnloadNotificationInternal(a1) >= 0 )
    {
      v3 = (__int64 *)AVrfpVerifierProvidersList;
      while ( v3 != &AVrfpVerifierProvidersList )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    return (struct _PEB *)RtlLeaveCriticalSection((__int64)&AVrfpVerifierLock);
  }
  return result;
}

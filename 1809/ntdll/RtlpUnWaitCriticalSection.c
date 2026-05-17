/*
 * XREFs of RtlpUnWaitCriticalSection @ 0x1800E9B90
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWakeByAddress @ 0x18005E81C (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x18005F030 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18009F6A0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A04A0 (ZwSetEvent.c)
 */

__int64 __fastcall RtlpUnWaitCriticalSection(__int64 a1)
{
  HANDLE DeferredCriticalSectionEvent; // rax
  __int64 result; // rax
  signed __int32 v4[10]; // [rsp+0h] [rbp-28h] BYREF

  DeferredCriticalSectionEvent = *(HANDLE *)(a1 + 24);
  if ( !DeferredCriticalSectionEvent )
    DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(a1);
  if ( DeferredCriticalSectionEvent == (HANDLE)-1LL )
  {
    _InterlockedOr(v4, 0);
    RtlpWakeByAddress(a1 + 8, 0);
    result = 0LL;
  }
  else
  {
    result = ZwSetEvent();
  }
  if ( (int)result < 0 )
    RtlRaiseStatus(result);
  return result;
}

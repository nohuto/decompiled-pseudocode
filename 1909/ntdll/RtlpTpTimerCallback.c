/*
 * XREFs of RtlpTpTimerCallback @ 0x1800305A0
 * Callers:
 *     <none>
 * Callees:
 *     TppStartThreadData @ 0x180030888 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180030918 (TppCompleteThreadData.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpImpersonate @ 0x180085538 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      RtlpTpImpersonate();
    v4 = NtCurrentTeb();
    v5 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v3) )
      v6 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478LL;
    if ( *(_BYTE *)v6 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppStartThreadData(&v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v4->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v9 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v9);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7) )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    return TppCompleteThreadData(v10);
  }
  return result;
}

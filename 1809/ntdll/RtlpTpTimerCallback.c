/*
 * XREFs of RtlpTpTimerCallback @ 0x18002E890
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002EBE8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18002EC24 (TppStartThreadData.c)
 *     RtlpTpImpersonate @ 0x1800891A0 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    if ( *(_QWORD *)(a2 + 16) )
      RtlpTpImpersonate();
    v3 = NtCurrentTeb();
    v4 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v5 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478LL;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStart(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    TppStartThreadData(&v8, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v3->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v7 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v7, 8LL);
    }
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v4 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v4 )
      RtlpTpETWCallbackStop(
        0,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    return TppCompleteThreadData(v8);
  }
  return result;
}

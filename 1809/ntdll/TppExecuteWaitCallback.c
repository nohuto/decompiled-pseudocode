/*
 * XREFs of TppExecuteWaitCallback @ 0x18002BDF8
 * Callers:
 *     TppWaitCompletion @ 0x18002BD00 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x180086F80 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     TppCompleteThreadData @ 0x18002EBE8 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18002EC24 (TppStartThreadData.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x18002ECB4 (TppCleanupGroupMemberCallbackProlog.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x180110BA0 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x180110C3C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(a1, a2, 0LL);
    if ( !(_DWORD)result )
      return result;
    goto LABEL_4;
  }
  v6 = *(_QWORD *)(a2 + 136);
  if ( !v6 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    v7 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478LL;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v10, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a2 + 80))(a1, *(_QWORD *)(a2 + 88), a2, a3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId() )
      v7 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v7 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v10);
  }
  if ( (int)LdrAddRefDll(0LL, *(_QWORD *)(a2 + 136)) >= 0 )
  {
    *(_DWORD *)(a1 + 144) |= 0x100u;
    *(_QWORD *)(a1 + 168) = v6;
    goto LABEL_3;
  }
  TppBarrierAdjust(a2 + 56, 0xFFFFFFFFLL);
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a2);
  if ( !(_DWORD)result )
    return (**(__int64 (__fastcall ***)(__int64))(a2 + 8))(a2);
  return result;
}

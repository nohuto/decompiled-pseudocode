/*
 * XREFs of TppExecuteWaitCallback @ 0x180030488
 * Callers:
 *     TppWaitCompletion @ 0x180030390 (TppWaitCompletion.c)
 *     TppExecuteWaitTimerCallback @ 0x1800826F0 (TppExecuteWaitTimerCallback.c)
 * Callees:
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     TppStartThreadData @ 0x180030888 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x180030918 (TppCompleteThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppCleanupGroupMemberCallbackProlog @ 0x180033474 (TppCleanupGroupMemberCallbackProlog.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     RtlpTpETWCallbackStart @ 0x18010F390 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x18010F42C (RtlpTpETWCallbackStop.c)
 */

__int64 __fastcall TppExecuteWaitCallback(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

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
    v8 = 2147353478LL;
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v7) )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    if ( *(_BYTE *)v9 )
      RtlpTpETWCallbackStart(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    TppStartThreadData(&v12, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 104));
    *(_QWORD *)(a1 + 88) = *(_QWORD *)(a2 + 80);
    *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 88);
    (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a2 + 80))(a1, *(_QWORD *)(a2 + 88), a2, a3);
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v10) )
      v8 = (__int64)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v8 )
      RtlpTpETWCallbackStop(
        *(_QWORD *)(a2 + 144),
        a2 + 392,
        *(_QWORD *)(a2 + 80),
        *(_QWORD *)(a2 + 88),
        *(_QWORD *)(a2 + 104));
    return TppCompleteThreadData(v12);
  }
  if ( (int)LdrAddRefDll(0, *(_QWORD *)(a2 + 136)) >= 0 )
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

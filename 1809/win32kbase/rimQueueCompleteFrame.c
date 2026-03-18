/*
 * XREFs of rimQueueCompleteFrame @ 0x1C01276B0
 * Callers:
 *     rimProcessCompleteFrame @ 0x1C0126B0C (rimProcessCompleteFrame.c)
 * Callees:
 *     ?QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z @ 0x1C0125FE0 (-QueueFrame@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBURIMCOMPLETEFRAME@@@Z.c)
 *     WPP_RECORDER_SF_qi @ 0x1C0126440 (WPP_RECORDER_SF_qi.c)
 */

_QWORD *__fastcall rimQueueCompleteFrame(__int64 a1, __int64 a2, const struct RIMCOMPLETEFRAME *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *result; // rax
  int v12; // [rsp+20h] [rbp-28h]

  InputTraceLogging::RIM::QueueFrame((const struct RIMDEV *)a2, a3);
  ++*(_QWORD *)(a2 + 192);
  WPP_RECORDER_SF_qi(v7, v6, v8, 0x11u, v12);
  v9 = a1 + 552;
  v10 = (_QWORD *)((char *)a3 + 8);
  result = *(_QWORD **)(v9 + 8);
  if ( *result != v9 )
    __fastfail(3u);
  *v10 = v9;
  v10[1] = result;
  *result = v10;
  *(_QWORD *)(v9 + 8) = v10;
  return result;
}

/*
 * XREFs of PoFxCompleteIdleState @ 0x140180EE0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxProcessWork @ 0x1400B0C20 (PopFxProcessWork.c)
 *     PopFxAddLogEntry @ 0x1400B1094 (PopFxAddLogEntry.c)
 *     PopPluginComponentIdleState @ 0x14017EC00 (PopPluginComponentIdleState.c)
 *     PopDiagTraceFxComponentIdleState @ 0x140180DE0 (PopDiagTraceFxComponentIdleState.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PoFxCompleteIdleState(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // r8
  int v8[18]; // [rsp+20h] [rbp-48h] BYREF

  v2 = a2;
  memset(v8, 0, 0x40uLL);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 824) + 8 * v2);
  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 140), 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    PopFxAddLogEntry(*(_QWORD *)(a1 + 48), v2, 14, 1LL);
    PopDiagTraceFxComponentIdleState(*(_QWORD *)(a1 + 48), v2, *(_DWORD *)(v4 + 152));
    result = PopPluginComponentIdleState(a1, v2, v6, v8);
    if ( (_BYTE)result )
      return PopFxProcessWork(0LL, v8, v7);
  }
  return result;
}

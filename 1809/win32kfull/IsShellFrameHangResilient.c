/*
 * XREFs of IsShellFrameHangResilient @ 0x1C00D7C8C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C00D7CEC (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  if ( (*(_DWORD *)(a1 + 1208) & 0x40000) == 0 )
    return 0;
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 392LL) <= 1u )
    return 0;
  v3 = *(_QWORD *)(gptiCurrent + 464LL);
  if ( *(_QWORD *)(v3 + 48) || *(_QWORD *)(v3 + 56) || (unsigned int)IsAdaptiveQueueDetachExempted(a1) )
    return 0;
  return v1;
}

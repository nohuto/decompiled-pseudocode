/*
 * XREFs of IsShellFrameHangResilient @ 0x1C00F767C
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 * Callees:
 *     IsAdaptiveQueueDetachExempted @ 0x1C0002458 (IsAdaptiveQueueDetachExempted.c)
 */

__int64 __fastcall IsShellFrameHangResilient(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  if ( (*(_DWORD *)(a1 + 1200) & 0x40000) == 0 )
    return 0;
  v1 = 1;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 392LL) <= 1u )
    return 0;
  v2 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( *(_QWORD *)(v2 + 48) || *(_QWORD *)(v2 + 56) || IsAdaptiveQueueDetachExempted(a1) )
    return 0;
  return v1;
}

/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x140116EE8
 * Callers:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400D0F44 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1400D2370 (KiQueueReadyThread.c)
 *     KiComputeGroupSchedulingRank @ 0x1400D36A0 (KiComputeGroupSchedulingRank.c)
 *     KeSetSchedulingGroupRankBias @ 0x140116428 (KeSetSchedulingGroupRankBias.c)
 *     KiResetScb @ 0x140116934 (KiResetScb.c)
 *     KiRemoveThreadFromScbQueue @ 0x140116E38 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1401171B0 (KiResortScbQueue.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x1400BDDF0 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveSchedulingGroupQueue(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax

  v4 = a1 + 22896;
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = v6 + 392;
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    LOBYTE(v8) = RtlRbRemoveNode(v7, a2 + 88);
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    v8 = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_11;
    if ( v8 )
    {
      v8 ^= a2 + 392;
LABEL_11:
      if ( v8 )
        return v8;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return v8;
}

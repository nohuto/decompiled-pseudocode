/*
 * XREFs of KiRemoveSchedulingGroupQueue @ 0x1400E8DBC
 * Callers:
 *     KiGroupSchedulingQuantumEnd @ 0x140011CF4 (KiGroupSchedulingQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140014BA0 (KiQueueReadyThread.c)
 *     KiComputeGroupSchedulingRank @ 0x1400156CC (KiComputeGroupSchedulingRank.c)
 *     KiSwapThread @ 0x140040E00 (KiSwapThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1400E86A4 (KeSetSchedulingGroupRankBias.c)
 *     KiRemoveThreadFromScbQueue @ 0x1400E8D10 (KiRemoveThreadFromScbQueue.c)
 *     KiResortScbQueue @ 0x1400E9074 (KiResortScbQueue.c)
 *     KiResetScb @ 0x1400E91B0 (KiResetScb.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x140063870 (RtlRbRemoveNode.c)
 */

char __fastcall KiRemoveSchedulingGroupQueue(_RTL_RB_TREE *a1, __int64 a2, char a3)
{
  _RTL_RB_TREE *v4; // rsi
  __int64 *v5; // rbx
  __int64 v6; // rax
  _RTL_RB_TREE *v7; // rcx
  __int64 v8; // rax

  v4 = a1 + 1431;
  do
  {
    v5 = (__int64 *)(a2 + 408);
    v6 = *(_QWORD *)(a2 + 408);
    v7 = (_RTL_RB_TREE *)(v6 + 392);
    if ( !v6 )
      v7 = v4;
    if ( a3 )
      *(_QWORD *)(a2 + 56) += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a2 + 64);
    *(_BYTE *)(a2 + 112) &= ~1u;
    LOBYTE(v8) = RtlRbRemoveNode(v7, (PRTL_BALANCED_NODE)(a2 + 88));
    a2 = *v5;
    if ( !*v5 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
      break;
    v8 = *(_QWORD *)(a2 + 392);
    if ( (*(_BYTE *)(a2 + 400) & 1) == 0 )
      goto LABEL_12;
    if ( v8 )
    {
      v8 ^= a2 + 392;
LABEL_12:
      if ( v8 )
        return v8;
    }
  }
  while ( !*(_WORD *)(a2 + 114) );
  return v8;
}

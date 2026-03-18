/*
 * XREFs of KeSelectNodeForAffinity @ 0x140115748
 * Callers:
 *     KiComputeThreadAffinity @ 0x14008A430 (KiComputeThreadAffinity.c)
 *     KeStartThread @ 0x1400D3994 (KeStartThread.c)
 *     KiSetIdealNodeProcessByGroup @ 0x1400D89E4 (KiSetIdealNodeProcessByGroup.c)
 *     KiSetAffinityThread @ 0x14011545C (KiSetAffinityThread.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspAllocateProcess @ 0x14064BCD8 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSelectNodeForAffinity(__int64 a1)
{
  unsigned __int16 v2; // cx
  unsigned int v3; // r9d
  __int64 v4; // r8

  if ( KeNumberNodes == 1 )
    return KeNodeBlock[0];
  v2 = KiProcessNodeSeed++;
  if ( (unsigned __int16)KiProcessNodeSeed >= (unsigned __int16)KeNumberNodes )
    KiProcessNodeSeed = 0;
  v3 = 0;
  do
  {
    if ( v2 >= (unsigned __int16)KeNumberNodes )
      v2 = 0;
    v4 = KeNodeBlock[v2];
    if ( *(_WORD *)(v4 + 144) == *(_WORD *)(a1 + 8) && (*(_QWORD *)(v4 + 136) & *(_QWORD *)a1) != 0LL )
      return KeNodeBlock[v2];
    ++v3;
    ++v2;
  }
  while ( v3 < (unsigned __int16)KeNumberNodes );
  return 0LL;
}

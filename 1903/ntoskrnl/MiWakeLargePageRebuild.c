/*
 * XREFs of MiWakeLargePageRebuild @ 0x140169DAC
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x14009C010 (MiUnlinkNodeLargePageHelper.c)
 *     MiSignalLargePageRebuild @ 0x1400F2000 (MiSignalLargePageRebuild.c)
 * Callees:
 *     ExQueueWorkItemToPartition @ 0x140080198 (ExQueueWorkItemToPartition.c)
 *     PsReferencePartitionSafe @ 0x1400A0358 (PsReferencePartitionSafe.c)
 */

__int64 __fastcall MiWakeLargePageRebuild(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // rdi
  __int64 v4; // r11
  unsigned __int8 v5; // al
  __int64 *v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  unsigned int v9; // ebx

  v3 = a2;
  v4 = 1984LL * a2 + *(_QWORD *)(a1 + 16) + 816LL;
  if ( *(_BYTE *)(v4 + 33) || *(_BYTE *)(v4 + 34) != 8 && (a3 & 1) == 0 )
    return 1LL;
  v5 = PsReferencePartitionSafe(*(_QWORD *)(a1 + 168));
  v9 = v5;
  if ( v5 == 1 )
  {
    *(_BYTE *)(v8 + 33) = v5;
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 16) = MiRebuildLargePages;
    *(_QWORD *)(v8 + 24) = (v3 << 53) | (v7 >> 4) & 0x1FFFFFFFFFFFFFLL;
    ExQueueWorkItemToPartition((_QWORD *)v8, v5 + 3, 0xFFFFFFFF, *v6);
  }
  return v9;
}

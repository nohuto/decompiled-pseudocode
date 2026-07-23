/*
 * XREFs of MiWakeLargePageRebuild @ 0x1402CEB90
 * Callers:
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiSignalLargePageRebuild @ 0x1400EF834 (MiSignalLargePageRebuild.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x140090C28 (PsReferencePartitionSafe.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
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
    *(_QWORD *)(v8 + 24) = (v3 << 58) | (v7 >> 4) & 0x3FFFFFFFFFFFFFFLL;
    ExQueueWorkItemToPartition((__int64 *)v8, v5 + 3, 0xFFFFFFFF, *v6);
  }
  return v9;
}

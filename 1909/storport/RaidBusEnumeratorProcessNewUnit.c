/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C002059C
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C00132E4 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0014AEC (RaidAdapterInsertUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0016D90 (RaUnitSetQueueDepth.c)
 *     StorpInitializeUnitTelemetry @ 0x1C0020678 (StorpInitializeUnitTelemetry.c)
 *     RaidUnitAssignIdentity @ 0x1C00484C8 (RaidUnitAssignIdentity.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessNewUnit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v5; // rax
  char v6; // al
  __int64 result; // rax

  v2 = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(v2 + 96) = *(_DWORD *)(a2 + 1);
  v5 = *(_QWORD *)(v2 + 24);
  *(_WORD *)(v2 + 88) = 1;
  *(_DWORD *)(v2 + 92) = 4;
  *(_WORD *)(v2 + 90) = *(_WORD *)(v5 + 56);
  RaidUnitAssignIdentity(v2, a2 + 32);
  v6 = *(_BYTE *)(v2 + 448) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 693) = 1;
  *(_BYTE *)(v2 + 448) = v6 | 4;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4960LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4952LL), *(unsigned __int8 *)(a2 + 1)) )
  {
    *(_DWORD *)(v2 + 1824) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  if ( (**(_BYTE **)(v2 + 104) & 0x1F) == 1 )
    RaUnitSetQueueDepth(v2, 1u, 1u);
  StorpInitializeUnitTelemetry(v2);
  result = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}

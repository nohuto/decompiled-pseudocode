/*
 * XREFs of RaidBusEnumeratorProcessNewUnit @ 0x1C001FBBC
 * Callers:
 *     RaidBusEnumeratorProcessModifiedNodes @ 0x1C0013248 (RaidBusEnumeratorProcessModifiedNodes.c)
 * Callees:
 *     RaidAdapterInsertUnit @ 0x1C0014A5C (RaidAdapterInsertUnit.c)
 *     RaUnitSetQueueDepth @ 0x1C0016E40 (RaUnitSetQueueDepth.c)
 *     StorpInitializeUnitTelemetry @ 0x1C001FCC4 (StorpInitializeUnitTelemetry.c)
 *     memset @ 0x1C0023840 (memset.c)
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
  *(_OWORD *)(v2 + 104) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v2 + 120) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(v2 + 136) = *(_OWORD *)(a2 + 64);
  *(_QWORD *)(v2 + 152) = *(_QWORD *)(a2 + 80);
  memset((void *)(a2 + 32), 0, 0x38uLL);
  v6 = *(_BYTE *)(v2 + 160) & 0xF7;
  *(_DWORD *)(v2 + 48) = 2;
  *(_BYTE *)(v2 + 437) = 1;
  *(_BYTE *)(v2 + 160) = v6 | 4;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 4960LL)
    && _bittest64(*(const signed __int64 **)(*(_QWORD *)a1 + 4952LL), *(unsigned __int8 *)(a2 + 1)) )
  {
    *(_DWORD *)(v2 + 1568) |= 1u;
  }
  RaidAdapterInsertUnit(*(_QWORD *)(v2 + 24), v2);
  if ( (**(_BYTE **)(v2 + 104) & 0x1F) == 1 )
    RaUnitSetQueueDepth(v2, 1u, 1u);
  StorpInitializeUnitTelemetry(v2);
  result = *(_QWORD *)(v2 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}

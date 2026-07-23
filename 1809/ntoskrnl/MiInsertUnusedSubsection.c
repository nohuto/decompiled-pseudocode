/*
 * XREFs of MiInsertUnusedSubsection @ 0x14007B7CC
 * Callers:
 *     MiFlushSectionInternal @ 0x14004C270 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x140079360 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x140079400 (MiDecrementSubsections.c)
 *     MiAppendSubsectionChain @ 0x1400929E4 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1400E7D80 (MmPurgeSection.c)
 *     MiDereferenceControlAreaPfnList @ 0x140119E9C (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteCachedSubsection @ 0x1402A1C08 (MiDeleteCachedSubsection.c)
 * Callees:
 *     MiControlAreaUsingExtents @ 0x1400321B0 (MiControlAreaUsingExtents.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14007B710 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402C4F10 (MiUpdateSubsectionCrossPartitionRefs.c)
 */

__int64 __fastcall MiInsertUnusedSubsection(__int64 a1)
{
  int v1; // esi
  __int64 v2; // r14
  unsigned __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_14043B808 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v2) <= 0xFE0 )
  {
    v6 = v4 + 31;
    goto LABEL_7;
  }
  if ( ((8 * (_WORD)v2) & 0xFFFu) <= 0xFC0 && v4 < 0x10000 )
  {
    v6 = v4 + 15;
LABEL_7:
    v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_8;
  }
  v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
LABEL_8:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v5 + 1632) += v7;
  _InterlockedExchangeAdd64(&qword_140439C98, v7);
  v8 = 0LL;
  if ( !MiControlAreaUsingExtents(*(_QWORD *)a1) && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (v9 & *(_DWORD *)(a1 + 52));
  }
  v10 = (_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v11 = *(_QWORD **)(v5 + 1664);
    if ( *v11 == v5 + 1656 )
    {
      *v10 = v5 + 1656;
      *(_QWORD *)(a1 + 88) = v11;
      *v11 = v10;
      *(_QWORD *)(v5 + 1664) = v10;
      goto LABEL_18;
    }
LABEL_15:
    __fastfail(3u);
  }
  v12 = *(_QWORD **)(v5 + 1680);
  if ( *v12 != v5 + 1672 )
    goto LABEL_15;
  *v10 = v5 + 1672;
  *(_QWORD *)(a1 + 88) = v12;
  *v12 = v10;
  *(_QWORD *)(v5 + 1680) = v10;
  *(_QWORD *)(v5 + 1360) += v2;
  if ( *(_QWORD *)(v5 + 1360) >= 0x20000uLL )
    v1 = 1;
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 1312), 0, 0);
  return v8;
}

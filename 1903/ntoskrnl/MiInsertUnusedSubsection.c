/*
 * XREFs of MiInsertUnusedSubsection @ 0x14006FCC0
 * Callers:
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiRemoveViewsFromSection @ 0x1400714B0 (MiRemoveViewsFromSection.c)
 *     MiDecrementSubsections @ 0x1400715F0 (MiDecrementSubsections.c)
 *     MmPurgeSection @ 0x1400DCED0 (MmPurgeSection.c)
 *     MiAppendSubsectionChain @ 0x1400EAEF8 (MiAppendSubsectionChain.c)
 *     MiDereferenceControlAreaPfnList @ 0x14010A450 (MiDereferenceControlAreaPfnList.c)
 *     MiDeleteCachedSubsection @ 0x1402B8E40 (MiDeleteCachedSubsection.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     MiControlAreaUsingExtents @ 0x14006ED70 (MiControlAreaUsingExtents.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400700C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUpdateSubsectionCrossPartitionRefs @ 0x1402DEC54 (MiUpdateSubsectionCrossPartitionRefs.c)
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
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v12; // rdx
  unsigned int v13; // r9d

  v1 = 0;
  v2 = *(unsigned int *)(a1 + 44);
  v4 = 8 * v2;
  v5 = *(_QWORD *)(qword_140466188 + 8LL * (*(_WORD *)(*(_QWORD *)a1 + 60LL) & 0x3FF));
  if ( (unsigned __int64)(8 * v2) > 0xFE0 )
  {
    if ( v4 >= 0x10000 || ((8 * (_WORD)v2) & 0xFFFu) > 0xFC0 )
    {
      v7 = (v4 + 4095) & 0xFFFFFFFFFFFFF000uLL;
      goto LABEL_4;
    }
    v6 = v4 + 15;
  }
  else
  {
    v6 = v4 + 31;
  }
  v7 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
LABEL_4:
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  *(_WORD *)(a1 + 34) |= 8u;
  *(_QWORD *)(v5 + 1632) += v7;
  _InterlockedExchangeAdd64(&qword_140464598, v7);
  v8 = 0LL;
  if ( !MiControlAreaUsingExtents(*(_QWORD *)a1) && (*(_DWORD *)(a1 + 48) & 0x3FFFFFFF) != 0 )
  {
    MiUpdateSubsectionCrossPartitionRefs(a1, 0LL);
    v8 = *(_DWORD *)(a1 + 44) - (v13 & *(_DWORD *)(a1 + 52));
  }
  v9 = (_QWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 104) )
  {
    v10 = *(_QWORD **)(v5 + 1664);
    if ( *v10 == v5 + 1656 )
    {
      *v9 = v5 + 1656;
      *(_QWORD *)(a1 + 88) = v10;
      *v10 = v9;
      *(_QWORD *)(v5 + 1664) = v9;
      goto LABEL_10;
    }
LABEL_21:
    __fastfail(3u);
  }
  v12 = *(_QWORD **)(v5 + 1680);
  if ( *v12 != v5 + 1672 )
    goto LABEL_21;
  *v9 = v5 + 1672;
  *(_QWORD *)(a1 + 88) = v12;
  *v12 = v9;
  *(_QWORD *)(v5 + 1680) = v9;
  *(_QWORD *)(v5 + 1360) += v2;
  if ( *(_QWORD *)(v5 + 1360) >= 0x20000uLL )
    v1 = 1;
LABEL_10:
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 1280));
  if ( v1 == 1 )
    KeSetEvent((PRKEVENT)(v5 + 1312), 0, 0);
  return v8;
}

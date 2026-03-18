/*
 * XREFs of MiInsertUnusedSegment @ 0x140070468
 * Callers:
 *     MiCheckControlArea @ 0x1400711B0 (MiCheckControlArea.c)
 *     MiCleanSection @ 0x14017085C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1402B8BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1402B9410 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B98D0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 *     MiSetDeleteOnClose @ 0x1402BA41C (MiSetDeleteOnClose.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060B00 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140070330 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiComputePagedPoolSegmentBytes @ 0x1400703EC (MiComputePagedPoolSegmentBytes.c)
 *     MiReleaseControlAreaCharges @ 0x14007105C (MiReleaseControlAreaCharges.c)
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     MiConvertStaticSubsections @ 0x1401254E0 (MiConvertStaticSubsections.c)
 */

__int64 __fastcall MiInsertUnusedSegment(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  __int64 v4; // rdi
  int v5; // edx
  int v6; // ecx
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  _QWORD *v12; // rdx

  v1 = *(_DWORD *)(a1 + 56);
  v2 = 0LL;
  if ( (v1 & 0x100) == 0 )
  {
    if ( (v1 & 0x20) == 0 )
      v2 = MiConvertStaticSubsections();
    v4 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
    if ( !v2 )
      v2 = MiReleaseControlAreaCharges(a1, 1LL);
    v5 = *(_DWORD *)(a1 + 56) | 0x8000000;
    *(_DWORD *)(a1 + 56) = v5;
    v6 = v5;
    if ( (*(_DWORD *)(v4 + 4) & 1) != 0 && (v5 & 0x40000) == 0 )
    {
      v6 = v5 | 0x40000;
      *(_DWORD *)(a1 + 56) = v5 | 0x40000;
    }
    v7 = (_QWORD *)(a1 + 8);
    if ( (v6 & 0x40000) != 0 )
    {
      v12 = *(_QWORD **)(v4 + 1544);
      if ( *v12 == v4 + 1536 )
      {
        *v7 = v4 + 1536;
        *(_QWORD *)(a1 + 16) = v12;
        *v12 = v7;
        *(_QWORD *)(v4 + 1544) = v7;
        ++*(_DWORD *)(v4 + 1284);
        if ( !*(_BYTE *)(v4 + 1616) )
        {
          *(_BYTE *)(v4 + 1616) = 1;
          KiSetTimerEx(v4 + 1552, Mi10Milliseconds.LowPart, 0, 0, 0LL);
        }
        goto LABEL_10;
      }
    }
    else
    {
      v8 = *(_QWORD **)(v4 + 1648);
      if ( *v8 == v4 + 1640 )
      {
        *v7 = v4 + 1640;
        *(_QWORD *)(a1 + 16) = v8;
        *v8 = v7;
        *(_QWORD *)(v4 + 1648) = v7;
LABEL_10:
        v9 = MiComputePagedPoolSegmentBytes(a1);
        *(_QWORD *)(v4 + 1632) += v9;
        v10 = v9;
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + 1280));
        _InterlockedExchangeAdd64(&qword_140464298, v10);
        return v2;
      }
    }
    __fastfail(3u);
  }
  return 0LL;
}

/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x14011F784
 * Callers:
 *     MiRemoveUnusedSegment @ 0x1400745DC (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x1402B89EC (MiDeleteCachedSegment.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402B98D0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402B9A90 (MiProcessDeleteOnClose.c)
 * Callees:
 *     MiComputePagedPoolSegmentBytes @ 0x1400703EC (MiComputePagedPoolSegmentBytes.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 */

_QWORD *__fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(qword_140465E88 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
  v3 = MiComputePagedPoolSegmentBytes(a1);
  if ( (*(_DWORD *)(a1 + 56) & 0x40000) != 0 && (*(_DWORD *)(v2 + 1284))-- == 1 )
  {
    KeCancelTimer((PKTIMER)(v2 + 1552));
    *(_BYTE *)(v2 + 1616) = 0;
  }
  result = (_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(a1 + 8);
  if ( *(_QWORD *)(v5 + 8) != a1 + 8 || (v6 = *(_QWORD **)(a1 + 16), (_QWORD *)*v6 != result) )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *(_DWORD *)(a1 + 56) &= ~0x8000000u;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *result = result;
  *(_QWORD *)(v2 + 1632) -= v3;
  _InterlockedExchangeAdd64(&qword_140464298, -v3);
  return result;
}

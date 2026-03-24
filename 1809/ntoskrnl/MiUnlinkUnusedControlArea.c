/*
 * XREFs of MiUnlinkUnusedControlArea @ 0x14007BAD0
 * Callers:
 *     MiRemoveUnusedSegment @ 0x14007BB68 (MiRemoveUnusedSegment.c)
 *     MiDeleteCachedSegment @ 0x1402A1864 (MiDeleteCachedSegment.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1402A27C0 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1402A2980 (MiProcessDeleteOnClose.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     MiComputePagedPoolSegmentBytes @ 0x14007B69C (MiComputePagedPoolSegmentBytes.c)
 */

_QWORD *__fastcall MiUnlinkUnusedControlArea(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  _QWORD *result; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  v2 = *(_QWORD *)(qword_14043A748 + 8LL * (*(_WORD *)(a1 + 60) & 0x3FF));
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
  _InterlockedExchangeAdd64(&qword_140438BD8, -v3);
  return result;
}

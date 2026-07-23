/*
 * XREFs of _guard_check_icall @ 0x1401C5FE0
 * Callers:
 *     bsearch @ 0x140195E10 (bsearch.c)
 *     bsearch_s @ 0x140195F20 (bsearch_s.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     qsort_s @ 0x1401967E0 (qsort_s.c)
 *     sub_1401A0630 @ 0x1401A0630 (sub_1401A0630.c)
 *     sub_1401A1590 @ 0x1401A1590 (sub_1401A1590.c)
 *     sub_1401A1660 @ 0x1401A1660 (sub_1401A1660.c)
 *     sub_1401AD770 @ 0x1401AD770 (sub_1401AD770.c)
 *     KeGuardCheckICall @ 0x14034BB50 (KeGuardCheckICall.c)
 * Callees:
 *     <none>
 */

void __fastcall guard_check_icall(uintptr_t Target)
{
  __int64 v1; // rdx
  uintptr_t v2; // r10
  unsigned __int64 v3; // r10

  if ( (Target & 0x8000000000000000uLL) == 0LL )
    goto LABEL_8;
  if ( !guard_icall_bitmap )
    return;
  v1 = *(_QWORD *)(guard_icall_bitmap + 8 * (Target >> 9));
  v2 = Target >> 3;
  if ( (Target & 0xF) == 0 )
  {
    if ( _bittest64(&v1, v2) )
      return;
LABEL_8:
    guard_icall_bugcheck(Target);
  }
  v3 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( !_bittest64(&v1, v3) || !_bittest64(&v1, v3 | 1) )
    goto LABEL_8;
}

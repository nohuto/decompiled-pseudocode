/*
 * XREFs of _guard_check_icall @ 0x1401CD120
 * Callers:
 *     bsearch @ 0x1401A0BC0 (bsearch.c)
 *     bsearch_s @ 0x1401A0CD0 (bsearch_s.c)
 *     qsort @ 0x1401A11F0 (qsort.c)
 *     qsort_s @ 0x1401A15A0 (qsort_s.c)
 *     sub_1401AB560 @ 0x1401AB560 (sub_1401AB560.c)
 *     sub_1401AC580 @ 0x1401AC580 (sub_1401AC580.c)
 *     sub_1401AC660 @ 0x1401AC660 (sub_1401AC660.c)
 *     sub_1401B8BD0 @ 0x1401B8BD0 (sub_1401B8BD0.c)
 *     KeGuardCheckICall @ 0x14036D320 (KeGuardCheckICall.c)
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

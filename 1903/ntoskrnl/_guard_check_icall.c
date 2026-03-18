/*
 * XREFs of _guard_check_icall @ 0x1401CC5A0
 * Callers:
 *     bsearch @ 0x1401A04A0 (bsearch.c)
 *     bsearch_s @ 0x1401A05B0 (bsearch_s.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     qsort_s @ 0x1401A0E80 (qsort_s.c)
 *     sub_1401AAE40 @ 0x1401AAE40 (sub_1401AAE40.c)
 *     sub_1401ABE60 @ 0x1401ABE60 (sub_1401ABE60.c)
 *     sub_1401ABF40 @ 0x1401ABF40 (sub_1401ABF40.c)
 *     sub_1401B84B0 @ 0x1401B84B0 (sub_1401B84B0.c)
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

/*
 * XREFs of _guard_check_icall @ 0x1401C5E60
 * Callers:
 *     bsearch @ 0x140195CB0 (bsearch.c)
 *     bsearch_s @ 0x140195DC0 (bsearch_s.c)
 *     qsort @ 0x1401962C0 (qsort.c)
 *     qsort_s @ 0x140196680 (qsort_s.c)
 *     sub_1401A04D0 @ 0x1401A04D0 (sub_1401A04D0.c)
 *     sub_1401A1430 @ 0x1401A1430 (sub_1401A1430.c)
 *     sub_1401A1500 @ 0x1401A1500 (sub_1401A1500.c)
 *     sub_1401AD610 @ 0x1401AD610 (sub_1401AD610.c)
 *     KeGuardCheckICall @ 0x14034AB50 (KeGuardCheckICall.c)
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

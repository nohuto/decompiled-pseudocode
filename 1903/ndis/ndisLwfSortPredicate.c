/*
 * XREFs of ndisLwfSortPredicate @ 0x1C01266CC
 * Callers:
 *     ?insertSorted@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@Z@Z @ 0x1C01258E8 (-insertSorted@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N$$QEAULwfBindProperties@@P6A_NAEBU3@1@.c)
 * Callees:
 *     operator_ @ 0x1C0125114 (operator_.c)
 */

bool __fastcall ndisLwfSortPredicate(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax

  v2 = *(_DWORD *)(a1 + 48);
  if ( v2 == *(_DWORD *)(a2 + 48) )
    return operator_(a2, a1);
  else
    return v2 > *(_DWORD *)(a2 + 48);
}

/*
 * XREFs of MiDriverPageIsDangling @ 0x1402AB104
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x140079F10 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14007A860 (MiDeleteValidSystemPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_140438EF8;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_140438EF8 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}

/*
 * XREFs of MiDriverPageIsDangling @ 0x1402AB2F4
 * Callers:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiDeleteSystemPagableVm @ 0x140079F00 (MiDeleteSystemPagableVm.c)
 *     MiDeleteValidSystemPage @ 0x14007A850 (MiDeleteValidSystemPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_140439FB8;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_140439FB8 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}

/*
 * XREFs of MiDriverPageIsDangling @ 0x1402C3D14
 * Callers:
 *     MiDeleteValidSystemPage @ 0x140024550 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x14002D400 (MiDeleteSystemPagableVm.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDriverPageIsDangling(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = *(_QWORD *)(a1 + 40);
  v2 = qword_140464918;
  if ( (result & 0x200000000000000LL) != 0 )
    --*(_QWORD *)(qword_140464918 + 200);
  --*(_QWORD *)(v2 + 208);
  return result;
}

/*
 * XREFs of sub_18002639C @ 0x18002639C
 * Callers:
 *     sub_1801287F7 @ 0x1801287F7 (sub_1801287F7.c)
 *     sub_18012CADD @ 0x18012CADD (sub_18012CADD.c)
 *     sub_18012E5EF @ 0x18012E5EF (sub_18012E5EF.c)
 *     sub_18012E91E @ 0x18012E91E (sub_18012E91E.c)
 *     sub_1801326BF @ 0x1801326BF (sub_1801326BF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002639C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(40 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 40 * a3 + 39);
      JUMPOUT(0x1800263DELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

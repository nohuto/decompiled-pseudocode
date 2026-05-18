/*
 * XREFs of sub_18000D88C @ 0x18000D88C
 * Callers:
 *     sub_1801281C9 @ 0x1801281C9 (sub_1801281C9.c)
 *     sub_18012E972 @ 0x18012E972 (sub_18012E972.c)
 *     sub_180132701 @ 0x180132701 (sub_180132701.c)
 *     sub_1801328C2 @ 0x1801328C2 (sub_1801328C2.c)
 *     sub_180132A4E @ 0x180132A4E (sub_180132A4E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D88C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 8 * a3 + 39);
      JUMPOUT(0x18000D8CDLL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

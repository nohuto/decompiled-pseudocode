/*
 * XREFs of sub_18008D840 @ 0x18008D840
 * Callers:
 *     sub_18012E8F4 @ 0x18012E8F4 (sub_18012E8F4.c)
 *     sub_18012E948 @ 0x18012E948 (sub_18012E948.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008D840(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(80 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 80 * a3 + 39);
      JUMPOUT(0x18008D882LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

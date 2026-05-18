/*
 * XREFs of sub_18002BBD8 @ 0x18002BBD8
 * Callers:
 *     sub_180128B14 @ 0x180128B14 (sub_180128B14.c)
 *     sub_180128B68 @ 0x180128B68 (sub_180128B68.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002BBD8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(72 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 72 * a3 + 39);
      JUMPOUT(0x18002BC1ALL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

/*
 * XREFs of sub_180123370 @ 0x180123370
 * Callers:
 *     sub_180134461 @ 0x180134461 (sub_180134461.c)
 *     sub_18013448B @ 0x18013448B (sub_18013448B.c)
 *     sub_1801349DF @ 0x1801349DF (sub_1801349DF.c)
 *     sub_180134A83 @ 0x180134A83 (sub_180134A83.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180123370(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(176 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 176 * a3 + 39);
      JUMPOUT(0x1801233B1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

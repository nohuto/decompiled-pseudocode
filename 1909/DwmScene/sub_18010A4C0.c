/*
 * XREFs of sub_18010A4C0 @ 0x18010A4C0
 * Callers:
 *     sub_1801332F9 @ 0x1801332F9 (sub_1801332F9.c)
 *     sub_180133323 @ 0x180133323 (sub_180133323.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18010A4C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(464 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 464 * a3 + 39);
      JUMPOUT(0x18010A501LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

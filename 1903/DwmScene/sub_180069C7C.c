/*
 * XREFs of sub_180069C7C @ 0x180069C7C
 * Callers:
 *     sub_18010DCD0 @ 0x18010DCD0 (sub_18010DCD0.c)
 *     sub_18012CC42 @ 0x18012CC42 (sub_18012CC42.c)
 *     sub_18012D13A @ 0x18012D13A (sub_18012D13A.c)
 *     sub_18012D18E @ 0x18012D18E (sub_18012D18E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069C7C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(a3 << 6) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180069CBDLL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

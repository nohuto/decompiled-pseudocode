/*
 * XREFs of sub_18002BCA4 @ 0x18002BCA4
 * Callers:
 *     sub_180128BFA @ 0x180128BFA (sub_180128BFA.c)
 *     sub_180128C4E @ 0x180128C4E (sub_180128C4E.c)
 *     sub_18012FD2E @ 0x18012FD2E (sub_18012FD2E.c)
 *     sub_18012FE00 @ 0x18012FE00 (sub_18012FE00.c)
 *     sub_180130363 @ 0x180130363 (sub_180130363.c)
 *     sub_18013038D @ 0x18013038D (sub_18013038D.c)
 *     sub_18013090B @ 0x18013090B (sub_18013090B.c)
 *     sub_180130E17 @ 0x180130E17 (sub_180130E17.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002BCA4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(48 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 48 * a3 + 39);
      JUMPOUT(0x18002BCE6LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

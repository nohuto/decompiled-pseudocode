/*
 * XREFs of sub_1800264AC @ 0x1800264AC
 * Callers:
 *     sub_180128907 @ 0x180128907 (sub_180128907.c)
 *     sub_18012CBED @ 0x18012CBED (sub_18012CBED.c)
 *     sub_18012E6FF @ 0x18012E6FF (sub_18012E6FF.c)
 *     sub_18012EA2E @ 0x18012EA2E (sub_18012EA2E.c)
 *     sub_1801327CF @ 0x1801327CF (sub_1801327CF.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800264AC(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x1800264EELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

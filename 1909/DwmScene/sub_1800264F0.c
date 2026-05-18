/*
 * XREFs of sub_1800264F0 @ 0x1800264F0
 * Callers:
 *     sub_180128931 @ 0x180128931 (sub_180128931.c)
 *     sub_18012D274 @ 0x18012D274 (sub_18012D274.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800264F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(104 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 104 * a3 + 39);
      JUMPOUT(0x18002652ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

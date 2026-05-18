/*
 * XREFs of sub_180031EBC @ 0x180031EBC
 * Callers:
 *     sub_18012970F @ 0x18012970F (sub_18012970F.c)
 *     sub_18012977F @ 0x18012977F (sub_18012977F.c)
 *     sub_18012D453 @ 0x18012D453 (sub_18012D453.c)
 *     sub_18012E3DE @ 0x18012E3DE (sub_18012E3DE.c)
 *     sub_18012F502 @ 0x18012F502 (sub_18012F502.c)
 *     sub_18012FD73 @ 0x18012FD73 (sub_18012FD73.c)
 *     sub_18013472F @ 0x18013472F (sub_18013472F.c)
 *     sub_180134BF3 @ 0x180134BF3 (sub_180134BF3.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031EBC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(32 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180031EFDLL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

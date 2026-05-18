/*
 * XREFs of sub_18000F7A0 @ 0x18000F7A0
 * Callers:
 *     sub_180127A6E @ 0x180127A6E (sub_180127A6E.c)
 *     sub_180127BA5 @ 0x180127BA5 (sub_180127BA5.c)
 *     sub_180127C56 @ 0x180127C56 (sub_180127C56.c)
 *     sub_180128301 @ 0x180128301 (sub_180128301.c)
 *     sub_180128DDD @ 0x180128DDD (sub_180128DDD.c)
 *     sub_180129071 @ 0x180129071 (sub_180129071.c)
 *     sub_18012CAB1 @ 0x18012CAB1 (sub_18012CAB1.c)
 *     sub_18012D49D @ 0x18012D49D (sub_18012D49D.c)
 *     sub_18012D6F2 @ 0x18012D6F2 (sub_18012D6F2.c)
 *     sub_180132A32 @ 0x180132A32 (sub_180132A32.c)
 *     sub_180132F6B @ 0x180132F6B (sub_180132F6B.c)
 *     sub_18013305F @ 0x18013305F (sub_18013305F.c)
 *     sub_18013437F @ 0x18013437F (sub_18013437F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F7A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(16 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x18000F7E1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}

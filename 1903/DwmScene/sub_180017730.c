/*
 * XREFs of sub_180017730 @ 0x180017730
 * Callers:
 *     sub_180128291 @ 0x180128291 (sub_180128291.c)
 *     sub_18012933B @ 0x18012933B (sub_18012933B.c)
 *     sub_18012E433 @ 0x18012E433 (sub_18012E433.c)
 *     sub_18012EA90 @ 0x18012EA90 (sub_18012EA90.c)
 *     sub_18012EAB0 @ 0x18012EAB0 (sub_18012EAB0.c)
 *     sub_18012EAE8 @ 0x18012EAE8 (sub_18012EAE8.c)
 *     sub_18012F7A9 @ 0x18012F7A9 (sub_18012F7A9.c)
 *     sub_1801327A3 @ 0x1801327A3 (sub_1801327A3.c)
 *     sub_1801327C9 @ 0x1801327C9 (sub_1801327C9.c)
 *     sub_1801327EF @ 0x1801327EF (sub_1801327EF.c)
 *     sub_18013282F @ 0x18013282F (sub_18013282F.c)
 *     sub_180132EC7 @ 0x180132EC7 (sub_180132EC7.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180017730(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *a1;
  if ( v2 )
  {
    v3 = (a1[2] - v2) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x18001778CLL);
      }
      v2 = v4;
    }
    j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
}

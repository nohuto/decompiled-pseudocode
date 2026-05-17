/*
 * XREFs of sub_1800F915C @ 0x1800F915C
 * Callers:
 *     sub_1800F9640 @ 0x1800F9640 (sub_1800F9640.c)
 *     sub_1800F96B8 @ 0x1800F96B8 (sub_1800F96B8.c)
 * Callees:
 *     sub_18007DBF0 @ 0x18007DBF0 (sub_18007DBF0.c)
 *     sub_1800F92DC @ 0x1800F92DC (sub_1800F92DC.c)
 *     sub_1800F97C0 @ 0x1800F97C0 (sub_1800F97C0.c)
 */

char __fastcall sub_1800F915C(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  char v4; // di

  v3 = a2;
  v4 = *(_BYTE *)((a2 & 0x7F)
                + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1[14] + 32LL)) << 7)
                + *(_QWORD *)(a1[14] + 40LL)
                - 128);
  LOBYTE(a2) = v4 & 0x3F;
  sub_1800F97C0(a1, a2);
  if ( a1[13] == a1[5] )
    return sub_18007DBF0((__int64)a1, v3, v4 & 0x3F, v4 & 0xC0);
  else
    return sub_1800F92DC(a1, v3);
}

/*
 * XREFs of sub_18004CC7C @ 0x18004CC7C
 * Callers:
 *     sub_18003AAA0 @ 0x18003AAA0 (sub_18003AAA0.c)
 *     sub_180040750 @ 0x180040750 (sub_180040750.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180043280 @ 0x180043280 (sub_180043280.c)
 *     sub_18004C9D8 @ 0x18004C9D8 (sub_18004C9D8.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004DC4C @ 0x18004DC4C (sub_18004DC4C.c)
 *     sub_18004EFA4 @ 0x18004EFA4 (sub_18004EFA4.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 * Callees:
 *     <none>
 */

char *__fastcall sub_18004CC7C(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax

  v1 = *a1 >> 8;
  v2 = 2LL;
  if ( (unsigned __int8)v1 < 2u )
    v2 = (unsigned __int8)v1;
  return (char *)&unk_18016A2E8 + 16 * v2;
}

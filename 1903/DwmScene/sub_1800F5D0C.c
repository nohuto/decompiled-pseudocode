/*
 * XREFs of sub_1800F5D0C @ 0x1800F5D0C
 * Callers:
 *     sub_180090D9C @ 0x180090D9C (sub_180090D9C.c)
 *     sub_1800A511C @ 0x1800A511C (sub_1800A511C.c)
 *     sub_1800C3634 @ 0x1800C3634 (sub_1800C3634.c)
 *     sub_1800C6254 @ 0x1800C6254 (sub_1800C6254.c)
 *     sub_1800C6AA0 @ 0x1800C6AA0 (sub_1800C6AA0.c)
 *     sub_1800C80F8 @ 0x1800C80F8 (sub_1800C80F8.c)
 *     sub_180111550 @ 0x180111550 (sub_180111550.c)
 * Callees:
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 */

__int64 __fastcall sub_1800F5D0C(__int64 a1, _QWORD *a2)
{
  unsigned __int16 v3; // ax

  v3 = sub_1800F2CAC(*(_QWORD *)(a1 + 16), a2);
  return sub_1800F5D40(a1, v3);
}

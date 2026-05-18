/*
 * XREFs of sub_180066E78 @ 0x180066E78
 * Callers:
 *     sub_180065CB0 @ 0x180065CB0 (sub_180065CB0.c)
 *     sub_1800665C8 @ 0x1800665C8 (sub_1800665C8.c)
 *     sub_180067B38 @ 0x180067B38 (sub_180067B38.c)
 * Callees:
 *     sub_1800658CC @ 0x1800658CC (sub_1800658CC.c)
 */

__int64 __fastcall sub_180066E78(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(a1 + 48) = *(_OWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  *(_BYTE *)(a1 + 120) = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a1 + 128) = *(_QWORD *)(a2 + 128);
  sub_1800658CC((__int64 *)(a1 + 136));
  return a1;
}

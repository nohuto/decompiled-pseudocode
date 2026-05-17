/*
 * XREFs of sub_1800DEB10 @ 0x1800DEB10
 * Callers:
 *     sub_180026FF4 @ 0x180026FF4 (sub_180026FF4.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800DEB10(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v4; // r10

  v4 = a3 * (unsigned __int64)a2;
  return v4 <= 0xFFFFFFFF && (unsigned int)v4 + a1 >= (unsigned int)v4 && a1 < a4 && (unsigned int)v4 + a1 <= a4;
}

/*
 * XREFs of ??0D2DMatrix@@QEAA@MMMMMMMMMMMMMMMM@Z @ 0x180227358
 * Callers:
 *     ??DD2DMatrix@@QEBA?AU0@M@Z @ 0x18022744C (--DD2DMatrix@@QEBA-AU0@M@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x1802275D0 (--GD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 *     ??GD2DMatrix@@QEBA?AU0@XZ @ 0x18022777C (--GD2DMatrix@@QEBA-AU0@XZ.c)
 *     ??HD2DMatrix@@QEBA?AU0@AEBU0@@Z @ 0x180227980 (--HD2DMatrix@@QEBA-AU0@AEBU0@@Z.c)
 * Callees:
 *     <none>
 */

D2DMatrix *__fastcall D2DMatrix::D2DMatrix(
        D2DMatrix *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        float a9,
        float a10,
        float a11,
        float a12,
        float a13,
        float a14,
        float a15,
        float a16,
        float a17)
{
  D2DMatrix *result; // rax

  result = this;
  *((float *)this + 3) = a5;
  *(float *)this = a2;
  *((float *)this + 5) = a7;
  *((float *)this + 4) = a6;
  *((float *)this + 7) = a9;
  *((float *)this + 6) = a8;
  *((float *)this + 9) = a11;
  *((float *)this + 8) = a10;
  *((float *)this + 11) = a13;
  *((float *)this + 10) = a12;
  *((float *)this + 13) = a15;
  *((float *)this + 12) = a14;
  *((float *)this + 15) = a17;
  *((float *)this + 1) = a3;
  *((float *)this + 2) = a4;
  *((float *)this + 14) = a16;
  return result;
}

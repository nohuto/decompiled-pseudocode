/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C0073F40
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C00F94D4 (TransformVectorWithInputTargetPrecedence.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        struct tagPOINT *a2,
        struct _SUBPIXELS *a3,
        int a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  _OWORD *result; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  __int64 v22[23]; // [rsp+50h] [rbp-B8h] BYREF

  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v20, v21);
    v9 = (__int64 *)INPUTDEST_FROM_PWND(v22, gspwndInternalCapture);
  }
  else
  {
    xxxSpeedHitTest(a6, 4, a5, a4, a2, a3, a7, a8, (__int64)v22);
    v9 = v22;
  }
  v10 = *((_OWORD *)v9 + 1);
  *a1 = *(_OWORD *)v9;
  v11 = *((_OWORD *)v9 + 2);
  a1[1] = v10;
  v12 = *((_OWORD *)v9 + 3);
  a1[2] = v11;
  v13 = *((_OWORD *)v9 + 4);
  a1[3] = v12;
  v14 = *((_OWORD *)v9 + 5);
  a1[4] = v13;
  v15 = *((_OWORD *)v9 + 6);
  a1[5] = v14;
  v16 = *((_OWORD *)v9 + 8);
  a1[6] = v15;
  a1[7] = *((_OWORD *)v9 + 7);
  v17 = *((_OWORD *)v9 + 9);
  a1[8] = v16;
  v18 = *((_OWORD *)v9 + 10);
  result = a1;
  a1[9] = v17;
  a1[10] = v18;
  return result;
}

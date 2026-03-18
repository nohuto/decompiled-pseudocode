/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C006E510
 * Callers:
 *     <none>
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     xxxSpeedHitTest @ 0x1C006E608 (xxxSpeedHitTest.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C011E808 (TransformVectorWithInputTargetPrecedence.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 */

_OWORD *__fastcall EditionMouseSpeedHitTest(
        _OWORD *a1,
        struct tagPOINT *a2,
        struct _SUBPIXELS *a3,
        int a4,
        int a5,
        int a6,
        BOOL *a7,
        __int64 a8,
        __int64 a9)
{
  BOOL v10; // ecx
  __int64 *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  _OWORD *result; // rax
  __int64 v22; // r10
  __int64 v23; // r11
  __int64 v24[23]; // [rsp+50h] [rbp-B8h] BYREF

  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v22, v23);
    if ( a7 )
      *a7 = 1;
    v11 = (__int64 *)INPUTDEST_FROM_PWND(v24, gspwndInternalCapture);
  }
  else
  {
    v10 = xxxSpeedHitTest(a6, 4, a5, a4, a2, a3, a8, a9, (__int64)v24) != 0;
    if ( a7 )
      *a7 = v10;
    v11 = v24;
  }
  v12 = *((_OWORD *)v11 + 1);
  *a1 = *(_OWORD *)v11;
  v13 = *((_OWORD *)v11 + 2);
  a1[1] = v12;
  v14 = *((_OWORD *)v11 + 3);
  a1[2] = v13;
  v15 = *((_OWORD *)v11 + 4);
  a1[3] = v14;
  v16 = *((_OWORD *)v11 + 5);
  a1[4] = v15;
  v17 = *((_OWORD *)v11 + 6);
  a1[5] = v16;
  v18 = *((_OWORD *)v11 + 8);
  a1[6] = v17;
  a1[7] = *((_OWORD *)v11 + 7);
  v19 = *((_OWORD *)v11 + 9);
  a1[8] = v18;
  v20 = *((_OWORD *)v11 + 10);
  result = a1;
  a1[9] = v19;
  a1[10] = v20;
  return result;
}

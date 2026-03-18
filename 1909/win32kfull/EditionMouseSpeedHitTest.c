/*
 * XREFs of EditionMouseSpeedHitTest @ 0x1C002CA00
 * Callers:
 *     <none>
 * Callees:
 *     xxxSpeedHitTest @ 0x1C002CB10 (xxxSpeedHitTest.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     TransformVectorWithInputTargetPrecedence @ 0x1C00CC298 (TransformVectorWithInputTargetPrecedence.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall EditionMouseSpeedHitTest(
        __int64 a1,
        struct tagPOINT *a2,
        struct _SUBPIXELS *a3,
        int a4,
        int a5,
        int a6,
        BOOL *a7,
        __int64 a8)
{
  BOOL v12; // ecx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int64 v19; // xmm1_8
  __int64 result; // rax
  __int64 v21; // r10
  __int64 v22; // rax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int64 v28[16]; // [rsp+40h] [rbp-88h] BYREF

  if ( gspwndInternalCapture )
  {
    if ( (unsigned int)IsThreadDesktopComposed(gptiCurrent) )
      TransformVectorWithInputTargetPrecedence(v21, a2);
    if ( a7 )
      *a7 = 1;
    v22 = INPUTDEST_FROM_PWND(v28, gspwndInternalCapture);
    v23 = *(_OWORD *)(v22 + 16);
    *(_OWORD *)a1 = *(_OWORD *)v22;
    v24 = *(_OWORD *)(v22 + 32);
    *(_OWORD *)(a1 + 16) = v23;
    v25 = *(_OWORD *)(v22 + 48);
    *(_OWORD *)(a1 + 32) = v24;
    v26 = *(_OWORD *)(v22 + 64);
    *(_OWORD *)(a1 + 48) = v25;
    v27 = *(_OWORD *)(v22 + 80);
    *(_OWORD *)(a1 + 64) = v26;
    v18 = *(_OWORD *)(v22 + 96);
    *(_OWORD *)(a1 + 80) = v27;
    v19 = *(_QWORD *)(v22 + 112);
  }
  else
  {
    memset(v28, 0, 0x78uLL);
    v12 = xxxSpeedHitTest(a6, 4, a5, a4, a2, a3, a8, (__int64)v28) != 0;
    if ( a7 )
      *a7 = v12;
    v13 = *(_OWORD *)&v28[2];
    *(_OWORD *)a1 = *(_OWORD *)v28;
    v14 = *(_OWORD *)&v28[4];
    *(_OWORD *)(a1 + 16) = v13;
    v15 = *(_OWORD *)&v28[6];
    *(_OWORD *)(a1 + 32) = v14;
    v16 = *(_OWORD *)&v28[8];
    *(_OWORD *)(a1 + 48) = v15;
    v17 = *(_OWORD *)&v28[10];
    *(_OWORD *)(a1 + 64) = v16;
    v18 = *(_OWORD *)&v28[12];
    *(_OWORD *)(a1 + 80) = v17;
    v19 = v28[14];
  }
  result = a1;
  *(_OWORD *)(a1 + 96) = v18;
  *(_QWORD *)(a1 + 112) = v19;
  return result;
}

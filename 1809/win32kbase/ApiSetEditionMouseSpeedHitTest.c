/*
 * XREFs of ApiSetEditionMouseSpeedHitTest @ 0x1C00318A8
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C002F9CC (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7,
        __int64 a8,
        __int64 a9)
{
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  _BYTE v24[176]; // [rsp+50h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  if ( a7 )
    *a7 = 0;
  if ( (int)IsEditionMouseSpeedHitTestSupported() >= 0 )
  {
    v13 = (_OWORD *)EditionMouseSpeedHitTest(v24, a2, a3, a4, a5, a6, a7, a8, a9);
    v14 = v13[1];
    *a1 = *v13;
    v15 = v13[2];
    a1[1] = v14;
    v16 = v13[3];
    a1[2] = v15;
    v17 = v13[4];
    a1[3] = v16;
    v18 = v13[5];
    a1[4] = v17;
    v19 = v13[6];
    a1[5] = v18;
    v20 = v13[8];
    a1[6] = v19;
    a1[7] = v13[7];
    v21 = v13[9];
    a1[8] = v20;
    v22 = v13[10];
    a1[9] = v21;
    a1[10] = v22;
  }
  return a1;
}

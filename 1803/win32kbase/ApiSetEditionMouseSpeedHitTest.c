/*
 * XREFs of ApiSetEditionMouseSpeedHitTest @ 0x1C003A818
 * Callers:
 *     ?MouseHitTest@CMouseProcessor@@AEAA?AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTATTRIBUTES@@KW4MouseHitTestOptions@@PEAHPEAI@Z @ 0x1C00375F0 (-MouseHitTest@CMouseProcessor@@AEAA-AVCInputDest@@PEAUtagPOINT@@PEBU_SUBPIXELS@@_KW4DIT_HITTESTA.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

_OWORD *__fastcall ApiSetEditionMouseSpeedHitTest(
        _OWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _BYTE v23[176]; // [rsp+40h] [rbp-B8h] BYREF

  memset(a1, 0, 0xB0uLL);
  if ( (int)IsEditionMouseSpeedHitTestSupported() >= 0 )
  {
    v12 = (_OWORD *)EditionMouseSpeedHitTest(v23, a2, a3, a4, a5, a6, a7, a8);
    v13 = v12[1];
    *a1 = *v12;
    v14 = v12[2];
    a1[1] = v13;
    v15 = v12[3];
    a1[2] = v14;
    v16 = v12[4];
    a1[3] = v15;
    v17 = v12[5];
    a1[4] = v16;
    v18 = v12[6];
    a1[5] = v17;
    v19 = v12[8];
    a1[6] = v18;
    a1[7] = v12[7];
    v20 = v12[9];
    a1[8] = v19;
    v21 = v12[10];
    a1[9] = v20;
    a1[10] = v21;
  }
  return a1;
}

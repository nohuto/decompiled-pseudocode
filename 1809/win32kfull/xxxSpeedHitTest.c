/*
 * XREFs of xxxSpeedHitTest @ 0x1C006E608
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C006E510 (EditionMouseSpeedHitTest.c)
 *     EditionSpeedHitTest @ 0x1C01EFB40 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01F0534 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C00084FC (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C006E870 (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C006E8C8 (xxxDCompSpeedHitTest.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0116668 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013207C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall xxxSpeedHitTest(
        int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        __int64 a7,
        __int64 a8,
        _OWORD *a9)
{
  unsigned __int8 v13; // bl
  __int64 v14; // rdi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  struct tagWND *v25; // rax
  struct tagWND *v26; // rax
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  _OWORD v48[11]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v49[176]; // [rsp+108h] [rbp+0h] BYREF

  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  memset(v48, 0, sizeof(v48));
  if ( v14 )
  {
    LODWORD(v48[0]) = 4;
    *((_QWORD *)&v48[4] + 1) = v14;
    DWORD1(v48[5]) = 2;
  }
  v15 = v48[1];
  *a9 = v48[0];
  v16 = v48[2];
  a9[1] = v15;
  v17 = v48[3];
  a9[2] = v16;
  v18 = v48[4];
  a9[3] = v17;
  v19 = v48[5];
  a9[4] = v18;
  v20 = v48[6];
  a9[5] = v19;
  v21 = v48[8];
  a9[6] = v20;
  a9[7] = v48[7];
  v22 = v48[9];
  a9[8] = v21;
  v23 = v48[10];
  a9[9] = v22;
  a9[10] = v23;
  if ( CanHitTestInDwm() )
  {
    return (unsigned __int8)xxxDCompSpeedHitTest(a2, a3, a5, a6, a1, a4, 0LL, a7, a8, a9);
  }
  else if ( !a1 )
  {
    v25 = TopLevelSpeedHitTest(grpdeskRitInput, a5, a6);
    if ( v25 )
    {
      v26 = ClassicChildTreeSpeedHitTest(v25, *a5);
      if ( v26 )
      {
        v27 = (_OWORD *)INPUTDEST_FROM_PWND(v49, v26);
        v13 = 1;
        v28 = v27[1];
        v48[0] = *v27;
        v29 = v27[2];
        v48[1] = v28;
        v30 = v27[3];
        v48[2] = v29;
        v31 = v27[4];
        v48[3] = v30;
        v32 = v27[5];
        v48[4] = v31;
        v33 = v27[6];
        v48[5] = v32;
        v34 = v27[7];
        v48[6] = v33;
        v35 = v27[8];
        v48[7] = v34;
        v36 = v27[9];
        v48[8] = v35;
        v37 = v27[10];
        v48[9] = v36;
        v48[10] = v37;
        v38 = v48[1];
        *a9 = v48[0];
        v39 = v48[2];
        a9[1] = v38;
        v40 = v48[3];
        a9[2] = v39;
        v41 = v48[4];
        a9[3] = v40;
        v42 = v48[5];
        a9[4] = v41;
        v43 = v48[6];
        a9[5] = v42;
        v44 = v48[7];
        a9[6] = v43;
        v45 = v48[8];
        a9[7] = v44;
        v46 = v48[9];
        a9[8] = v45;
        v47 = v48[10];
        a9[9] = v46;
        a9[10] = v47;
      }
    }
  }
  return v13;
}

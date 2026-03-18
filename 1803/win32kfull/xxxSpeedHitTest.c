/*
 * XREFs of xxxSpeedHitTest @ 0x1C0074020
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C0073F40 (EditionMouseSpeedHitTest.c)
 *     EditionSpeedHitTest @ 0x1C01CB7A0 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01CC154 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C00741A0 (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0105C84 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C01C8F94 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

char __fastcall xxxSpeedHitTest(
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
  __int64 v13; // rbx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  struct tagWND *v23; // rax
  _OWORD *v24; // rax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  _OWORD v46[11]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v47[176]; // [rsp+108h] [rbp+0h] BYREF

  v13 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  memset(v46, 0, sizeof(v46));
  if ( v13 )
  {
    LODWORD(v46[0]) = 4;
    *((_QWORD *)&v46[4] + 1) = v13;
    DWORD1(v46[5]) = 2;
  }
  v14 = v46[1];
  *a9 = v46[0];
  v15 = v46[2];
  a9[1] = v14;
  v16 = v46[3];
  a9[2] = v15;
  v17 = v46[4];
  a9[3] = v16;
  v18 = v46[5];
  a9[4] = v17;
  v19 = v46[6];
  a9[5] = v18;
  v20 = v46[8];
  a9[6] = v19;
  a9[7] = v46[7];
  v21 = v46[9];
  a9[8] = v20;
  v22 = v46[10];
  a9[9] = v21;
  a9[10] = v22;
  LOBYTE(v23) = CanHitTestInDwm();
  if ( (_BYTE)v23 )
  {
    LOBYTE(v23) = xxxDCompSpeedHitTest(a2, a3, a5, a6, a1, a4, 0LL, a7, a8, a9);
  }
  else if ( !a1 )
  {
    v23 = TopLevelSpeedHitTest(grpdeskRitInput, a5, a6);
    if ( v23 )
    {
      v23 = ClassicChildTreeSpeedHitTest(v23, *a5);
      if ( v23 )
      {
        v24 = (_OWORD *)INPUTDEST_FROM_PWND(v47, v23);
        v25 = v24[1];
        v46[0] = *v24;
        v26 = v24[2];
        v46[1] = v25;
        v27 = v24[3];
        v46[2] = v26;
        v28 = v24[4];
        v46[3] = v27;
        v29 = v24[5];
        v46[4] = v28;
        v30 = v24[6];
        v46[5] = v29;
        v31 = v24[7];
        v46[6] = v30;
        v32 = v24[8];
        v46[7] = v31;
        v33 = v24[9];
        v46[8] = v32;
        v34 = v24[10];
        v23 = (struct tagWND *)v46;
        v46[9] = v33;
        v46[10] = v34;
        v35 = v46[1];
        *a9 = v46[0];
        v36 = v46[2];
        a9[1] = v35;
        v37 = v46[3];
        a9[2] = v36;
        v38 = v46[4];
        a9[3] = v37;
        v39 = v46[5];
        a9[4] = v38;
        v40 = v46[6];
        a9[5] = v39;
        v41 = v46[7];
        a9[6] = v40;
        v42 = v46[8];
        a9[7] = v41;
        v43 = v46[9];
        a9[8] = v42;
        v44 = v46[10];
        a9[9] = v43;
        a9[10] = v44;
      }
    }
  }
  return (char)v23;
}

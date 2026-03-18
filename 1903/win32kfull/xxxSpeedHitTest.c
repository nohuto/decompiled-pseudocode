/*
 * XREFs of xxxSpeedHitTest @ 0x1C00266A0
 * Callers:
 *     EditionMouseSpeedHitTest @ 0x1C0026590 (EditionMouseSpeedHitTest.c)
 *     EditionSpeedHitTest @ 0x1C0205F80 (EditionSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C02068C4 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C002680C (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C0026864 (xxxDCompSpeedHitTest.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C013176C (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C013D0BC (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02039A0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 */

__int64 __fastcall xxxSpeedHitTest(
        int a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        struct tagPOINT *a5,
        struct _SUBPIXELS *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int8 v11; // bl
  __int64 v13; // rdi
  __int64 v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  struct tagWND *v22; // rax
  struct tagWND *v23; // rax
  __int64 v24; // rax
  __int128 v25; // xmm3
  __int128 v26; // xmm4
  __int128 v27; // xmm5
  __int128 v28; // xmm6
  __int128 v29; // xmm7
  __int128 v30; // xmm8
  __int64 v31; // xmm0_8
  _OWORD v32[11]; // [rsp+58h] [rbp-89h] BYREF

  v11 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  memset(v32, 0, 0x78uLL);
  if ( v13 )
  {
    v14 = *(_QWORD *)(v13 + 16);
    LODWORD(v32[0]) = 4;
    *(_QWORD *)&v32[5] = v13;
    HIDWORD(v32[5]) = 2;
    DWORD1(v32[7]) = *(_DWORD *)(*(_QWORD *)(v14 + 416) + 1080LL);
  }
  v15 = v32[1];
  *(_OWORD *)a8 = v32[0];
  v16 = v32[2];
  *(_OWORD *)(a8 + 16) = v15;
  v17 = v32[3];
  *(_OWORD *)(a8 + 32) = v16;
  v18 = v32[4];
  *(_OWORD *)(a8 + 48) = v17;
  v19 = v32[5];
  *(_OWORD *)(a8 + 64) = v18;
  v20 = v32[6];
  *(_OWORD *)(a8 + 80) = v19;
  *(_QWORD *)&v19 = *(_QWORD *)&v32[7];
  *(_OWORD *)(a8 + 96) = v20;
  *(_QWORD *)(a8 + 112) = v19;
  if ( CanHitTestInDwm() )
  {
    return (unsigned __int8)xxxDCompSpeedHitTest(a2, a3, a5, a6, a1, a4, 0LL, a7, a8);
  }
  else if ( !a1 )
  {
    v22 = TopLevelSpeedHitTest(grpdeskRitInput, a5, a6);
    if ( v22 )
    {
      v23 = ClassicChildTreeSpeedHitTest(v22, *a5);
      if ( v23 )
      {
        v24 = INPUTDEST_FROM_PWND(v32, v23);
        v11 = 1;
        v25 = *(_OWORD *)(v24 + 16);
        v26 = *(_OWORD *)(v24 + 32);
        v27 = *(_OWORD *)(v24 + 48);
        v28 = *(_OWORD *)(v24 + 64);
        v29 = *(_OWORD *)(v24 + 80);
        v30 = *(_OWORD *)(v24 + 96);
        v31 = *(_QWORD *)(v24 + 112);
        *(_OWORD *)a8 = *(_OWORD *)v24;
        *(_OWORD *)(a8 + 16) = v25;
        *(_OWORD *)(a8 + 32) = v26;
        *(_OWORD *)(a8 + 48) = v27;
        *(_OWORD *)(a8 + 64) = v28;
        *(_OWORD *)(a8 + 80) = v29;
        *(_OWORD *)(a8 + 96) = v30;
        *(_QWORD *)(a8 + 112) = v31;
      }
    }
  }
  return v11;
}

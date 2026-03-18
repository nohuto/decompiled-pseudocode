/*
 * XREFs of xxxPointerSpeedHitTest @ 0x1C01CC154
 * Callers:
 *     EditionPointerSpeedHitTest @ 0x1C01CB5E0 (EditionPointerSpeedHitTest.c)
 * Callees:
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     ?CanHitTestInDwm@@YA_NXZ @ 0x1C00741A0 (-CanHitTestInDwm@@YA_NXZ.c)
 *     xxxDCompSpeedHitTest @ 0x1C00741EC (xxxDCompSpeedHitTest.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01C9658 (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     TouchTargetChildTree @ 0x1C01CB858 (TouchTargetChildTree.c)
 *     TouchTargetingCreateContact @ 0x1C022D114 (TouchTargetingCreateContact.c)
 */

char __fastcall xxxPointerSpeedHitTest(
        int a1,
        __int64 a2,
        unsigned int a3,
        int *a4,
        unsigned int *a5,
        struct tagINPUTDEST *a6)
{
  struct tagWND *v10; // rbx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  struct tagPOINT v20; // rcx
  __int128 *v21; // r14
  __int64 v22; // r8
  __int128 v23; // xmm0
  int v24; // eax
  struct tagWND *v25; // rax
  _QWORD *v26; // rax
  struct tagWND *v27; // r14
  _OWORD *v28; // rax
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
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  int v50; // [rsp+20h] [rbp-E0h]
  struct tagPOINT v51; // [rsp+50h] [rbp-B0h] BYREF
  struct tagPOINT v52[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v53; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v54[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v55; // [rsp+84h] [rbp-7Ch]
  __int128 v56; // [rsp+8Ch] [rbp-74h]
  __int128 v57; // [rsp+9Ch] [rbp-64h]
  int v58; // [rsp+ACh] [rbp-54h]
  _OWORD v59[11]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v60[44]; // [rsp+160h] [rbp+60h] BYREF
  __int128 v61; // [rsp+210h] [rbp+110h] BYREF
  __int128 v62; // [rsp+220h] [rbp+120h] BYREF
  struct tagPOINT v63[24]; // [rsp+230h] [rbp+130h] BYREF

  memset(v59, 0, sizeof(v59));
  v10 = 0LL;
  v11 = v59[1];
  *(_OWORD *)a6 = v59[0];
  v12 = v59[2];
  *((_OWORD *)a6 + 1) = v11;
  v13 = v59[3];
  *((_OWORD *)a6 + 2) = v12;
  v14 = v59[4];
  *((_OWORD *)a6 + 3) = v13;
  v15 = v59[5];
  *((_OWORD *)a6 + 4) = v14;
  v16 = v59[6];
  *((_OWORD *)a6 + 5) = v15;
  v17 = v59[8];
  *((_OWORD *)a6 + 6) = v16;
  *((_OWORD *)a6 + 7) = v59[7];
  v18 = v59[9];
  *((_OWORD *)a6 + 8) = v17;
  v19 = v59[10];
  *((_OWORD *)a6 + 9) = v18;
  *((_OWORD *)a6 + 10) = v19;
  v20 = *(struct tagPOINT *)(a2 + 32);
  v51 = v20;
  if ( a1 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(v20, a2) )
  {
    LOBYTE(v25) = xxxSpeedHitTest(a1, *(_DWORD *)a2, a3, *(_QWORD *)(a2 + 80), &v51, 0LL, (__int64)a4, (__int64)a5, a6);
  }
  else
  {
    v21 = 0LL;
    v61 = 0uLL;
    v62 = 0uLL;
    EtwTraceTouchTargetingSpeedHitTestStart();
    v63[23] = 0LL;
    if ( (unsigned int)_GetDeviceRects(a2, &v61, &v62) )
    {
      *(_OWORD *)&v52[0].x = v62;
      v53 = v61;
      _SetHimetricToPixelRatio(&v53, v52, v63);
      v21 = &v61;
    }
    v23 = *(_OWORD *)(a2 + 104);
    v55 = *(_QWORD *)(a2 + 32);
    v24 = *(_DWORD *)(a2 + 100);
    v56 = v23;
    v57 = v23;
    if ( (v24 & 2) != 0 )
      v58 = *(_DWORD *)(a2 + 136);
    else
      v58 = 0;
    TouchTargetingCreateContact(v54, v21, v22, v63);
    if ( g_bHitTestDwmFirstForTouch && CanHitTestInDwm() )
    {
      LOBYTE(v25) = xxxDCompSpeedHitTest(
                      *(_DWORD *)a2,
                      0x10u,
                      &v51,
                      0LL,
                      0,
                      *(_QWORD *)(a2 + 80),
                      (struct tagTOUCHTARGETINGCONTACT *)v63,
                      (__int64)a4,
                      (__int64)a5,
                      (__int64)a6);
    }
    else
    {
      v52[0] = 0LL;
      v26 = *(_QWORD **)(grpdeskRitInput + 8LL);
      v27 = (struct tagWND *)v26[3];
      v25 = TopLevelTouchTarget(
              v27,
              (struct tagTOUCHTARGETINGCONTACT *)v63,
              &v51,
              v52,
              *(_DWORD *)(*v26 + 52LL) & 1,
              *(_QWORD *)(a2 + 80),
              a4,
              a5,
              a6);
      if ( v25 )
      {
        v25 = TouchTargetChildTree(
                v25,
                v63,
                v51,
                v52,
                v50,
                !g_bHitTestDwmFirstForTouch,
                *(_QWORD *)(a2 + 80),
                a4,
                (int *)a5,
                a6);
        v27 = v25;
      }
      if ( *((_DWORD *)a6 + 21) == 2 )
        v10 = (struct tagWND *)*((_QWORD *)a6 + 9);
      if ( v10 != v27 )
      {
        v28 = INPUTDEST_FROM_PWND(v60, (__int64)v27);
        v29 = v28[1];
        v59[0] = *v28;
        v30 = v28[2];
        v59[1] = v29;
        v31 = v28[3];
        v59[2] = v30;
        v32 = v28[4];
        v59[3] = v31;
        v33 = v28[5];
        v59[4] = v32;
        v34 = v28[6];
        v59[5] = v33;
        v35 = v28[7];
        v59[6] = v34;
        v36 = v28[8];
        v59[7] = v35;
        v37 = v28[9];
        v59[8] = v36;
        v38 = v28[10];
        v25 = (struct tagWND *)v59;
        v59[9] = v37;
        v59[10] = v38;
        v39 = v59[1];
        *(_OWORD *)a6 = v59[0];
        v40 = v59[2];
        *((_OWORD *)a6 + 1) = v39;
        v41 = v59[3];
        *((_OWORD *)a6 + 2) = v40;
        v42 = v59[4];
        *((_OWORD *)a6 + 3) = v41;
        v43 = v59[5];
        *((_OWORD *)a6 + 4) = v42;
        v44 = v59[6];
        *((_OWORD *)a6 + 5) = v43;
        v45 = v59[7];
        *((_OWORD *)a6 + 6) = v44;
        v46 = v59[8];
        *((_OWORD *)a6 + 7) = v45;
        v47 = v59[9];
        *((_OWORD *)a6 + 8) = v46;
        v48 = v59[10];
        *((_OWORD *)a6 + 9) = v47;
        *((_OWORD *)a6 + 10) = v48;
      }
    }
  }
  return (char)v25;
}

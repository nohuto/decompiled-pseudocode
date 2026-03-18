/*
 * XREFs of xxxDCompSpeedHitTest @ 0x1C00741EC
 * Callers:
 *     xxxSpeedHitTest @ 0x1C0074020 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C01CC154 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00745DC (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C00748A0 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C00E78F0 (INPUTDEST_FROM_PWND.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C0105C84 (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C01C8F94 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C01CB858 (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C01CC944 (xxxTouchTargetWindow.c)
 */

char __fastcall xxxDCompSpeedHitTest(
        unsigned int a1,
        unsigned int a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4,
        int a5,
        __int64 a6,
        struct tagTOUCHTARGETINGCONTACT *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  _OWORD *v12; // rax
  __int64 v13; // rdi
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  int v33; // ecx
  int v34; // eax
  int v35; // eax
  struct tagPOINT v36; // rbx
  struct tagWND *v37; // rax
  struct tagWND *v38; // rsi
  struct tagWND *v39; // rax
  struct tagWND *v40; // rbx
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  _OWORD *v48; // rdi
  __int128 v49; // xmm1
  __int128 v50; // xmm0
  char result; // al
  __int64 v52; // rax
  _OWORD *v53; // rax
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int128 v63; // xmm0
  __int128 v64; // xmm1
  __int128 v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm0
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int128 v71; // xmm0
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 TopLevelWindow; // rbx
  __int64 ThreadWin32Thread; // rax
  bool v76; // bl
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  _OWORD *v81; // rax
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm0
  __int128 v90; // xmm1
  __int128 v91; // xmm0
  int v92; // [rsp+28h] [rbp-E0h]
  __int64 v93; // [rsp+78h] [rbp-90h] BYREF
  __int64 v94; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v95[25]; // [rsp+90h] [rbp-78h] BYREF
  _BYTE v96[176]; // [rsp+158h] [rbp+50h] BYREF
  _BYTE v97[176]; // [rsp+208h] [rbp+100h] BYREF
  _BYTE v98[176]; // [rsp+2B8h] [rbp+1B0h] BYREF

  v12 = (_OWORD *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD))DCompHitTest)(
                    v96,
                    a1,
                    a2,
                    *a3,
                    a6,
                    a5,
                    a8,
                    a9);
  v13 = a10;
  v14 = v12[1];
  *(_OWORD *)&v95[3] = *v12;
  v15 = v12[2];
  *(_OWORD *)&v95[5] = v14;
  v16 = v12[3];
  *(_OWORD *)&v95[7] = v15;
  v17 = v12[4];
  *(_OWORD *)&v95[9] = v16;
  v18 = v12[5];
  *(_OWORD *)&v95[11] = v17;
  v19 = v12[6];
  *(_OWORD *)&v95[13] = v18;
  v20 = v12[8];
  *(_OWORD *)&v95[15] = v19;
  *(_OWORD *)&v95[17] = v12[7];
  v21 = v12[9];
  *(_OWORD *)&v95[19] = v20;
  v22 = v12[10];
  *(_OWORD *)&v95[21] = v21;
  *(_OWORD *)&v95[23] = v22;
  v23 = *(_OWORD *)&v95[5];
  *(_OWORD *)a10 = *(_OWORD *)&v95[3];
  v24 = *(_OWORD *)&v95[7];
  *(_OWORD *)(v13 + 16) = v23;
  v25 = *(_OWORD *)&v95[9];
  *(_OWORD *)(v13 + 32) = v24;
  v26 = *(_OWORD *)&v95[11];
  *(_OWORD *)(v13 + 48) = v25;
  v27 = *(_OWORD *)&v95[13];
  *(_OWORD *)(v13 + 64) = v26;
  v28 = *(_OWORD *)&v95[15];
  *(_OWORD *)(v13 + 80) = v27;
  v29 = *(_OWORD *)&v95[17];
  *(_OWORD *)(v13 + 96) = v28;
  v30 = *(_OWORD *)&v95[19];
  *(_OWORD *)(v13 + 112) = v29;
  v31 = *(_OWORD *)&v95[21];
  *(_OWORD *)(v13 + 128) = v30;
  v32 = *(_OWORD *)&v95[23];
  *(_OWORD *)(v13 + 144) = v31;
  *(_OWORD *)(v13 + 160) = v32;
  v33 = *(_DWORD *)(v13 + 84);
  if ( v33 == 2 )
    v34 = -(*(_DWORD *)(v13 + 80) & 1);
  else
    v34 = 0;
  if ( v34 )
  {
    v35 = 2;
    goto LABEL_5;
  }
  if ( v33 == 2 )
    v52 = *(_QWORD *)(v13 + 72);
  else
    v52 = 0LL;
  if ( !v52 )
  {
    v35 = 1;
LABEL_5:
    if ( a7 )
    {
      if ( v35 == 2 )
      {
        v72 = *(_QWORD *)(v13 + 72);
        v93 = 0LL;
        TopLevelWindow = GetTopLevelWindow(v72);
        if ( TopLevelWindow )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73);
          v95[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v95;
          v95[1] = TopLevelWindow;
          _InterlockedIncrement((volatile signed __int32 *)(TopLevelWindow + 8));
          v76 = (unsigned int)xxxTouchTargetWindow(
                                (struct tagWND *)TopLevelWindow,
                                a7,
                                a3,
                                (__int64)&a10,
                                (__int64)&v93,
                                *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 52LL) & 1,
                                0,
                                0LL,
                                0LL,
                                0LL,
                                0LL,
                                0LL) != 0;
          ThreadUnlock1(v78, v77, v79);
          if ( v76 )
          {
            v80 = TouchTargetChildTree(*(struct tagWND **)(v13 + 72), a7, v92, 0, 0LL, 0LL, 0LL, 0LL);
            v81 = (_OWORD *)INPUTDEST_FROM_PWND(v97, v80);
            v82 = v81[1];
            *(_OWORD *)&v95[3] = *v81;
            v83 = v81[2];
            *(_OWORD *)&v95[5] = v82;
            v84 = v81[3];
            *(_OWORD *)&v95[7] = v83;
            v85 = v81[4];
            *(_OWORD *)&v95[9] = v84;
            v86 = v81[5];
            *(_OWORD *)&v95[11] = v85;
            v87 = v81[6];
            *(_OWORD *)&v95[13] = v86;
            v88 = v81[7];
            *(_OWORD *)&v95[15] = v87;
            v89 = v81[8];
            *(_OWORD *)&v95[17] = v88;
            v90 = v81[9];
            *(_OWORD *)&v95[19] = v89;
            v91 = v81[10];
            *(_OWORD *)&v95[21] = v90;
            *(_OWORD *)&v95[23] = v91;
            goto LABEL_14;
          }
        }
      }
    }
    else
    {
      v36 = *a3;
      if ( v35 != 2
        || (v37 = (struct tagWND *)GetTopLevelWindow(*(_QWORD *)(v13 + 72)), (v38 = v37) == 0LL)
        || !(unsigned int)DCEIsWindowHit(v37, a3, a4) )
      {
        v38 = TopLevelSpeedHitTest(grpdeskRitInput, a3, a4);
      }
      if ( v38 )
      {
        v39 = gfDwmChildWindowDpiIsolationEnabled
            ? DCEChildTreeSpeedHitTest(v38, v36, a3, a4)
            : ClassicChildTreeSpeedHitTest(v38, *a3);
        v40 = v39;
        if ( v39 )
        {
          memset(&v95[3], 0, 0xB0uLL);
          LODWORD(v95[3]) = 4;
          v95[12] = v40;
          HIDWORD(v95[13]) = 2;
LABEL_14:
          v41 = *(_OWORD *)&v95[5];
          *(_OWORD *)v13 = *(_OWORD *)&v95[3];
          v42 = *(_OWORD *)&v95[7];
          *(_OWORD *)(v13 + 16) = v41;
          v43 = *(_OWORD *)&v95[9];
          *(_OWORD *)(v13 + 32) = v42;
          v44 = *(_OWORD *)&v95[11];
          *(_OWORD *)(v13 + 48) = v43;
          v45 = *(_OWORD *)&v95[13];
          *(_OWORD *)(v13 + 64) = v44;
          v46 = *(_OWORD *)&v95[15];
          *(_OWORD *)(v13 + 80) = v45;
          v47 = *(_OWORD *)&v95[17];
          *(_OWORD *)(v13 + 96) = v46;
          v48 = (_OWORD *)(v13 + 128);
          *(v48 - 1) = v47;
          v49 = *(_OWORD *)&v95[21];
          *v48 = *(_OWORD *)&v95[19];
          v50 = *(_OWORD *)&v95[23];
          result = 1;
LABEL_15:
          v48[1] = v49;
          v48[2] = v50;
          return result;
        }
      }
    }
    v53 = (_OWORD *)INPUTDEST_FROM_PWND(v98, *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
    v54 = v53[1];
    *(_OWORD *)&v95[3] = *v53;
    v55 = v53[2];
    *(_OWORD *)&v95[5] = v54;
    v56 = v53[3];
    *(_OWORD *)&v95[7] = v55;
    v57 = v53[4];
    *(_OWORD *)&v95[9] = v56;
    v58 = v53[5];
    *(_OWORD *)&v95[11] = v57;
    v59 = v53[6];
    *(_OWORD *)&v95[13] = v58;
    v60 = v53[7];
    *(_OWORD *)&v95[15] = v59;
    v61 = v53[8];
    *(_OWORD *)&v95[17] = v60;
    v62 = v53[9];
    *(_OWORD *)&v95[19] = v61;
    v63 = v53[10];
    *(_OWORD *)&v95[21] = v62;
    *(_OWORD *)&v95[23] = v63;
    v64 = *(_OWORD *)&v95[5];
    *(_OWORD *)v13 = *(_OWORD *)&v95[3];
    v65 = *(_OWORD *)&v95[7];
    *(_OWORD *)(v13 + 16) = v64;
    v66 = *(_OWORD *)&v95[9];
    *(_OWORD *)(v13 + 32) = v65;
    v67 = *(_OWORD *)&v95[11];
    *(_OWORD *)(v13 + 48) = v66;
    v68 = *(_OWORD *)&v95[13];
    *(_OWORD *)(v13 + 64) = v67;
    v69 = *(_OWORD *)&v95[15];
    *(_OWORD *)(v13 + 80) = v68;
    v70 = *(_OWORD *)&v95[17];
    *(_OWORD *)(v13 + 96) = v69;
    v48 = (_OWORD *)(v13 + 128);
    v71 = *(_OWORD *)&v95[19];
    *(v48 - 1) = v70;
    v49 = *(_OWORD *)&v95[21];
    *v48 = v71;
    v50 = *(_OWORD *)&v95[23];
    result = 0;
    goto LABEL_15;
  }
  v94 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 72) + 40LL) + 256LL));
  PhysicalToLogicalDPIPoint(a3, a3, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v13 + 72) + 40LL) + 288LL), &v94);
  return 1;
}

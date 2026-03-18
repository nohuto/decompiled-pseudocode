/*
 * XREFs of xxxDCompSpeedHitTest @ 0x1C002CCD4
 * Callers:
 *     xxxSpeedHitTest @ 0x1C002CB10 (xxxSpeedHitTest.c)
 *     xxxPointerSpeedHitTest @ 0x1C0206614 (xxxPointerSpeedHitTest.c)
 * Callees:
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C002D124 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     ?DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z @ 0x1C002D310 (-DCEChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@PEAU2@PEBU_SUBPIXELS@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010C26C (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0116D7C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z @ 0x1C02036F0 (-ClassicChildTreeSpeedHitTest@@YAPEAUtagWND@@PEAU1@UtagPOINT@@@Z.c)
 *     TouchTargetChildTree @ 0x1C0205D88 (TouchTargetChildTree.c)
 *     xxxTouchTargetWindow @ 0x1C0206D90 (xxxTouchTargetWindow.c)
 */

char xxxDCompSpeedHitTest(
        unsigned int a1,
        unsigned int a2,
        struct tagPOINT *a3,
        const struct _SUBPIXELS *a4,
        int a5,
        __int64 a6,
        struct tagTOUCHTARGETINGCONTACT *a7,
        __int64 a8,
        ...)
{
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rdi
  char v12; // si
  __int128 v13; // xmm3
  __int128 v14; // xmm4
  __int128 v15; // xmm5
  __int128 v16; // xmm6
  __int128 v17; // xmm7
  __int128 v18; // xmm8
  __int64 v19; // xmm0_8
  int v20; // ecx
  int v21; // eax
  int v22; // eax
  struct tagPOINT v23; // rbx
  struct tagWND *v24; // rax
  struct tagWND *v25; // r15
  struct tagWND *v26; // rax
  struct tagWND *v27; // rbx
  __int64 v28; // rax
  __int128 v29; // xmm1
  __int64 v30; // rcx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v37; // rax
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  int v39; // r9d
  __int64 v40; // rax
  __int128 v41; // xmm3
  __int128 v42; // xmm4
  __int128 v43; // xmm5
  __int128 v44; // xmm6
  __int128 v45; // xmm7
  __int128 v46; // xmm8
  __int64 v47; // xmm0_8
  __int64 v49; // rcx
  struct tagWND *TopLevelWindow; // r15
  __int64 ThreadWin32Thread; // rax
  bool v52; // bl
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rax
  int v57; // [rsp+28h] [rbp-E0h]
  int v58; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v61; // [rsp+68h] [rbp-A0h] BYREF
  struct tagWND *v62; // [rsp+70h] [rbp-98h]
  __int64 v63; // [rsp+78h] [rbp-90h]
  _BYTE v64[120]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v65[120]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v66[120]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v67[176]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v69; // [rsp+308h] [rbp+200h] BYREF
  va_list va; // [rsp+308h] [rbp+200h]
  va_list va1; // [rsp+310h] [rbp+208h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v69 = va_arg(va1, _QWORD);
  v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))DCompHitTest)(
         v65,
         a1,
         a2,
         *a3,
         a6,
         a5,
         a8);
  v11 = v69;
  v12 = 0;
  v13 = *(_OWORD *)(v9 + 16);
  v14 = *(_OWORD *)(v9 + 32);
  v15 = *(_OWORD *)(v9 + 48);
  v16 = *(_OWORD *)(v9 + 64);
  v17 = *(_OWORD *)(v9 + 80);
  v18 = *(_OWORD *)(v9 + 96);
  v19 = *(_QWORD *)(v9 + 112);
  *(_OWORD *)v69 = *(_OWORD *)v9;
  *(_OWORD *)(v11 + 16) = v13;
  *(_OWORD *)(v11 + 32) = v14;
  *(_OWORD *)(v11 + 48) = v15;
  *(_OWORD *)(v11 + 64) = v16;
  *(_OWORD *)(v11 + 80) = v17;
  *(_OWORD *)(v11 + 96) = v18;
  *(_QWORD *)(v11 + 112) = v19;
  v20 = *(_DWORD *)(v11 + 92);
  v58 = *(_DWORD *)(v11 + 4);
  if ( v20 == 2 )
    v21 = -(*(_DWORD *)(v11 + 88) & 1);
  else
    v21 = 0;
  if ( v21 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v20, v10, 16, 34, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    v22 = 2;
  }
  else
  {
    if ( v20 == 2 )
      v37 = *(_QWORD *)(v11 + 80);
    else
      v37 = 0LL;
    if ( v37 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_(v20, v10, 16, 35, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      }
      CompositionInputWindowUIOwner = *(struct tagWND **)(v11 + 80);
      if ( (*(_DWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL) & 0xF) != 2 )
      {
        if ( (unsigned int)IsIndependentInputWindow(*(const struct tagWND **)(v11 + 80)) )
          CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(CompositionInputWindowUIOwner);
        v60 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 256LL));
        PhysicalToLogicalDPIPoint(
          a3,
          a3,
          *(unsigned int *)(*((_QWORD *)CompositionInputWindowUIOwner + 5) + 288LL),
          &v60);
      }
      goto LABEL_16;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v20, v10, 16, 36, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
    }
    v22 = 1;
  }
  if ( a7 )
  {
    if ( v22 == 2 )
    {
      v49 = *(_QWORD *)(v11 + 80);
      v59 = 0LL;
      TopLevelWindow = (struct tagWND *)GetTopLevelWindow(v49);
      if ( TopLevelWindow )
      {
        v61 = 0LL;
        v62 = 0LL;
        v63 = 0LL;
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v61 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v61;
        v62 = TopLevelWindow;
        HMLockObject(TopLevelWindow);
        v52 = (unsigned int)xxxTouchTargetWindow(
                              TopLevelWindow,
                              a7,
                              a3,
                              (__int64)va,
                              (__int64)&v59,
                              *(_DWORD *)(**(_QWORD **)(grpdeskRitInput + 8LL) + 64LL) & 1) != 0;
        ThreadUnlock1(v54, v53, v55);
        if ( v52 )
        {
          v56 = TouchTargetChildTree(TopLevelWindow, a7, v57);
          v40 = INPUTDEST_FROM_PWND(v66, v56);
          v12 = 1;
          goto LABEL_35;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = 37;
      goto LABEL_33;
    }
LABEL_34:
    v40 = INPUTDEST_FROM_PWND(v67, *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL));
LABEL_35:
    v41 = *(_OWORD *)(v40 + 16);
    v42 = *(_OWORD *)(v40 + 32);
    v43 = *(_OWORD *)(v40 + 48);
    v44 = *(_OWORD *)(v40 + 64);
    v45 = *(_OWORD *)(v40 + 80);
    v46 = *(_OWORD *)(v40 + 96);
    v47 = *(_QWORD *)(v40 + 112);
    *(_OWORD *)v11 = *(_OWORD *)v40;
    *(_OWORD *)(v11 + 16) = v41;
    *(_OWORD *)(v11 + 32) = v42;
    *(_OWORD *)(v11 + 48) = v43;
    *(_OWORD *)(v11 + 64) = v44;
    *(_OWORD *)(v11 + 80) = v45;
    *(_OWORD *)(v11 + 96) = v46;
    *(_QWORD *)(v11 + 112) = v47;
    goto LABEL_17;
  }
  v23 = *a3;
  if ( v22 != 2
    || (v24 = (struct tagWND *)GetTopLevelWindow(*(_QWORD *)(v11 + 80)), (v25 = v24) == 0LL)
    || !(unsigned int)DCEIsWindowHit(v24, a3, a4) )
  {
    v25 = TopLevelSpeedHitTest(grpdeskRitInput, a3, a4);
  }
  if ( !v25
    || (!gfDwmChildWindowDpiIsolationEnabled
      ? (v26 = ClassicChildTreeSpeedHitTest(v25, *a3))
      : (v26 = DCEChildTreeSpeedHitTest(v25, v23, a3, a4)),
        (v27 = v26) == 0LL) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v39 = 38;
LABEL_33:
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_(v20, v10, 16, v39, (__int64)&WPP_d53fe3e85c4d3f9300908b7537fb02be_Traceguids);
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  memset(v64, 0, sizeof(v64));
  v28 = *((_QWORD *)v27 + 2);
  v29 = *(_OWORD *)&v64[16];
  *(_DWORD *)v64 = 4;
  v30 = *(_QWORD *)(v28 + 416);
  *(_QWORD *)&v64[80] = v27;
  *(_DWORD *)&v64[92] = 2;
  LODWORD(v28) = *(_DWORD *)(v30 + 1080);
  *(_OWORD *)v11 = *(_OWORD *)v64;
  *(_DWORD *)&v64[116] = v28;
  v31 = *(_OWORD *)&v64[32];
  *(_OWORD *)(v11 + 16) = v29;
  v32 = *(_OWORD *)&v64[48];
  *(_OWORD *)(v11 + 32) = v31;
  v33 = *(_OWORD *)&v64[64];
  *(_OWORD *)(v11 + 48) = v32;
  v34 = *(_OWORD *)&v64[80];
  *(_OWORD *)(v11 + 64) = v33;
  v35 = *(_OWORD *)&v64[96];
  *(_OWORD *)(v11 + 80) = v34;
  *(_QWORD *)&v34 = *(_QWORD *)&v64[112];
  *(_OWORD *)(v11 + 96) = v35;
  *(_QWORD *)(v11 + 112) = v34;
LABEL_16:
  v12 = 1;
LABEL_17:
  *(_DWORD *)(v11 + 4) = v58;
  return v12;
}

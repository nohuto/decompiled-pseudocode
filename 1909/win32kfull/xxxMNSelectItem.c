/*
 * XREFs of xxxMNSelectItem @ 0x1C0226024
 * Callers:
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C02229F0 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C024A2A4 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rax
  __int64 v55; // r8
  __int64 v56; // rbx
  __int64 v57; // rax
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  _QWORD v78[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v79[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v80; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v81; // [rsp+58h] [rbp-A8h]
  __int64 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  __int64 v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h]
  _QWORD v86[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h]
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  __int64 v89; // [rsp+A0h] [rbp-60h]
  __int64 v90; // [rsp+A8h] [rbp-58h]
  __int64 v91; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v92; // [rsp+B8h] [rbp-48h]
  __int64 v93; // [rsp+C0h] [rbp-40h]
  _QWORD v94[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v95; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v96; // [rsp+E8h] [rbp-18h]
  __int64 v97; // [rsp+F0h] [rbp-10h]
  __int128 v98; // [rsp+100h] [rbp+0h]
  _QWORD v99[4]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v100; // [rsp+130h] [rbp+30h] BYREF
  __int64 v101; // [rsp+170h] [rbp+70h]
  __int64 v102; // [rsp+170h] [rbp+70h]

  v3 = a3;
  v80 = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  v97 = 0LL;
  v83 = 0LL;
  v84 = 0LL;
  v85 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v86, 0LL);
  v8 = *a1;
  v9 = 0LL;
  v87 = 0LL;
  if ( *(_DWORD *)(*v8 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v6 = *(_QWORD *)(**a1 + 40);
      v9 = *(_QWORD *)(v6 + 88) + 96 * v3;
    }
    goto LABEL_57;
  }
  v10 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v101 = v10;
  v6 = **a1;
  if ( (*(_DWORD *)v6 & 0x1000) != 0 && !v10 )
    goto LABEL_57;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v11 = *(_QWORD *)(**a1 + 40);
  v87 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v86, v11);
  v14 = v87;
  if ( !v87 )
    v14 = *(_QWORD *)v86[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13);
  v17 = *(_QWORD *)(ThreadWin32Thread + 408);
  v83 = v17;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v83;
  v84 = v14;
  if ( v14 )
    HMLockObject(v14);
  v18 = *(_QWORD *)(**a1 + 8);
  v19 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v16);
  v80 = *(_QWORD *)(v19 + 408);
  *(_QWORD *)(v19 + 408) = &v80;
  v81 = v18;
  if ( v18 )
    HMLockObject(v18);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v20 = *(_QWORD *)(v101 + 8);
    if ( v20 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v78, v20);
      FindTimer(*(_QWORD *)(*(_QWORD *)v78[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v78[0] &= ~0x4000u;
      if ( (**(_DWORD **)v78[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v78[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v78[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v78[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v78[0] + 84LL) )
      {
        v88 = 0LL;
        v89 = 0LL;
        v90 = 0LL;
        v91 = 0LL;
        v92 = 0LL;
        v93 = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v94, *(_QWORD *)(*(_QWORD *)v78[0] + 40LL));
        v94[2] = 0LL;
        v21 = *(_QWORD *)(*(_QWORD *)v78[0] + 8LL);
        v102 = *(_QWORD *)v94[0];
        v24 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23);
        v26 = *(_QWORD *)(v24 + 408);
        v88 = v26;
        *(_QWORD *)(v24 + 408) = &v88;
        v89 = v102;
        if ( v102 )
          HMLockObject(v102);
        v27 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v25);
        v91 = *(_QWORD *)(v27 + 408);
        *(_QWORD *)(v27 + 408) = &v91;
        v92 = v21;
        if ( v21 )
          HMLockObject(v21);
        if ( *(_DWORD *)(*(_QWORD *)v78[0] + 80LL) != -1 )
          xxxMNInvertItem(v78, v94, *(unsigned int *)(*(_QWORD *)v78[0] + 80LL), v21, 0);
        *(_DWORD *)(*(_QWORD *)v78[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v78[0] + 84LL);
        xxxMNInvertItem(v78, v94, *(unsigned int *)(*(_QWORD *)v78[0] + 84LL), v21, 1);
        ThreadUnlock1(v29, v28, v30);
        ThreadUnlock1(v32, v31, v33);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v94, v34, v35);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v36 = **a1;
      *(_QWORD *)&v98 = *(_QWORD *)(v36 + 64) + 56LL;
      *((_QWORD *)&v98 + 1) = *(_QWORD *)(v36 + 16);
      v100 = v98;
      HMAssignmentLock(&v100);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v78, v37, v38);
    }
  }
  v39 = **a1;
  if ( *(int *)(v39 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v39 + 80) + 4) > 1 )
      goto LABEL_36;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v39 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy((_DWORD ***)a1);
  }
  xxxMNInvertItem(a1, v86, *(unsigned int *)(**a1 + 80), v18, 0);
LABEL_36:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v46 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v46 = 4294967292LL;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v46, 0, 0);
    ThreadUnlock1(v48, v47, v49);
    ThreadUnlock1(v51, v50, v52);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_57;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v79, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v53 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v54 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v54 || (v53 = *(_QWORD *)(v54 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v79, v53, v55);
        goto LABEL_57;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v79, v53);
    if ( *(_QWORD *)v79[0] && *(_QWORD *)(*(_QWORD *)v79[0] + 8LL) )
    {
      v56 = *(_QWORD *)(*(_QWORD *)v79[0] + 8LL);
      v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v55);
      v80 = *(_QWORD *)(v57 + 408);
      *(_QWORD *)(v57 + 408) = &v80;
      v81 = v56;
      HMLockObject(v56);
      v58 = *(_QWORD *)(*(_QWORD *)v79[0] + 16LL);
      v61 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60);
      v63 = *(_QWORD *)(v61 + 408);
      v95 = v63;
      *(_QWORD *)(v61 + 408) = &v95;
      v96 = v58;
      if ( v58 )
        HMLockObject(v58);
      v64 = *(_QWORD *)(*(_QWORD *)v79[0] + 40LL);
      v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v62);
      v83 = *(_QWORD *)(v65 + 408);
      *(_QWORD *)(v65 + 408) = &v83;
      v84 = v64;
      if ( v64 )
        HMLockObject(v64);
      SmartObjStackRefBase<tagMENU>::Init(v99, *(_QWORD *)(*(_QWORD *)v79[0] + 40LL));
      v99[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v79[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v79[0] + 16LL),
        (unsigned int)v99,
        *(_DWORD *)(*(_QWORD *)v79[0] + 80LL),
        a2);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v99, v66, v67);
      ThreadUnlock1(v69, v68, v70);
      ThreadUnlock1(v72, v71, v73);
      ThreadUnlock1(v75, v74, v76);
    }
    goto LABEL_56;
  }
  *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v3, 1);
  v9 = xxxMNInvertItem(a1, v86, (unsigned int)v3, v18, 1);
  ThreadUnlock1(v41, v40, v42);
  ThreadUnlock1(v44, v43, v45);
LABEL_57:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v86, v6, v7);
  return v9;
}

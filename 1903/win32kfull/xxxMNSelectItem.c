/*
 * XREFs of xxxMNSelectItem @ 0x1C0226564
 * Callers:
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0222F30 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C024A9E4 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r8
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rax
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  _QWORD v89[2]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v90[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v91; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v92; // [rsp+58h] [rbp-A8h]
  __int64 v93; // [rsp+60h] [rbp-A0h]
  __int64 v94; // [rsp+68h] [rbp-98h] BYREF
  __int64 v95; // [rsp+70h] [rbp-90h]
  __int64 v96; // [rsp+78h] [rbp-88h]
  _QWORD v97[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v98; // [rsp+90h] [rbp-70h]
  __int64 v99; // [rsp+98h] [rbp-68h] BYREF
  __int64 v100; // [rsp+A0h] [rbp-60h]
  __int64 v101; // [rsp+A8h] [rbp-58h]
  __int64 v102; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v103; // [rsp+B8h] [rbp-48h]
  __int64 v104; // [rsp+C0h] [rbp-40h]
  _QWORD v105[3]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v106; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v107; // [rsp+E8h] [rbp-18h]
  __int64 v108; // [rsp+F0h] [rbp-10h]
  __int128 v109; // [rsp+100h] [rbp+0h]
  _QWORD v110[4]; // [rsp+110h] [rbp+10h] BYREF
  __int128 v111; // [rsp+130h] [rbp+30h] BYREF
  __int64 v112; // [rsp+170h] [rbp+70h]
  __int64 v113; // [rsp+170h] [rbp+70h]

  v3 = a3;
  v91 = 0LL;
  v92 = 0LL;
  v93 = 0LL;
  v106 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v94 = 0LL;
  v95 = 0LL;
  v96 = 0LL;
  SmartObjStackRefBase<tagMENU>::Init(v97, 0LL);
  v9 = *a1;
  v10 = 0LL;
  v98 = 0LL;
  if ( *(_DWORD *)(*v9 + 80) == (_DWORD)v3 )
  {
    if ( (_DWORD)v3 != -1 && (unsigned int)v3 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v6 = *(_QWORD *)(**a1 + 40);
      v10 = *(_QWORD *)(v6 + 88) + 96 * v3;
    }
    goto LABEL_57;
  }
  v11 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v112 = v11;
  v6 = **a1;
  if ( (*(_DWORD *)v6 & 0x1000) != 0 && !v11 )
    goto LABEL_57;
  MNAnimate(a2, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v12 = *(_QWORD *)(**a1 + 40);
  v98 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v97, v12);
  v16 = v98;
  if ( !v98 )
    v16 = *(_QWORD *)v97[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15);
  v20 = *(_QWORD *)(ThreadWin32Thread + 408);
  v94 = v20;
  *(_QWORD *)(ThreadWin32Thread + 408) = &v94;
  v95 = v16;
  if ( v16 )
    HMLockObject(v16);
  v21 = *(_QWORD *)(**a1 + 8);
  v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v18, v19);
  v91 = *(_QWORD *)(v22 + 408);
  *(_QWORD *)(v22 + 408) = &v91;
  v92 = v21;
  if ( v21 )
    HMLockObject(v21);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v23 = *(_QWORD *)(v112 + 8);
    if ( v23 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v89, v23);
      FindTimer(*(_QWORD *)(*(_QWORD *)v89[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v89[0] &= ~0x4000u;
      if ( (**(_DWORD **)v89[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v89[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v89[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v89[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v89[0] + 84LL) )
      {
        v99 = 0LL;
        v100 = 0LL;
        v101 = 0LL;
        v102 = 0LL;
        v103 = 0LL;
        v104 = 0LL;
        SmartObjStackRefBase<tagMENU>::Init(v105, *(_QWORD *)(*(_QWORD *)v89[0] + 40LL));
        v105[2] = 0LL;
        v24 = *(_QWORD *)(*(_QWORD *)v89[0] + 8LL);
        v113 = *(_QWORD *)v105[0];
        v28 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27);
        v31 = *(_QWORD *)(v28 + 408);
        v99 = v31;
        *(_QWORD *)(v28 + 408) = &v99;
        v100 = v113;
        if ( v113 )
          HMLockObject(v113);
        v32 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v29, v30);
        v102 = *(_QWORD *)(v32 + 408);
        *(_QWORD *)(v32 + 408) = &v102;
        v103 = v24;
        if ( v24 )
          HMLockObject(v24);
        if ( *(_DWORD *)(*(_QWORD *)v89[0] + 80LL) != -1 )
          xxxMNInvertItem(v89, v105, *(unsigned int *)(*(_QWORD *)v89[0] + 80LL), v24, 0);
        *(_DWORD *)(*(_QWORD *)v89[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v89[0] + 84LL);
        xxxMNInvertItem(v89, v105, *(unsigned int *)(*(_QWORD *)v89[0] + 84LL), v24, 1);
        ThreadUnlock1(v34, v33, v35);
        ThreadUnlock1(v37, v36, v38);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v105, v39, v40, v41);
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v42 = **a1;
      *(_QWORD *)&v109 = *(_QWORD *)(v42 + 64) + 56LL;
      *((_QWORD *)&v109 + 1) = *(_QWORD *)(v42 + 16);
      v111 = v109;
      HMAssignmentLock(&v111);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v89, v43, v44, v45);
    }
  }
  v46 = **a1;
  if ( *(int *)(v46 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v46 + 80) + 4) > 1 )
      goto LABEL_36;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v46 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, a2);
    else
      MNSetTimerToCloseHierarchy((_DWORD ***)a1);
  }
  xxxMNInvertItem(a1, v97, *(unsigned int *)(**a1 + 80), v21, 0);
LABEL_36:
  *(_DWORD *)(**a1 + 80) = v3;
  if ( (_DWORD)v3 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v53 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v53 = 4294967292LL;
    xxxWindowEvent(0x8005u, *(struct tagWND **)(**a1 + 16), v53, 0LL, 0);
    ThreadUnlock1(v55, v54, v56);
    ThreadUnlock1(v58, v57, v59);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_57;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v90, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v60 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v61 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v61 || (v60 = *(_QWORD *)(v61 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v90, v60, v62, v63);
        goto LABEL_57;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v90, v60);
    if ( *(_QWORD *)v90[0] && *(_QWORD *)(*(_QWORD *)v90[0] + 8LL) )
    {
      v64 = *(_QWORD *)(*(_QWORD *)v90[0] + 8LL);
      v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v62, v63);
      v91 = *(_QWORD *)(v65 + 408);
      *(_QWORD *)(v65 + 408) = &v91;
      v92 = v64;
      HMLockObject(v64);
      v66 = *(_QWORD *)(*(_QWORD *)v90[0] + 16LL);
      v70 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69);
      v73 = *(_QWORD *)(v70 + 408);
      v106 = v73;
      *(_QWORD *)(v70 + 408) = &v106;
      v107 = v66;
      if ( v66 )
        HMLockObject(v66);
      v74 = *(_QWORD *)(*(_QWORD *)v90[0] + 40LL);
      v75 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73, v71, v72);
      v94 = *(_QWORD *)(v75 + 408);
      *(_QWORD *)(v75 + 408) = &v94;
      v95 = v74;
      if ( v74 )
        HMLockObject(v74);
      SmartObjStackRefBase<tagMENU>::Init(v110, *(_QWORD *)(*(_QWORD *)v90[0] + 40LL));
      v110[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v90[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v90[0] + 16LL),
        (unsigned int)v110,
        *(_DWORD *)(*(_QWORD *)v90[0] + 80LL),
        a2);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v110, v76, v77, v78);
      ThreadUnlock1(v80, v79, v81);
      ThreadUnlock1(v83, v82, v84);
      ThreadUnlock1(v86, v85, v87);
    }
    goto LABEL_56;
  }
  *(_DWORD *)(a2 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(a2 + 8) & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v3, 1);
  v10 = xxxMNInvertItem(a1, v97, (unsigned int)v3, v21, 1);
  ThreadUnlock1(v48, v47, v49);
  ThreadUnlock1(v51, v50, v52);
LABEL_57:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v97, v6, v7, v8);
  return v10;
}

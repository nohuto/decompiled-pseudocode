/*
 * XREFs of xxxMNSelectItem @ 0x1C020E8F4
 * Callers:
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C020A874 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C020B400 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C0231D7C (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 */

__int64 __fastcall xxxMNSelectItem(__int64 **a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r14
  __int64 v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  _QWORD v59[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v60[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v61[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int128 v63; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+80h] [rbp-88h]
  _QWORD v65[3]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v66; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-60h]
  __int64 v68; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v69; // [rsp+C0h] [rbp-48h]
  _QWORD v70[3]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v71[3]; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v72[3]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v73[4]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v74; // [rsp+168h] [rbp+60h]

  v3 = a2;
  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v61, 0LL);
  v7 = *a1;
  v8 = 0LL;
  v62 = 0LL;
  if ( *(_DWORD *)(*v7 + 80) == (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
    {
      v6 = *(_QWORD *)(**a1 + 40);
      v8 = *(_QWORD *)(v6 + 88) + 96 * v4;
    }
    goto LABEL_57;
  }
  v9 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
  v74 = v9;
  v6 = **a1;
  if ( (*(_DWORD *)v6 & 0x1000) != 0 && !v9 )
    goto LABEL_57;
  MNAnimate(v3, 0LL);
  if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
  {
    FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
    *(_DWORD *)**a1 &= ~0x2000u;
  }
  v10 = *(_QWORD *)(**a1 + 40);
  v62 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v61, v10);
  v12 = v62;
  if ( !v62 )
    v12 = *(_QWORD *)v61[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  v68 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v68;
  v69 = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v15 = *(_QWORD *)(**a1 + 8);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
  v66 = *(_QWORD *)(v16 + 416);
  *(_QWORD *)(v16 + 416) = &v66;
  v67 = v15;
  if ( v15 )
    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v17 = *(_QWORD *)(v74 + 8);
    if ( v17 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v59, v17);
      FindTimer(*(_QWORD *)(*(_QWORD *)v59[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v59[0] &= ~0x4000u;
      if ( (**(_DWORD **)v59[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v59[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v59[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v59[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v59[0] + 84LL) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v65, *(_QWORD *)(*(_QWORD *)v59[0] + 40LL));
        v65[2] = 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
        v19 = *(_QWORD *)v65[0];
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
        v71[0] = *(_QWORD *)(v21 + 416);
        *(_QWORD *)(v21 + 416) = v71;
        v71[1] = v19;
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
        v72[0] = *(_QWORD *)(v23 + 416);
        *(_QWORD *)(v23 + 416) = v72;
        v72[1] = v18;
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        if ( *(_DWORD *)(*(_QWORD *)v59[0] + 80LL) != -1 )
          xxxMNInvertItem(v59, v65, *(unsigned int *)(*(_QWORD *)v59[0] + 80LL), v18, 0);
        *(_DWORD *)(*(_QWORD *)v59[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v59[0] + 84LL);
        xxxMNInvertItem(v59, v65, *(unsigned int *)(*(_QWORD *)v59[0] + 84LL), v18, 1);
        ThreadUnlock1(v25, v24);
        ThreadUnlock1(v27, v26);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v65, v28);
        v3 = a2;
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v29 = **a1;
      *((_QWORD *)&v63 + 1) = *(_QWORD *)(v29 + 64) + 56LL;
      v64 = *(_QWORD *)(v29 + 16);
      HMAssignmentLock((char *)&v63 + 8);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, v30);
    }
  }
  v31 = **a1;
  if ( *(int *)(v31 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v31 + 80) + 4) > 1 )
      goto LABEL_36;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v31 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, v3);
    else
      MNSetTimerToCloseHierarchy((_DWORD ***)a1);
  }
  xxxMNInvertItem(a1, v61, *(unsigned int *)(**a1 + 80), v15, 0);
LABEL_36:
  *(_DWORD *)(**a1 + 80) = v4;
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v36 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v36 = -4;
    xxxWindowEvent(0x8005u, *(_QWORD *)(**a1 + 16), v36, 0, 0);
    ThreadUnlock1(v38, v37);
    ThreadUnlock1(v40, v39);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_57;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v60, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v41 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v42 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v42 || (v41 = *(_QWORD *)(v42 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v60, v41);
        goto LABEL_57;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v60, v41);
    if ( *(_QWORD *)v60[0] && *(_QWORD *)(*(_QWORD *)v60[0] + 8LL) )
    {
      v43 = *(_QWORD *)(*(_QWORD *)v60[0] + 8LL);
      v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41);
      v66 = *(_QWORD *)(v44 + 416);
      *(_QWORD *)(v44 + 416) = &v66;
      v67 = v43;
      _InterlockedAdd((volatile signed __int32 *)(v43 + 8), 1u);
      v45 = *(_QWORD *)(*(_QWORD *)v60[0] + 16LL);
      v47 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46);
      v73[0] = *(_QWORD *)(v47 + 416);
      *(_QWORD *)(v47 + 416) = v73;
      v73[1] = v45;
      if ( v45 )
        _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
      v49 = *(_QWORD *)(*(_QWORD *)v60[0] + 40LL);
      v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48);
      v68 = *(_QWORD *)(v50 + 416);
      *(_QWORD *)(v50 + 416) = &v68;
      v69 = v49;
      if ( v49 )
        _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
      SmartObjStackRefBase<tagMENU>::Init(v70, *(_QWORD *)(*(_QWORD *)v60[0] + 40LL));
      v70[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v60[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v60[0] + 16LL),
        (unsigned int)v70,
        *(_DWORD *)(*(_QWORD *)v60[0] + 80LL),
        v3);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v70, v51);
      ThreadUnlock1(v53, v52);
      ThreadUnlock1(v55, v54);
      ThreadUnlock1(v57, v56);
    }
    goto LABEL_56;
  }
  *(_DWORD *)(v3 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v4, 1);
  v8 = xxxMNInvertItem(a1, v61, (unsigned int)v4, v15, 1);
  ThreadUnlock1(v33, v32);
  ThreadUnlock1(v35, v34);
LABEL_57:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61, v6);
  return v8;
}

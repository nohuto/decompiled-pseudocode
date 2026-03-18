/*
 * XREFs of xxxMNSelectItem @ 0x1C01E8994
 * Callers:
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C01E4978 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C01E54D4 (MNSetTimerToCloseHierarchy.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 *     xxxMNInvertItem @ 0x1C0208B28 (xxxMNInvertItem.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
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
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  _QWORD v68[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v69[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v70[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v71; // [rsp+68h] [rbp-A0h]
  _QWORD v72[3]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v73; // [rsp+88h] [rbp-80h] BYREF
  __int64 v74; // [rsp+90h] [rbp-78h]
  __int64 v75; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+A8h] [rbp-60h]
  __int128 v77; // [rsp+B8h] [rbp-50h]
  _QWORD v78[4]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v79; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD v80[3]; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD v81[3]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v82[4]; // [rsp+128h] [rbp+20h] BYREF
  __int64 v83; // [rsp+178h] [rbp+70h]

  v3 = a2;
  v4 = a3;
  SmartObjStackRefBase<tagMENU>::Init(v70, 0LL);
  v7 = *a1;
  v8 = 0LL;
  v71 = 0LL;
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
  v83 = v9;
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
  v71 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v70, v10);
  v12 = v71;
  if ( !v71 )
    v12 = *(_QWORD *)v70[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  v75 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v75;
  v76 = v12;
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v15 = *(_QWORD *)(**a1 + 8);
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14);
  v73 = *(_QWORD *)(v16 + 408);
  *(_QWORD *)(v16 + 408) = &v73;
  v74 = v15;
  if ( v15 )
    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
  if ( (*(_DWORD *)**a1 & 0x1000) != 0 )
  {
    v17 = *(_QWORD *)(v83 + 8);
    if ( v17 )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v68, v17);
      FindTimer(*(_QWORD *)(*(_QWORD *)v68[0] + 16LL), 0xFFFFLL, 0, 1, 0LL);
      **(_DWORD **)v68[0] &= ~0x4000u;
      if ( (**(_DWORD **)v68[0] & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(*(_QWORD *)v68[0] + 16LL), 65534LL, 0, 1, 0LL);
        **(_DWORD **)v68[0] &= ~0x2000u;
      }
      if ( *(_DWORD *)(*(_QWORD *)v68[0] + 80LL) != *(_DWORD *)(*(_QWORD *)v68[0] + 84LL) )
      {
        SmartObjStackRefBase<tagMENU>::Init(v72, *(_QWORD *)(*(_QWORD *)v68[0] + 40LL));
        v72[2] = 0LL;
        v18 = *(_QWORD *)(*(_QWORD *)v68[0] + 8LL);
        v19 = *(_QWORD *)v72[0];
        v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20);
        v80[0] = *(_QWORD *)(v21 + 408);
        *(_QWORD *)(v21 + 408) = v80;
        v80[1] = v19;
        if ( v19 )
          _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v23 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
        v81[0] = *(_QWORD *)(v23 + 408);
        *(_QWORD *)(v23 + 408) = v81;
        v81[1] = v18;
        if ( v18 )
          _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
        if ( *(_DWORD *)(*(_QWORD *)v68[0] + 80LL) != -1 )
          xxxMNInvertItem(v68, v72, *(unsigned int *)(*(_QWORD *)v68[0] + 80LL), v18, 0);
        *(_DWORD *)(*(_QWORD *)v68[0] + 80LL) = *(_DWORD *)(*(_QWORD *)v68[0] + 84LL);
        xxxMNInvertItem(v68, v72, *(unsigned int *)(*(_QWORD *)v68[0] + 84LL), v18, 1);
        ThreadUnlock1(v25, v24, v26);
        ThreadUnlock1(v28, v27, v29);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v72, v30);
        v3 = a2;
      }
      *(_DWORD *)**a1 &= ~0x1000u;
      v31 = **a1;
      *(_QWORD *)&v77 = *(_QWORD *)(v31 + 64) + 56LL;
      *((_QWORD *)&v77 + 1) = *(_QWORD *)(v31 + 16);
      v79 = v77;
      HMAssignmentLock(&v79);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v68, v32);
    }
  }
  v33 = **a1;
  if ( *(int *)(v33 + 80) < 0 )
  {
    if ( (unsigned int)(*(_DWORD *)(v33 + 80) + 4) > 1 )
      goto LABEL_36;
    FindTimer(*(_QWORD *)(**a1 + 16), *(unsigned int *)(**a1 + 80), 0, 1, 0LL);
  }
  else if ( *(_QWORD *)(v33 + 24) )
  {
    if ( (*(_DWORD *)**a1 & 1) != 0 )
      xxxMNCloseHierarchy(**a1, v3);
    else
      MNSetTimerToCloseHierarchy((_DWORD ***)a1);
  }
  xxxMNInvertItem(a1, v70, *(unsigned int *)(**a1 + 80), v15, 0);
LABEL_36:
  *(_DWORD *)(**a1 + 80) = v4;
  if ( (_DWORD)v4 == -1 )
  {
    if ( *(_QWORD *)(**a1 + 8) == *(_QWORD *)(**a1 + 16) )
      v40 = (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD;
    else
      v40 = -4;
    xxxWindowEvent(0x8005u, *(_QWORD *)(**a1 + 16), v40, 0, 0);
    ThreadUnlock1(v42, v41, v43);
    ThreadUnlock1(v45, v44, v46);
    if ( !*(_QWORD *)(**a1 + 32) )
      goto LABEL_57;
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v69, 0LL);
    if ( (*(_DWORD *)**a1 & 2) != 0 && *(_QWORD *)(**a1 + 32) == *(_QWORD *)(**a1 + 8) )
    {
      v47 = *(_QWORD *)(**a1 + 64);
    }
    else
    {
      v48 = safe_cast_fnid_to_PMENUWND(*(_QWORD *)(**a1 + 32));
      if ( !v48 || (v47 = *(_QWORD *)(v48 + 8)) == 0 )
      {
LABEL_56:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v69, v47);
        goto LABEL_57;
      }
    }
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v69, v47);
    if ( *(_QWORD *)v69[0] && *(_QWORD *)(*(_QWORD *)v69[0] + 8LL) )
    {
      v49 = *(_QWORD *)(*(_QWORD *)v69[0] + 8LL);
      v50 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47);
      v73 = *(_QWORD *)(v50 + 408);
      *(_QWORD *)(v50 + 408) = &v73;
      v74 = v49;
      _InterlockedAdd((volatile signed __int32 *)(v49 + 8), 1u);
      v51 = *(_QWORD *)(*(_QWORD *)v69[0] + 16LL);
      v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52);
      v82[0] = *(_QWORD *)(v53 + 408);
      *(_QWORD *)(v53 + 408) = v82;
      v82[1] = v51;
      if ( v51 )
        _InterlockedAdd((volatile signed __int32 *)(v51 + 8), 1u);
      v55 = *(_QWORD *)(*(_QWORD *)v69[0] + 40LL);
      v56 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54);
      v75 = *(_QWORD *)(v56 + 408);
      *(_QWORD *)(v56 + 408) = &v75;
      v76 = v55;
      if ( v55 )
        _InterlockedAdd((volatile signed __int32 *)(v55 + 8), 1u);
      SmartObjStackRefBase<tagMENU>::Init(v78, *(_QWORD *)(*(_QWORD *)v69[0] + 40LL));
      v78[2] = 0LL;
      xxxSendMenuSelect(
        *(_QWORD *)(*(_QWORD *)v69[0] + 8LL),
        *(_QWORD *)(*(_QWORD *)v69[0] + 16LL),
        (unsigned int)v78,
        *(_DWORD *)(*(_QWORD *)v69[0] + 80LL),
        v3);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v78, v57);
      ThreadUnlock1(v59, v58, v60);
      ThreadUnlock1(v62, v61, v63);
      ThreadUnlock1(v65, v64, v66);
    }
    goto LABEL_56;
  }
  *(_DWORD *)(v3 + 8) &= 0xFFFFAFFF;
  if ( (*(_DWORD *)(v3 + 8) & 8) != 0 )
    xxxMNDoScroll((__int64)a1, v4, 1);
  v8 = xxxMNInvertItem(a1, v70, (unsigned int)v4, v15, 1);
  ThreadUnlock1(v35, v34, v36);
  ThreadUnlock1(v38, v37, v39);
LABEL_57:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v70, v6);
  return v8;
}

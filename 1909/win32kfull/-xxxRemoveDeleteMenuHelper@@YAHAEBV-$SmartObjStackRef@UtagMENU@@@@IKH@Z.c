/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C00EB3D0 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C01084B0 (NtUserRemoveMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     MNFreeItem @ 0x1C0028E80 (MNFreeItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNLookUpItem @ 0x1C004A90C (MNLookUpItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FCB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00E25A8 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0246BC0 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 **a1, unsigned int a2, __int64 a3, int a4)
{
  __int16 v6; // bx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadWin32Thread; // rax
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned int v14; // r12d
  __int64 v15; // rcx
  __int64 v16; // rax
  unsigned int v17; // ebx
  _QWORD *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // r15d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r14d
  __int64 v26; // r10
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rsi
  int ClassStyle; // ebx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  void *v42; // rax
  __int64 v43; // [rsp+20h] [rbp-60h] BYREF
  __int64 v44; // [rsp+28h] [rbp-58h] BYREF
  __int64 *v45; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v47[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v48[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v49; // [rsp+60h] [rbp-20h]
  __int64 *v50; // [rsp+68h] [rbp-18h] BYREF
  __int64 v51; // [rsp+70h] [rbp-10h] BYREF
  __int64 v52; // [rsp+78h] [rbp-8h]

  v6 = a3;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v48, a1, a3);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v8);
  v10 = 0;
  v51 = 0LL;
  v50 = (__int64 *)gSmartObjNullRef;
  v51 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v51;
  v52 = 0LL;
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  v14 = 0;
  v46 = 0LL;
  v45 = (__int64 *)gSmartObjNullRef;
  v46 = *(_QWORD *)(v13 + 1472);
  *(_QWORD *)(v13 + 1472) = &v46;
  v52 = v49;
  SmartObjStackRefBase<tagMENU>::operator=(&v50, *v48[0]);
  v15 = v49;
  if ( v49 )
  {
    v16 = v49;
  }
  else
  {
    v15 = 0LL;
    v16 = *v48[0];
  }
  v43 = v16;
  if ( !v15 )
    v15 = *v48[0];
  v17 = v6 & 0x400;
  v18 = MNLookUpItem(v15, a2, v17, &v43);
  v49 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v48, v43);
  if ( v18 )
    goto LABEL_52;
  if ( a2 >= 0xFFFFF000 && !v17 )
  {
    v49 = v52;
    SmartObjStackRefBase<tagMENU>::operator=(v48, *v50);
    v34 = v49;
    if ( v49 )
    {
      v35 = v49;
    }
    else
    {
      v34 = 0LL;
      v35 = *v48[0];
    }
    v43 = v35;
    if ( !v34 )
      v34 = *v48[0];
    v18 = MNLookUpItem(v34, (unsigned __int16)a2, 0LL, &v43);
    v49 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v48, v43);
    if ( v18 )
    {
LABEL_52:
      if ( (*(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 40LL) & 0x100) == 0 || (v21 = 1, *(_DWORD *)(*v18 + 8LL) != 61536) )
        v21 = 0;
      if ( (*(_DWORD *)(*v18 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 40LL) &= ~0x400u;
      v22 = v49;
      if ( !v49 )
        v22 = *v48[0];
      v23 = MNGetPopupFromMenu(v22, &v44);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v45, v23);
      if ( *v45 )
      {
        v36 = v49;
        if ( !v49 )
          v36 = *v48[0];
        v14 = MNGetpItemIndex(v36, (__int64)v18);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v47, *v45);
        MNDeleteAdjustIndexes(v44, v47, v14);
      }
      v24 = v49;
      if ( !v49 )
        v24 = *v48[0];
      MNFreeItem(v24, (__int64)v18, a4);
      *(_DWORD *)(*v48[0] + 64) = 0;
      *(_DWORD *)(*v48[0] + 68) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*v48[0] + 24) + 128LL), 0, *(PVOID *)(*v48[0] + 96));
        Win32FreePool(*(_QWORD *)(*v48[0] + 88));
        *(_DWORD *)(*v48[0] + 60) = 0;
        v33 = *v48[0];
        *(_QWORD *)(*(_QWORD *)(*v48[0] + 40) + 32LL) = 0LL;
        *(_QWORD *)(v33 + 88) = 0LL;
      }
      else
      {
        v25 = 96 * *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL) + *(_DWORD *)(*v48[0] + 88) - (_DWORD)v18 - 96;
        if ( 96 * *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL) + *(_DWORD *)(*v48[0] + 88) - (_DWORD)v18 != 96 )
        {
          memmove(
            (void *)*v18,
            (const void *)v18[12],
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL)
                         + **(_DWORD **)(*v48[0] + 88)
                         - *((_DWORD *)v18 + 24)));
          memmove(v18, v18 + 12, v25);
          v26 = ((__int64)v18 - *(_QWORD *)(*v48[0] + 88)) / 96;
          while ( (unsigned int)v26 < *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL) - 1 )
          {
            v27 = 96LL * (int)v26;
            *(_QWORD *)(v27 + *(_QWORD *)(*v48[0] + 88)) = *(_QWORD *)(*v48[0] + 96) + 112LL * (unsigned int)v26;
            v20 = *v48[0];
            LODWORD(v26) = v26 + 1;
            *(_QWORD *)(*(_QWORD *)(*v48[0] + 88) + v27 + 8) = *(_QWORD *)(v27 + *(_QWORD *)(*v48[0] + 88))
                                                             - *(_QWORD *)(*(_QWORD *)(*v48[0] + 24) + 16LL);
          }
        }
        v19 = *v48[0];
        if ( (unsigned int)(*(_DWORD *)(*v48[0] + 60) - *(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL)) >= 9 )
          MNAllocMenuItems(v48, 1u);
      }
      --*(_DWORD *)(*(_QWORD *)(*v48[0] + 40) + 44LL);
      if ( v21 && *(_QWORD *)(*v48[0] + 80) && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v48[0] + 80)) )
      {
        if ( *(_QWORD *)(*v48[0] + 80) )
          v37 = **(_QWORD **)(*v48[0] + 80);
        else
          v37 = 0LL;
        ClassStyle = DwmGetClassStyle(*(_QWORD *)(*v48[0] + 80));
        v42 = (void *)ReferenceDwmApiPort(v40, v39, v41);
        DwmAsyncChildStyleChange(v42, v37, -26, ClassStyle);
      }
      if ( *v45 )
        xxxMNUpdateShownMenu(&v45, *(_QWORD *)(*v48[0] + 88) + 96LL * v14, 2LL);
      v10 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v45, v19, v20);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v50, v28, v29);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v48, v30, v31);
  return v10;
}

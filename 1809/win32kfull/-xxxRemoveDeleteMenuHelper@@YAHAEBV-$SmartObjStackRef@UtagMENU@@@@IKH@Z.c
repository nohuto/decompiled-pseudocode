/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C0109420 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0123E00 (NtUserRemoveMenu.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     MNLookUpItem @ 0x1C0021208 (MNLookUpItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C0069C4C (MNFreeItem.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C00FFA64 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C010C02C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C022EAD4 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, int a4)
{
  unsigned int v7; // edi
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  int v14; // r15d
  __int64 v15; // rcx
  _DWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // r14d
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rsi
  int ClassStyle; // ebx
  __int64 v31; // rdx
  __int64 v32; // rcx
  void *v33; // rax
  __int64 v34; // [rsp+20h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v36[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v37[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v39; // [rsp+60h] [rbp-20h]
  _QWORD v40[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v41; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38, a1);
  SmartObjStackRefBase<tagMENU>::Init(v40, 0LL);
  v7 = 0;
  v41 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v36);
  v8 = 0;
  v41 = v39;
  SmartObjStackRefBase<tagMENU>::operator=(v40);
  v9 = v39;
  if ( v39 )
  {
    v10 = v39;
  }
  else
  {
    v9 = 0LL;
    v10 = *(_QWORD *)v38[0];
  }
  v34 = v10;
  if ( !v9 )
    v9 = *(_QWORD *)v38[0];
  v11 = a3 & 0x400;
  v12 = MNLookUpItem(v9, a2, v11, &v34);
  v39 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v38);
  if ( v12 )
    goto LABEL_52;
  if ( a2 >= 0xFFFFF000 && !v11 )
  {
    v39 = v41;
    SmartObjStackRefBase<tagMENU>::operator=(v38);
    v26 = v39;
    if ( v39 )
    {
      v27 = v39;
    }
    else
    {
      v26 = 0LL;
      v27 = *(_QWORD *)v38[0];
    }
    v34 = v27;
    if ( !v26 )
      v26 = *(_QWORD *)v38[0];
    v12 = MNLookUpItem(v26, (unsigned __int16)a2, 0, &v34);
    v39 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v38);
    if ( v12 )
    {
LABEL_52:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) & 0x100) == 0
        || (v14 = 1, *(_DWORD *)(*v12 + 8LL) != 61536) )
      {
        v14 = 0;
      }
      if ( (*(_DWORD *)(*v12 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 40LL) &= ~0x400u;
      v15 = v39;
      if ( !v39 )
        v15 = *(_QWORD *)v38[0];
      v16 = MNGetPopupFromMenu(v15, &v35);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v36, v16);
      if ( *(_QWORD *)v36[0] )
      {
        v28 = v39;
        if ( !v39 )
          v28 = *(_QWORD *)v38[0];
        v8 = MNGetpItemIndex(v28, (__int64)v12);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v37);
        MNDeleteAdjustIndexes(v35, v37, v8);
      }
      v17 = v39;
      if ( !v39 )
        v17 = *(_QWORD *)v38[0];
      MNFreeItem(v17, (__int64)v12, a4);
      *(_DWORD *)(*(_QWORD *)v38[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v38[0] + 68LL) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v38[0] + 24LL) + 128LL), 0, *(PVOID *)(*(_QWORD *)v38[0] + 96LL));
        Win32FreePool(*(_QWORD *)(*(_QWORD *)v38[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v38[0] + 60LL) = 0;
        v25 = *(_QWORD *)v38[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v25 + 88) = 0LL;
      }
      else
      {
        v19 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)
            + *(_DWORD *)(*(_QWORD *)v38[0] + 88LL)
            - (_DWORD)v12
            - 96;
        if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)
           + *(_DWORD *)(*(_QWORD *)v38[0] + 88LL)
           - (_DWORD)v12 != 96 )
        {
          memmove(
            (void *)*v12,
            (const void *)v12[12],
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v38[0] + 88LL)
                         - *((_DWORD *)v12 + 24)));
          memmove(v12, v12 + 12, v19);
          v20 = ((__int64)v12 - *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) / 96;
          while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL) - 1 )
          {
            v21 = 96LL * (int)v20;
            *(_QWORD *)(v21 + *(_QWORD *)(*(_QWORD *)v38[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v38[0] + 96LL)
                                                                     + 112LL * (unsigned int)v20;
            v18 = *(_QWORD *)v38[0];
            LODWORD(v20) = v20 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + v21 + 8) = *(_QWORD *)(v21
                                                                                     + *(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 88LL))
                                                                         - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v38[0]
                                                                                                 + 24LL)
                                                                                     + 16LL);
          }
        }
        v13 = *(_QWORD *)v38[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v38[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v13) = 1;
          MNAllocMenuItems(v38, v13, v18);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v38[0] + 40LL) + 44LL);
      if ( v14
        && *(_QWORD *)(*(_QWORD *)v38[0] + 80LL)
        && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v38[0] + 80LL)) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v38[0] + 80LL) )
          v29 = **(_QWORD **)(*(_QWORD *)v38[0] + 80LL);
        else
          v29 = 0LL;
        ClassStyle = DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v38[0] + 80LL));
        v33 = (void *)ReferenceDwmApiPort(v32, v31);
        DwmAsyncChildStyleChange(v33, v29, -26, ClassStyle);
      }
      if ( *(_QWORD *)v36[0] )
        xxxMNUpdateShownMenu(v36, *(_QWORD *)(*(_QWORD *)v38[0] + 88LL) + 96LL * v8, 2LL);
      v7 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v13);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v40, v22);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v23);
  return v7;
}

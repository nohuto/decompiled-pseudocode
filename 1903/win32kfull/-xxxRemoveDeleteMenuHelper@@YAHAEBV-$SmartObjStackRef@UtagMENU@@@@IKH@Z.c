/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C0110010 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C012D3B0 (NtUserRemoveMenu.c)
 * Callees:
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C001FA58 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNFreeItem @ 0x1C0022A10 (MNFreeItem.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     MNLookUpItem @ 0x1C00A9B2C (MNLookUpItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00BE5D8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C0247300 (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxRemoveDeleteMenuHelper(__int64 a1, unsigned int a2, __int16 a3, unsigned int a4)
{
  __int64 ThreadWin32Thread; // rax
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r12d
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // rsi
  int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  unsigned int v19; // r14d
  __int64 v20; // r10
  __int64 v21; // r9
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  void *v30; // rax
  __int64 v31; // [rsp+20h] [rbp-60h] BYREF
  __int64 v32; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v33; // [rsp+30h] [rbp-50h] BYREF
  __int64 v34; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v35[16]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v36[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v37; // [rsp+60h] [rbp-20h]
  _QWORD *v38; // [rsp+68h] [rbp-18h] BYREF
  __int64 v39; // [rsp+70h] [rbp-10h] BYREF
  __int64 v40; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v36, a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v8 = 0;
  v39 = 0LL;
  v38 = (_QWORD *)gSmartObjNullRef;
  v39 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v39;
  v40 = 0LL;
  v9 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v34 = 0LL;
  v33 = (_QWORD *)gSmartObjNullRef;
  v34 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v34;
  v40 = v37;
  SmartObjStackRefBase<tagMENU>::operator=(&v38, *v36[0]);
  v11 = v37;
  if ( v37 )
  {
    v12 = v37;
  }
  else
  {
    v11 = 0LL;
    v12 = *v36[0];
  }
  v31 = v12;
  if ( !v11 )
    v11 = *v36[0];
  v13 = a3 & 0x400;
  v14 = MNLookUpItem(v11, a2, v13, &v31);
  v37 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v36, v31);
  if ( v14 )
    goto LABEL_49;
  if ( a2 >= 0xFFFFF000 && !v13 )
  {
    v37 = v40;
    SmartObjStackRefBase<tagMENU>::operator=(v36, *v38);
    v24 = v37;
    if ( v37 )
    {
      v25 = v37;
    }
    else
    {
      v24 = 0LL;
      v25 = *v36[0];
    }
    v31 = v25;
    if ( !v24 )
      v24 = *v36[0];
    v14 = MNLookUpItem(v24, (unsigned __int16)a2, 0LL, &v31);
    v37 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v36, v31);
    if ( v14 )
    {
LABEL_49:
      if ( (*(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 40LL) & 0x100) == 0
        || (v15 = 1, *(_DWORD *)(*(_QWORD *)v14 + 8LL) != 61536) )
      {
        v15 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 40LL) &= ~0x400u;
      v16 = v37;
      if ( !v37 )
        v16 = *v36[0];
      v17 = MNGetPopupFromMenu(v16, &v32);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v33, v17);
      if ( *v33 )
      {
        v26 = v37;
        if ( !v37 )
          v26 = *v36[0];
        v10 = MNGetpItemIndex(v26, v14);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v35, *v33);
        MNDeleteAdjustIndexes(v32, v35, v10);
      }
      v18 = v37;
      if ( !v37 )
        v18 = *v36[0];
      MNFreeItem(v18, v14, a4);
      *(_DWORD *)(*v36[0] + 64) = 0;
      *(_DWORD *)(*v36[0] + 68) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*v36[0] + 24) + 128LL), 0, *(PVOID *)(*v36[0] + 96));
        Win32FreePool(*(_QWORD *)(*v36[0] + 88));
        *(_DWORD *)(*v36[0] + 60) = 0;
        v23 = *v36[0];
        *(_QWORD *)(*(_QWORD *)(*v36[0] + 40) + 32LL) = 0LL;
        *(_QWORD *)(v23 + 88) = 0LL;
      }
      else
      {
        v19 = 96 * *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL) + *(_DWORD *)(*v36[0] + 88) - v14 - 96;
        if ( 96 * *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL) + *(_DWORD *)(*v36[0] + 88) - (_DWORD)v14 != 96 )
        {
          memmove(
            *(void **)v14,
            *(const void **)(v14 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL)
                         + **(_DWORD **)(*v36[0] + 88)
                         - *(_DWORD *)(v14 + 96)));
          memmove((void *)v14, (const void *)(v14 + 96), v19);
          v20 = (v14 - *(_QWORD *)(*v36[0] + 88)) / 96;
          while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL) - 1 )
          {
            v21 = 96LL * (int)v20;
            *(_QWORD *)(v21 + *(_QWORD *)(*v36[0] + 88)) = *(_QWORD *)(*v36[0] + 96) + 112LL * (unsigned int)v20;
            LODWORD(v20) = v20 + 1;
            *(_QWORD *)(*(_QWORD *)(*v36[0] + 88) + v21 + 8) = *(_QWORD *)(v21 + *(_QWORD *)(*v36[0] + 88))
                                                             - *(_QWORD *)(*(_QWORD *)(*v36[0] + 24) + 16LL);
          }
        }
        if ( (unsigned int)(*(_DWORD *)(*v36[0] + 60) - *(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL)) >= 9 )
          MNAllocMenuItems(v36, 1u);
      }
      --*(_DWORD *)(*(_QWORD *)(*v36[0] + 40) + 44LL);
      if ( v15 && *(_QWORD *)(*v36[0] + 80) && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v36[0] + 80)) )
      {
        DwmGetClassStyle(*(_QWORD *)(*v36[0] + 80));
        v30 = (void *)ReferenceDwmApiPort(v28, v27, v29);
        DwmAsyncChildStyleChange(v30);
      }
      if ( *v33 )
        xxxMNUpdateShownMenu(&v33, *(_QWORD *)(*v36[0] + 88) + 96LL * v10, 2LL);
      v8 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v33);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v38);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36);
  return v8;
}

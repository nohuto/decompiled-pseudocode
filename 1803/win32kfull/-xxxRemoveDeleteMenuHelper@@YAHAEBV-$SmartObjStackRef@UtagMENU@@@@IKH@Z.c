/*
 * XREFs of ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     NtUserDeleteMenu @ 0x1C00ECC00 (NtUserDeleteMenu.c)
 *     NtUserRemoveMenu @ 0x1C0106B20 (NtUserRemoveMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     MNGetPopupFromMenu @ 0x1C002196C (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     MNFreeItem @ 0x1C00229EC (MNFreeItem.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0026290 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     MNLookUpItem @ 0x1C0039D7C (MNLookUpItem.c)
 *     ?MNAllocMenuItems@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@_N@Z @ 0x1C005E128 (-MNAllocMenuItems@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@_N@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V?$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z @ 0x1C02059AC (-MNDeleteAdjustIndexes@@YAXPEAUtagMENUSTATE@@V-$SmartObjStackRef@UtagPOPUPMENU@@@@I@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0205A4C (xxxMNUpdateShownMenu.c)
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
  __int64 v22; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  void *v31; // rax
  __int64 v32; // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  _QWORD *v34; // [rsp+30h] [rbp-50h] BYREF
  __int64 v35; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v36[16]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v37[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v38; // [rsp+60h] [rbp-20h]
  _QWORD *v39; // [rsp+68h] [rbp-18h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h] BYREF
  __int64 v41; // [rsp+78h] [rbp-8h]

  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v37, a1);
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v8 = 0;
  v40 = 0LL;
  v39 = (_QWORD *)gSmartObjNullRef;
  v40 = *(_QWORD *)(ThreadWin32Thread + 1456);
  *(_QWORD *)(ThreadWin32Thread + 1456) = &v40;
  v41 = 0LL;
  v9 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v10 = 0;
  v35 = 0LL;
  v34 = (_QWORD *)gSmartObjNullRef;
  v35 = *(_QWORD *)(v9 + 1456);
  *(_QWORD *)(v9 + 1456) = &v35;
  v41 = v38;
  SmartObjStackRefBase<tagMENU>::operator=(&v39, *(_QWORD *)v37[0]);
  v11 = v38;
  if ( v38 )
  {
    v12 = v38;
  }
  else
  {
    v11 = 0LL;
    v12 = *(_QWORD *)v37[0];
  }
  v32 = v12;
  if ( !v11 )
    v11 = *(_QWORD *)v37[0];
  v13 = a3 & 0x400;
  v14 = MNLookUpItem(v11, a2, v13, &v32);
  v38 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v37, v32);
  if ( v14 )
    goto LABEL_49;
  if ( a2 >= 0xFFFFF000 && !v13 )
  {
    v38 = v41;
    SmartObjStackRefBase<tagMENU>::operator=(v37, *v39);
    v25 = v38;
    if ( v38 )
    {
      v26 = v38;
    }
    else
    {
      v25 = 0LL;
      v26 = *(_QWORD *)v37[0];
    }
    v32 = v26;
    if ( !v25 )
      v25 = *(_QWORD *)v37[0];
    v14 = MNLookUpItem(v25, (unsigned __int16)a2, 0LL, &v32);
    v38 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v37, v32);
    if ( v14 )
    {
LABEL_49:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 40LL) & 0x100) == 0
        || (v15 = 1, *(_DWORD *)(*(_QWORD *)v14 + 8LL) != 61536) )
      {
        v15 = 0;
      }
      if ( (*(_DWORD *)(*(_QWORD *)v14 + 4LL) & 0x1000) != 0 )
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 40LL) &= ~0x400u;
      v16 = v38;
      if ( !v38 )
        v16 = *(_QWORD *)v37[0];
      v17 = MNGetPopupFromMenu(v16, &v33);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v34, v17);
      if ( *v34 )
      {
        v27 = v38;
        if ( !v38 )
          v27 = *(_QWORD *)v37[0];
        v10 = MNGetpItemIndex(v27, v14);
        SmartObjStackRefBase<tagPOPUPMENU>::Init(v36, *v34);
        MNDeleteAdjustIndexes(v33, v36, v10);
      }
      v18 = v38;
      if ( !v38 )
        v18 = *(_QWORD *)v37[0];
      MNFreeItem(v18, v14, a4);
      *(_DWORD *)(*(_QWORD *)v37[0] + 64LL) = 0;
      *(_DWORD *)(*(_QWORD *)v37[0] + 68LL) = 0;
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL) == 1 )
      {
        RtlFreeHeap(*(PVOID *)(*(_QWORD *)(*(_QWORD *)v37[0] + 24LL) + 128LL), 0, *(PVOID *)(*(_QWORD *)v37[0] + 96LL));
        Win32FreePool(*(_QWORD *)(*(_QWORD *)v37[0] + 88LL));
        *(_DWORD *)(*(_QWORD *)v37[0] + 60LL) = 0;
        v24 = *(_QWORD *)v37[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 32LL) = 0LL;
        *(_QWORD *)(v24 + 88) = 0LL;
      }
      else
      {
        v19 = 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)
            + *(_DWORD *)(*(_QWORD *)v37[0] + 88LL)
            - v14
            - 96;
        if ( 96 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)
           + *(_DWORD *)(*(_QWORD *)v37[0] + 88LL)
           - (_DWORD)v14 != 96 )
        {
          memmove(
            *(void **)v14,
            *(const void **)(v14 + 96),
            (unsigned int)(112 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)
                         + **(_DWORD **)(*(_QWORD *)v37[0] + 88LL)
                         - *(_DWORD *)(v14 + 96)));
          memmove((void *)v14, (const void *)(v14 + 96), v19);
          v20 = (v14 - *(_QWORD *)(*(_QWORD *)v37[0] + 88LL)) / 96;
          while ( (unsigned int)v20 < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL) - 1 )
          {
            v21 = 96LL * (int)v20;
            *(_QWORD *)(v21 + *(_QWORD *)(*(_QWORD *)v37[0] + 88LL)) = *(_QWORD *)(*(_QWORD *)v37[0] + 96LL)
                                                                     + 112LL * (unsigned int)v20;
            LODWORD(v20) = v20 + 1;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 88LL) + v21 + 8) = *(_QWORD *)(v21
                                                                                     + *(_QWORD *)(*(_QWORD *)v37[0]
                                                                                                 + 88LL))
                                                                         - *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v37[0]
                                                                                                 + 24LL)
                                                                                     + 16LL);
          }
        }
        v22 = *(_QWORD *)v37[0];
        if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)v37[0] + 60LL)
                          - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL)) >= 9 )
        {
          LOBYTE(v22) = 1;
          MNAllocMenuItems(v37, v22);
        }
      }
      --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v37[0] + 40LL) + 44LL);
      if ( v15
        && *(_QWORD *)(*(_QWORD *)v37[0] + 80LL)
        && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v37[0] + 80LL)) )
      {
        DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v37[0] + 80LL));
        v31 = (void *)ReferenceDwmApiPort(v29, v28, v30);
        DwmAsyncChildStyleChange(v31);
      }
      if ( *v34 )
        xxxMNUpdateShownMenu(&v34, *(_QWORD *)(*(_QWORD *)v37[0] + 88LL) + 96LL * v10, 2LL);
      v8 = 1;
    }
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v34);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(&v39);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v37);
  return v8;
}

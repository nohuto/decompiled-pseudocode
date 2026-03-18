/*
 * XREFs of xxxEnableMenuItem @ 0x1C00A6654
 * Callers:
 *     xxxSetSysMenu @ 0x1C00A6430 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C012A6D0 (NtUserEnableMenuItem.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetPopupFromMenu @ 0x1C006A864 (MNGetPopupFromMenu.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C00A686C (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00AC318 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C022EB74 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r15d
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rax
  __int64 v18; // rsi
  int ClassStyle; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  void *v22; // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v24[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v25; // [rsp+50h] [rbp-20h]
  _QWORD v26[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v25 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v23);
  v6 = v25;
  if ( !v25 )
    v6 = *(_QWORD *)v24[0];
  v27 = v6;
  v7 = MenuItemState((_DWORD)a1, a2, a3, 3, (__int64)&v27);
  v25 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=(v24);
  v9 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 40LL) & 0x100) != 0 )
  {
    v9 = **a1;
    if ( a3 != v8
      && *(_QWORD *)(v9 + 80)
      && (a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728) )
    {
      v12 = *(_QWORD *)(**a1 + 80);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v26[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v26;
      v26[1] = v12;
      if ( v12 )
        _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
      xxxRedrawTitle(*(_QWORD *)(**a1 + 80), 4096LL);
      if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v12) )
      {
        if ( v12 )
          v18 = *(_QWORD *)v12;
        else
          v18 = 0LL;
        ClassStyle = DwmGetClassStyle(v12);
        v22 = (void *)ReferenceDwmApiPort(v21, v20);
        DwmAsyncChildStyleChange(v22, v18, -26, ClassStyle);
      }
      ThreadUnlock1(v15, v14);
    }
  }
  if ( (a3 & 3) != v8 && (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v24) )
  {
    v16 = v25;
    if ( !v25 )
      v16 = *(_QWORD *)v24[0];
    v17 = MNGetPopupFromMenu(v16, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, v17);
    if ( *(_QWORD *)v23[0] )
      xxxMNUpdateShownMenu(v23, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v9);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v10);
  return v8;
}

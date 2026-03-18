/*
 * XREFs of xxxEnableMenuItem @ 0x1C001FF08
 * Callers:
 *     xxxSetSysMenu @ 0x1C001FC60 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C01351D0 (NtUserEnableMenuItem.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C001F998 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C001FEA0 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0020C18 (MNGetPopupFromMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C02473A0 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v10; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  void *v20; // rax
  _QWORD v21[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h] BYREF
  __int64 v25; // [rsp+60h] [rbp-10h]
  __int64 v26; // [rsp+68h] [rbp-8h]
  __int64 v27; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v23 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v21, 0LL);
  v6 = v23;
  if ( !v23 )
    v6 = *(_QWORD *)v22[0];
  v27 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, (__int64)&v27);
  v23 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=(v22, v27);
  if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) & 0x100) != 0 && a3 != v8 )
  {
    if ( *(_QWORD *)(**a1 + 80) )
    {
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
      {
        v10 = *(_QWORD *)(**a1 + 80);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v24 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
        v25 = v10;
        if ( v10 )
          HMLockObject(v10);
        xxxRedrawTitle(*(struct tagWND **)(**a1 + 80), 0x1000u);
        if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v10) )
        {
          DwmGetClassStyle(v10);
          v20 = (void *)ReferenceDwmApiPort(v18, v17, v19);
          DwmAsyncChildStyleChange(v20);
        }
        ThreadUnlock1(v13, v12, v14);
      }
    }
  }
  if ( (a3 & 3) != v8 && SmartObjStackRef<tagMENU>::operator bool((__int64)v22) )
  {
    v15 = v23;
    if ( !v23 )
      v15 = *(_QWORD *)v22[0];
    v16 = MNGetPopupFromMenu(v15, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v21, v16);
    if ( *(_QWORD *)v21[0] )
      xxxMNUpdateShownMenu(v21, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
  return v8;
}

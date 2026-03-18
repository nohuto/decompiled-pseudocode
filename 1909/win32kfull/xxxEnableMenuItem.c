/*
 * XREFs of xxxEnableMenuItem @ 0x1C012C8A0
 * Callers:
 *     NtUserEnableMenuItem @ 0x1C010FE60 (NtUserEnableMenuItem.c)
 *     xxxSetSysMenu @ 0x1C012C660 (xxxSetSysMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C012D050 (MNGetPopupFromMenu.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C012DC74 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     xxxMNUpdateShownMenu @ 0x1C0246C60 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v14; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rsi
  int ClassStyle; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  void *v26; // rax
  _QWORD v27[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v28[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h]
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v31; // [rsp+60h] [rbp-10h]
  __int64 v32; // [rsp+68h] [rbp-8h]
  __int64 v33; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v28, 0LL);
  v29 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, 0LL);
  v6 = v29;
  if ( !v29 )
    v6 = *(_QWORD *)v28[0];
  v33 = v6;
  v7 = MenuItemState((_DWORD)a1, a2, a3, 3, (__int64)&v33);
  v29 = 0LL;
  v8 = v7;
  SmartObjStackRefBase<tagMENU>::operator=(v28, v33);
  v10 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 40) + 40LL) & 0x100) != 0 )
  {
    v10 = **a1;
    if ( a3 != v8 )
    {
      if ( *(_QWORD *)(v10 + 80) )
      {
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v14 = *(__int64 **)(**a1 + 80);
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v9);
          v30 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v30;
          v31 = v14;
          if ( v14 )
            HMLockObject(v14);
          xxxRedrawTitle(*(struct tagWND **)(**a1 + 80), 0x1000u);
          if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v14) )
          {
            if ( v14 )
              v21 = *v14;
            else
              v21 = 0LL;
            ClassStyle = DwmGetClassStyle((__int64)v14);
            v26 = (void *)ReferenceDwmApiPort(v24, v23, v25);
            DwmAsyncChildStyleChange(v26, v21, -26, ClassStyle);
          }
          ThreadUnlock1(v17, v16, v18);
        }
      }
    }
  }
  if ( (a3 & 3) != v8 && (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v28) )
  {
    v19 = v29;
    if ( !v29 )
      v19 = *(_QWORD *)v28[0];
    v20 = MNGetPopupFromMenu(v19, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v27, v20);
    if ( *(_QWORD *)v27[0] )
      xxxMNUpdateShownMenu(v27, 0LL, 1LL);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v10, v9);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v11, v12);
  return v8;
}

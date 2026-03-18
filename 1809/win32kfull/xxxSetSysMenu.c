/*
 * XREFs of xxxSetSysMenu @ 0x1C00A6430
 * Callers:
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C01073F0 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C0156CFC (xxxHandleNCMouseGuys.c)
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C0020FE8 (xxxGetSysMenuPtr.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsTrayWindow @ 0x1C002CD08 (IsTrayWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     IsSmallerThanScreen @ 0x1C00A5C9C (IsSmallerThanScreen.c)
 *     xxxEnableMenuItem @ 0x1C00A6654 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00A68D4 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C00A6910 (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C00A6A3C (_GetSubMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v7; // rcx
  unsigned int v8; // ebx
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  unsigned int v11; // r12d
  unsigned int v12; // r14d
  char v13; // al
  char v14; // dl
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v18; // eax
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v21; // [rsp+30h] [rbp-20h]
  _QWORD v22[3]; // [rsp+38h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
  v2 = 0;
  v21 = 0LL;
  xxxGetSysMenuPtr(a1, v3);
  v21 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v20);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
    goto LABEL_18;
  GetSubMenu();
  v21 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v20);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
    goto LABEL_18;
  v5 = v21;
  if ( !v21 )
    v5 = *(_QWORD *)v20[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v22[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v22;
  v22[1] = v5;
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v7 = (_BYTE *)*((_QWORD *)a1 + 5);
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 3;
  v12 = 61536;
  if ( (v7[31] & 0x20) != 0 )
  {
    v11 = 0;
    v9 = 3;
    v2 = 3;
    v12 = 61728;
    v18 = IsTrayWindow(a1);
    v7 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( v18 )
      v8 = 3;
  }
  else if ( (v7[30] & 2) == 0 )
  {
    v9 = 3;
  }
  if ( (v7[30] & 1) == 0 )
    goto LABEL_23;
  v13 = v7[31];
  if ( (v13 & 1) != 0 )
  {
    v11 = 0;
    v8 = 3;
    if ( (v13 & 0x40) == 0 && IsSmallerThanScreen(a1, 0LL) )
      v8 = 0;
    v7 = (_BYTE *)*((_QWORD *)a1 + 5);
    v2 = 3;
LABEL_23:
    v10 = 3;
  }
  v14 = v7[30];
  if ( (v14 & 4) == 0 )
    v2 = 3;
  if ( (v7[30] & 0xC0) != 0x40 && (v7[24] & 1) == 0 || (v14 & 7) != 0 )
  {
    xxxEnableMenuItem(v20, 61440LL, v2);
    xxxEnableMenuItem(v20, 61472LL, v9);
    xxxEnableMenuItem(v20, 61488LL, v10);
    xxxEnableMenuItem(v20, 61728LL, v11);
  }
  xxxEnableMenuItem(v20, 61456LL, v8);
  if ( v12 == 61536 )
  {
    _SetCloseDefault(v20);
  }
  else
  {
    v19 = v21;
    if ( !v21 )
      v19 = *(_QWORD *)v20[0];
    SetMenuDefaultItem(v19, v12, 0LL);
  }
  ThreadUnlock1(v16, v15);
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v20, v4);
  return 1LL;
}

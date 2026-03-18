/*
 * XREFs of xxxSetSysMenu @ 0x1C00C2450
 * Callers:
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C00EC6AC (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C01359C0 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxGetSysMenuPtr @ 0x1C0039F88 (xxxGetSysMenuPtr.c)
 *     IsTrayWindow @ 0x1C0044B0C (IsTrayWindow.c)
 *     IsSmallerThanScreen @ 0x1C00C10E4 (IsSmallerThanScreen.c)
 *     xxxEnableMenuItem @ 0x1C00C2670 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00C28A0 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _GetSubMenu @ 0x1C00C28DC (_GetSubMenu.c)
 *     _SetMenuDefaultItem @ 0x1C00C2978 (_SetMenuDefaultItem.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 SysMenuPtr; // rax
  __int64 v5; // rdx
  __int64 SubMenu; // rax
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // r9
  _BYTE *v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int v13; // r15d
  unsigned int v14; // r12d
  unsigned int v15; // r14d
  char v16; // al
  char v17; // dl
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v22; // eax
  __int64 v23; // rcx
  _QWORD v24[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v25; // [rsp+30h] [rbp-20h]
  _QWORD v26[3]; // [rsp+38h] [rbp-18h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v24, 0LL);
  v2 = 0;
  v25 = 0LL;
  SysMenuPtr = xxxGetSysMenuPtr(a1, v3);
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, SysMenuPtr);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    goto LABEL_18;
  SubMenu = GetSubMenu();
  v25 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v24, SubMenu);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v24) )
    goto LABEL_18;
  v7 = v25;
  if ( !v25 )
    v7 = *(_QWORD *)v24[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
  v26[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v26;
  v26[1] = v7;
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v10 = (_BYTE *)*((_QWORD *)a1 + 5);
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 3;
  v15 = 61536;
  if ( (v10[31] & 0x20) != 0 )
  {
    v14 = 0;
    v12 = 3;
    v2 = 3;
    v15 = 61728;
    v22 = IsTrayWindow(a1);
    v10 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( v22 )
      v11 = 3;
  }
  else if ( (v10[30] & 2) == 0 )
  {
    v12 = 3;
  }
  if ( (v10[30] & 1) == 0 )
    goto LABEL_23;
  v16 = v10[31];
  if ( (v16 & 1) != 0 )
  {
    v14 = 0;
    v11 = 3;
    if ( (v16 & 0x40) == 0 && IsSmallerThanScreen(a1, 0LL, 3LL, v9) )
      v11 = 0;
    v10 = (_BYTE *)*((_QWORD *)a1 + 5);
    v2 = 3;
LABEL_23:
    v13 = 3;
  }
  v17 = v10[30];
  if ( (v17 & 4) == 0 )
    v2 = 3;
  if ( (v10[30] & 0xC0) != 0x40 && (v10[24] & 1) == 0 || (v17 & 7) != 0 )
  {
    xxxEnableMenuItem(v24, 61440LL, v2);
    xxxEnableMenuItem(v24, 61472LL, v12);
    xxxEnableMenuItem(v24, 61488LL, v13);
    xxxEnableMenuItem(v24, 61728LL, v14);
  }
  xxxEnableMenuItem(v24, 61456LL, v11);
  if ( v15 == 61536 )
  {
    _SetCloseDefault(v24);
  }
  else
  {
    v23 = v25;
    if ( !v25 )
      v23 = *(_QWORD *)v24[0];
    SetMenuDefaultItem(v23, v15, 0LL);
  }
  ThreadUnlock1(v19, v18, v20);
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v5);
  return 1LL;
}

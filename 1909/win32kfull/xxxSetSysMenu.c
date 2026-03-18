/*
 * XREFs of xxxSetSysMenu @ 0x1C012C660
 * Callers:
 *     xxxTranslateAccelerator @ 0x1C00EB884 (xxxTranslateAccelerator.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     xxxHandleNCMouseGuys @ 0x1C0211F94 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsTrayWindow @ 0x1C003C7A4 (IsTrayWindow.c)
 *     xxxGetSysMenuPtr @ 0x1C004A6F8 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsSmallerThanScreen @ 0x1C010912C (IsSmallerThanScreen.c)
 *     xxxEnableMenuItem @ 0x1C012C8A0 (xxxEnableMenuItem.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C012E358 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C012E394 (_SetMenuDefaultItem.c)
 *     _GetSubMenu @ 0x1C012E4C0 (_GetSubMenu.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 SysMenuPtr; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 SubMenu; // rax
  __int64 v9; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v11; // rcx
  unsigned int v12; // ebx
  unsigned int v13; // r13d
  unsigned int v14; // r15d
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  char v17; // al
  char v18; // dl
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v23; // eax
  __int64 v24; // rcx
  _QWORD v25[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+30h] [rbp-20h]
  __int64 v27; // [rsp+38h] [rbp-18h] BYREF
  __int64 v28; // [rsp+40h] [rbp-10h]
  __int64 v29; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v25, 0LL);
  v2 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v26 = 0LL;
  SysMenuPtr = xxxGetSysMenuPtr(a1, v3, v4);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, SysMenuPtr);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
    goto LABEL_18;
  SubMenu = GetSubMenu();
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, SubMenu);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
    goto LABEL_18;
  v9 = v26;
  if ( !v26 )
    v9 = *(_QWORD *)v25[0];
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  v27 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v27;
  v28 = v9;
  HMLockObject(v9);
  v11 = (_BYTE *)*((_QWORD *)a1 + 5);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 3;
  v16 = 61536;
  if ( (v11[31] & 0x20) != 0 )
  {
    v15 = 0;
    v13 = 3;
    v2 = 3;
    v16 = 61728;
    v23 = IsTrayWindow(a1);
    v11 = (_BYTE *)*((_QWORD *)a1 + 5);
    if ( v23 )
      v12 = 3;
  }
  else if ( (v11[30] & 2) == 0 )
  {
    v13 = 3;
  }
  if ( (v11[30] & 1) == 0 )
    goto LABEL_23;
  v17 = v11[31];
  if ( (v17 & 1) != 0 )
  {
    v15 = 0;
    v12 = 3;
    if ( (v17 & 0x40) == 0 && IsSmallerThanScreen(a1, 0LL) )
      v12 = 0;
    v11 = (_BYTE *)*((_QWORD *)a1 + 5);
    v2 = 3;
LABEL_23:
    v14 = 3;
  }
  v18 = v11[30];
  if ( (v18 & 4) == 0 )
    v2 = 3;
  if ( (v11[30] & 0xC0) != 0x40 && (v11[24] & 1) == 0 || (v18 & 7) != 0 )
  {
    xxxEnableMenuItem(v25, 61440LL, v2);
    xxxEnableMenuItem(v25, 61472LL, v13);
    xxxEnableMenuItem(v25, 61488LL, v14);
    xxxEnableMenuItem(v25, 61728LL, v15);
  }
  xxxEnableMenuItem(v25, 61456LL, v12);
  if ( v16 == 61536 )
  {
    _SetCloseDefault(v25);
  }
  else
  {
    v24 = v26;
    if ( !v26 )
      v24 = *(_QWORD *)v25[0];
    SetMenuDefaultItem(v24, v16, 0LL);
  }
  ThreadUnlock1(v20, v19, v21);
LABEL_18:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v25, v6, v7);
  return 1LL;
}

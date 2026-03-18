/*
 * XREFs of xxxSetSysMenu @ 0x1C001FC60
 * Callers:
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     xxxTranslateAccelerator @ 0x1C0110944 (xxxTranslateAccelerator.c)
 *     xxxHandleNCMouseGuys @ 0x1C02124D4 (xxxHandleNCMouseGuys.c)
 * Callees:
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     xxxEnableMenuItem @ 0x1C001FF08 (xxxEnableMenuItem.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?_SetCloseDefault@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C008F958 (-_SetCloseDefault@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 *     IsTrayWindow @ 0x1C009B9D4 (IsTrayWindow.c)
 *     xxxGetSysMenuPtr @ 0x1C00A9918 (xxxGetSysMenuPtr.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     IsSmallerThanScreen @ 0x1C012E1F0 (IsSmallerThanScreen.c)
 */

__int64 __fastcall xxxSetSysMenu(struct tagWND *a1)
{
  unsigned int v2; // esi
  __int64 SysMenuPtr; // rax
  __int64 v4; // rcx
  __int64 SubMenu; // rax
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  _BYTE *v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // r13d
  unsigned int v11; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // r14d
  char v14; // al
  char v15; // dl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // eax
  __int64 v21; // rcx
  _QWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]

  SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
  v2 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v23 = 0LL;
  SysMenuPtr = xxxGetSysMenuPtr(a1);
  v23 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v22, SysMenuPtr);
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v22) )
  {
    v4 = v23;
    if ( !v23 )
      v4 = *(_QWORD *)v22[0];
    SubMenu = GetSubMenu(v4);
    v23 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v22, SubMenu);
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v22) )
    {
      v6 = v23;
      if ( !v23 )
        v6 = *(_QWORD *)v22[0];
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v24 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v24;
      v25 = v6;
      HMLockObject(v6);
      v8 = (_BYTE *)*((_QWORD *)a1 + 5);
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v12 = 3;
      v13 = 61536;
      if ( (v8[31] & 0x20) != 0 )
      {
        v12 = 0;
        v10 = 3;
        v2 = 3;
        v13 = 61728;
        v20 = IsTrayWindow(a1);
        v8 = (_BYTE *)*((_QWORD *)a1 + 5);
        if ( v20 )
          v9 = 3;
      }
      else if ( (v8[30] & 2) == 0 )
      {
        v10 = 3;
      }
      if ( (v8[30] & 1) != 0 )
      {
        v14 = v8[31];
        if ( (v14 & 1) == 0 )
        {
LABEL_12:
          v15 = v8[30];
          if ( (v15 & 4) == 0 )
            v2 = 3;
          if ( (v8[30] & 0xC0) != 0x40 && (v8[24] & 1) == 0 || (v15 & 7) != 0 )
          {
            xxxEnableMenuItem(v22, 61440LL, v2);
            xxxEnableMenuItem(v22, 61472LL, v10);
            xxxEnableMenuItem(v22, 61488LL, v11);
            xxxEnableMenuItem(v22, 61728LL, v12);
          }
          xxxEnableMenuItem(v22, 61456LL, v9);
          if ( v13 == 61536 )
          {
            _SetCloseDefault(v22);
          }
          else
          {
            v21 = v23;
            if ( !v23 )
              v21 = *(_QWORD *)v22[0];
            SetMenuDefaultItem(v21, v13, 0LL);
          }
          ThreadUnlock1(v17, v16, v18);
          goto LABEL_20;
        }
        v12 = 0;
        v9 = 3;
        if ( (v14 & 0x40) == 0 && (unsigned int)IsSmallerThanScreen(a1) )
          v9 = 0;
        v8 = (_BYTE *)*((_QWORD *)a1 + 5);
        v2 = 3;
      }
      v11 = 3;
      goto LABEL_12;
    }
  }
LABEL_20:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v22);
  return 1LL;
}

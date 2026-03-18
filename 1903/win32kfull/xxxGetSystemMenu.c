/*
 * XREFs of xxxGetSystemMenu @ 0x1C000C650
 * Callers:
 *     NtUserGetSystemMenu @ 0x1C000C580 (NtUserGetSystemMenu.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     _GetSubMenu @ 0x1C000C820 (_GetSubMenu.c)
 *     xxxLoadSysMenu @ 0x1C001B578 (xxxLoadSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C001F998 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C010AFAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012E2BC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 SysMenu; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 SubMenu; // rax
  void *v13; // rax
  __int64 v14; // rdx
  __int128 *v15; // rcx
  _QWORD v16[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v17; // [rsp+38h] [rbp-29h]
  _QWORD v18[3]; // [rsp+40h] [rbp-21h] BYREF
  __int128 v19; // [rsp+58h] [rbp-9h]
  __int128 v20; // [rsp+68h] [rbp+7h]
  __int128 v21; // [rsp+78h] [rbp+17h]
  __int128 v22; // [rsp+88h] [rbp+27h] BYREF
  __int128 v23; // [rsp+98h] [rbp+37h] BYREF
  __int128 v24; // [rsp+A8h] [rbp+47h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v16, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v17 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v16, v4);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v16)
      && *(_QWORD *)(*(_QWORD *)v16[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v16[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v16[0] + 80LL)) & 0x200) != 0 )
    {
      v13 = (void *)ReferenceDwmApiPort();
      DwmAsyncChildStyleChange(v13);
    }
    if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v16)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      DestroyMenu();
    }
  }
  else if ( ((unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v16)
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v18, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16, SysMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v16) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
      goto LABEL_14;
    }
    LOBYTE(v7) = 1;
    LockWndMenuWorker(a1, v7, v16);
    v8 = *((_QWORD *)a1 + 20);
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16, v8);
    v9 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 600LL);
    if ( !v9 )
      goto LABEL_6;
    do
    {
      if ( *(struct tagWND **)(*v9 + 8LL) == a1 )
        break;
      v9 = (_QWORD *)v9[6];
    }
    while ( v9 );
    if ( v9 )
      v10 = *v9;
    else
LABEL_6:
      v10 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v18, v10);
    if ( *(_QWORD *)v18[0] && (**(_DWORD **)v18[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v18[0] + 16LL) == a1 )
    {
      v14 = v17;
      if ( (**(_DWORD **)v18[0] & 4) != 0 )
      {
        if ( !v17 )
          v14 = *(_QWORD *)v16[0];
        *((_QWORD *)&v19 + 1) = v14;
        *(_QWORD *)&v19 = *(_QWORD *)v18[0] + 40LL;
        v15 = &v22;
        v22 = v19;
      }
      else
      {
        if ( !v17 )
          v14 = *(_QWORD *)v16[0];
        *((_QWORD *)&v20 + 1) = v14;
        *(_QWORD *)&v20 = *(_QWORD *)v18[0] + 48LL;
        v15 = &v23;
        v23 = v20;
      }
      HMAssignmentLock(v15);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v18);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    SubMenu = GetSubMenu();
    v17 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v16, SubMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v16) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v16[0] + 40LL) + 40LL) |= 0x100u;
      *((_QWORD *)&v21 + 1) = a1;
      *(_QWORD *)&v21 = *(_QWORD *)v16[0] + 80LL;
      v24 = v21;
      HMAssignmentLock(&v24);
    }
    if ( v17 )
      v5 = v17;
    else
      v5 = *(_QWORD *)v16[0];
  }
LABEL_14:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v16);
  return v5;
}

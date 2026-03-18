/*
 * XREFs of xxxGetSystemMenu @ 0x1C00C2104
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00C2060 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C0026274 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C006B790 (xxxLoadSysMenu.c)
 *     _GetSubMenu @ 0x1C00C28DC (_GetSubMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00EA614 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C0103EEC (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 SysMenu; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 SubMenu; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  void *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int128 *v20; // rcx
  _QWORD v21[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v22; // [rsp+38h] [rbp-29h]
  _QWORD v23[3]; // [rsp+40h] [rbp-21h] BYREF
  __int128 v24; // [rsp+58h] [rbp-9h]
  __int128 v25; // [rsp+68h] [rbp+7h]
  __int128 v26; // [rsp+78h] [rbp+17h]
  __int128 v27; // [rsp+88h] [rbp+27h] BYREF
  __int128 v28; // [rsp+98h] [rbp+37h] BYREF
  __int128 v29; // [rsp+A8h] [rbp+47h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v21, 0LL);
  v4 = *((_QWORD *)a1 + 17);
  v5 = 0LL;
  v22 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v21, v4);
  if ( a2 )
  {
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v21)
      && *(_QWORD *)(*(_QWORD *)v21[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*(_QWORD *)v21[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*(_QWORD *)v21[0] + 80LL)) & 0x200) != 0 )
    {
      v17 = (void *)ReferenceDwmApiPort(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 80LL) + 112LL), v15, v16);
      DwmAsyncChildStyleChange(v17);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v21)
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v18 = v22;
      if ( !v22 )
        v18 = *(_QWORD *)v21[0];
      DestroyMenu(v18);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==((__int64)v21)
          || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v23, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 17) != 0LL ? 48 : 16);
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v21) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v8);
      goto LABEL_14;
    }
    LOBYTE(v8) = 1;
    LockWndMenuWorker(a1, v8, v21);
    v9 = *((_QWORD *)a1 + 17);
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, v9);
    v10 = *(__int64 **)(*((_QWORD *)a1 + 2) + 600LL);
    if ( !v10 )
      goto LABEL_6;
    do
    {
      if ( *(struct tagWND **)(*v10 + 8) == a1 )
        break;
      v10 = (__int64 *)v10[6];
    }
    while ( v10 );
    if ( v10 )
      v11 = *v10;
    else
LABEL_6:
      v11 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v23, v11);
    if ( *(_QWORD *)v23[0] && (**(_DWORD **)v23[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v23[0] + 16LL) == a1 )
    {
      v19 = v22;
      if ( (**(_DWORD **)v23[0] & 4) != 0 )
      {
        if ( !v22 )
          v19 = *(_QWORD *)v21[0];
        *((_QWORD *)&v24 + 1) = v19;
        *(_QWORD *)&v24 = *(_QWORD *)v23[0] + 40LL;
        v20 = &v27;
        v27 = v24;
      }
      else
      {
        if ( !v22 )
          v19 = *(_QWORD *)v21[0];
        *((_QWORD *)&v25 + 1) = v19;
        *(_QWORD *)&v25 = *(_QWORD *)v23[0] + 48LL;
        v20 = &v28;
        v28 = v25;
      }
      HMAssignmentLock(v20);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v12);
  }
  if ( *((_QWORD *)a1 + 17) )
  {
    SubMenu = GetSubMenu();
    v22 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v21, SubMenu);
    if ( SmartObjStackRef<tagMENU>::operator bool((__int64)v21) )
    {
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21[0] + 40LL) + 40LL) |= 0x100u;
      *((_QWORD *)&v26 + 1) = a1;
      *(_QWORD *)&v26 = *(_QWORD *)v21[0] + 80LL;
      v29 = v26;
      HMAssignmentLock(&v29);
    }
    if ( v22 )
      v5 = v22;
    else
      v5 = *(_QWORD *)v21[0];
  }
LABEL_14:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v21, v6);
  return v5;
}

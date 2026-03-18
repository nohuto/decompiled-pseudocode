/*
 * XREFs of xxxGetSystemMenu @ 0x1C00FB780
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00FB6B0 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C010954C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 *     xxxLoadSysMenu @ 0x1C0128D10 (xxxLoadSysMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C012DCDC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     _GetSubMenu @ 0x1C012E4C0 (_GetSubMenu.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 SysMenu; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 SubMenu; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r14
  __int64 v21; // rcx
  int v22; // ebx
  void *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int128 *v26; // rcx
  _QWORD *v27[2]; // [rsp+28h] [rbp-39h] BYREF
  __int64 v28; // [rsp+38h] [rbp-29h]
  _QWORD v29[3]; // [rsp+40h] [rbp-21h] BYREF
  __int128 v30; // [rsp+58h] [rbp-9h]
  __int128 v31; // [rsp+68h] [rbp+7h]
  __int128 v32; // [rsp+78h] [rbp+17h]
  __int128 v33; // [rsp+88h] [rbp+27h] BYREF
  __int128 v34; // [rsp+98h] [rbp+37h] BYREF
  __int128 v35; // [rsp+A8h] [rbp+47h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v4 = *((_QWORD *)a1 + 20);
  v5 = 0LL;
  v28 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v27, v4);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v27)
      && *(_QWORD *)(*v27[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v27[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*v27[0] + 80LL)) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(*v27[0] + 80LL) )
        v20 = **(_QWORD **)(*v27[0] + 80LL);
      else
        v20 = 0LL;
      v21 = *(_QWORD *)(*(_QWORD *)(*v27[0] + 80LL) + 136LL);
      v22 = *(_DWORD *)(*(_QWORD *)(v21 + 8) + 8LL);
      v23 = (void *)ReferenceDwmApiPort(v21, v18, v19);
      DwmAsyncChildStyleChange(v23, v20, -26, v22);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27)
      && (*(_DWORD *)(*(_QWORD *)(*v27[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v24 = v28;
      if ( !v28 )
        v24 = *v27[0];
      DestroyMenu(v24);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==((__int64)v27)
          || (*(_DWORD *)(*(_QWORD *)(*v27[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v29, 0LL);
    SysMenu = xxxLoadSysMenu(*((_QWORD *)a1 + 20) != 0LL ? 48 : 16);
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, SysMenu);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v9, v10);
      goto LABEL_14;
    }
    LockWndMenuWorker((__int64)a1, 1u, v27);
    v11 = *((_QWORD *)a1 + 20);
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, v11);
    v12 = *(__int64 **)(*((_QWORD *)a1 + 2) + 600LL);
    if ( !v12 )
      goto LABEL_6;
    do
    {
      if ( *(struct tagWND **)(*v12 + 8) == a1 )
        break;
      v12 = (__int64 *)v12[6];
    }
    while ( v12 );
    if ( v12 )
      v13 = *v12;
    else
LABEL_6:
      v13 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v29, v13);
    if ( *(_QWORD *)v29[0] && (**(_DWORD **)v29[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v29[0] + 16LL) == a1 )
    {
      v25 = v28;
      if ( (**(_DWORD **)v29[0] & 4) != 0 )
      {
        if ( !v28 )
          v25 = *v27[0];
        *((_QWORD *)&v30 + 1) = v25;
        *(_QWORD *)&v30 = *(_QWORD *)v29[0] + 40LL;
        v26 = &v33;
        v33 = v30;
      }
      else
      {
        if ( !v28 )
          v25 = *v27[0];
        *((_QWORD *)&v31 + 1) = v25;
        *(_QWORD *)&v31 = *(_QWORD *)v29[0] + 48LL;
        v26 = &v34;
        v34 = v31;
      }
      HMAssignmentLock(v26);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v29, v14, v15);
  }
  if ( *((_QWORD *)a1 + 20) )
  {
    SubMenu = GetSubMenu();
    v28 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v27, SubMenu);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v27) )
    {
      *(_DWORD *)(*(_QWORD *)(*v27[0] + 40LL) + 40LL) |= 0x100u;
      *((_QWORD *)&v32 + 1) = a1;
      *(_QWORD *)&v32 = *v27[0] + 80LL;
      v35 = v32;
      HMAssignmentLock(&v35);
    }
    if ( v28 )
      v5 = v28;
    else
      v5 = *v27[0];
  }
LABEL_14:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v6, v7);
  return v5;
}

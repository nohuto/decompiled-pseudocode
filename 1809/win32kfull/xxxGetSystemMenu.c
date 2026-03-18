/*
 * XREFs of xxxGetSystemMenu @ 0x1C00A625C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     NtUserGetSystemMenu @ 0x1C00A61A0 (NtUserGetSystemMenu.c)
 * Callees:
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     xxxLoadSysMenu @ 0x1C00A5D4C (xxxLoadSysMenu.c)
 *     _GetSubMenu @ 0x1C00A6A3C (_GetSubMenu.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00AC318 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ?UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z @ 0x1C012456C (-UnlockWndMenuWorker@@YAPEAXPEAUtagWND@@_N@Z.c)
 */

__int64 __fastcall xxxGetSystemMenu(struct tagWND *a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // ebx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int128 *v18; // rcx
  _QWORD v19[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h] BYREF
  __int128 v22; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v23[2]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]

  SmartObjStackRefBase<tagMENU>::Init(v23, 0LL);
  v4 = 0LL;
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v23);
  if ( a2 )
  {
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v23)
      && *(_QWORD *)(*v23[0] + 80LL)
      && (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(*v23[0] + 80LL))
      && (DwmGetClassStyle(*(_QWORD *)(*v23[0] + 80LL)) & 0x200) != 0 )
    {
      if ( *(_QWORD *)(*v23[0] + 80LL) )
        v12 = **(_QWORD **)(*v23[0] + 80LL);
      else
        v12 = 0LL;
      v13 = *(_QWORD *)(*(_QWORD *)(*v23[0] + 80LL) + 112LL);
      v14 = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
      v15 = (void *)ReferenceDwmApiPort(v13, v11);
      DwmAsyncChildStyleChange(v15, v12, -26, v14);
    }
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v23)
      && (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) == 0
      && UnlockWndMenuWorker(a1, 1) )
    {
      v16 = v24;
      if ( !v24 )
        v16 = *v23[0];
      DestroyMenu(v16);
    }
  }
  else if ( (SmartObjStackRef<tagMENU>::operator==((__int64)v23)
          || (*(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) & 0x80u) != 0)
         && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 8) != 0 )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v19);
    xxxLoadSysMenu(*((_QWORD *)a1 + 17) != 0LL ? 48 : 16);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23);
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
    {
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v6);
      goto LABEL_14;
    }
    LockWndMenuWorker((__int64)a1, 1u, v23);
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23);
    v7 = *(_QWORD **)(*((_QWORD *)a1 + 2) + 608LL);
    if ( !v7 )
      goto LABEL_6;
    do
    {
      if ( *(struct tagWND **)(*v7 + 8LL) == a1 )
        break;
      v7 = (_QWORD *)v7[6];
    }
    while ( v7 );
    if ( v7 )
      v8 = *v7;
    else
LABEL_6:
      v8 = 0LL;
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v8);
    if ( *(_QWORD *)v19[0] && (**(_DWORD **)v19[0] & 8) == 0 && *(struct tagWND **)(*(_QWORD *)v19[0] + 16LL) == a1 )
    {
      v17 = v24;
      if ( (**(_DWORD **)v19[0] & 4) != 0 )
      {
        if ( !v24 )
          v17 = *v23[0];
        *((_QWORD *)&v20 + 1) = v17;
        *(_QWORD *)&v20 = *(_QWORD *)v19[0] + 40LL;
        v18 = &v20;
      }
      else
      {
        if ( !v24 )
          v17 = *v23[0];
        *((_QWORD *)&v20 + 1) = v17;
        *(_QWORD *)&v20 = *(_QWORD *)v19[0] + 48LL;
        v18 = &v21;
        v21 = v20;
      }
      HMAssignmentLock(v18);
    }
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19, v9);
  }
  if ( *((_QWORD *)a1 + 17) )
  {
    GetSubMenu();
    v24 = 0LL;
    SmartObjStackRefBase<tagMENU>::operator=(v23);
    if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v23) )
    {
      *(_DWORD *)(*(_QWORD *)(*v23[0] + 40LL) + 40LL) |= 0x100u;
      *((_QWORD *)&v20 + 1) = a1;
      *(_QWORD *)&v20 = *v23[0] + 80LL;
      v22 = v20;
      HMAssignmentLock(&v22);
    }
    if ( v24 )
      v4 = v24;
    else
      v4 = *v23[0];
  }
LABEL_14:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v5);
  return v4;
}

/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C02159C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C022E1EC (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int MenuItemRect; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  _QWORD v23[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-90h]
  _QWORD v25[3]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v26[3]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v27; // [rsp+80h] [rbp-48h] BYREF

  v27 = 0uLL;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v10 = ValidateHwnd(a1);
    if ( !v10 )
    {
      MenuItemRect = 0;
      goto LABEL_20;
    }
  }
  else
  {
    v10 = 0LL;
  }
  v25[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v25;
  v25[1] = v10;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v23, v8);
  v14 = ValidateHmenu(a2);
  v24 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v23, v14);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v23) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v16 = v24;
    if ( !v24 )
      v16 = *(_QWORD *)v23[0];
    v26[0] = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = v26;
    v26[1] = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    MenuItemRect = xxxGetMenuItemRect(v10, v23, a3, &v27);
    if ( v10 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 480) + 224LL) & 1) == 0 )
      {
        v18 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 480);
        if ( (*(_BYTE *)(v18 + 224) & 0x20) == 0 )
        {
          v19 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v18,
                                                                                   v17) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v27, &v27, 0LL, v10);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v27;
    ThreadUnlock1(MmUserProbeAddress, v17);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v23, v15);
  ThreadUnlock1(v21, v20);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return MenuItemRect;
}

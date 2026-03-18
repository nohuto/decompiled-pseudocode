/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C01EF340
 * Callers:
 *     <none>
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C02050FC (xxxGetMenuItemRect.c)
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
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v25[2]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-90h]
  _QWORD v27[3]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v28[3]; // [rsp+68h] [rbp-60h] BYREF
  __int128 v29; // [rsp+80h] [rbp-48h] BYREF

  v29 = 0uLL;
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
  v27[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v27;
  v27[1] = v10;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v25);
  v14 = ValidateHmenu(a2);
  v26 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v25, v14);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v25) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v16 = v26;
    if ( !v26 )
      v16 = *(_QWORD *)v25[0];
    v28[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v28;
    v28[1] = v16;
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    MenuItemRect = xxxGetMenuItemRect(v10, v25, a3, &v29);
    if ( v10 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 472) + 224LL) & 1) == 0 )
      {
        v19 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17) + 472);
        if ( (*(_BYTE *)(v19 + 224) & 0x20) == 0 )
        {
          v20 = *(_DWORD *)(*(_QWORD *)(v10 + 40) + 288LL);
          if ( (((unsigned __int16)(v20 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v19,
                                                                                   v17) >> 8)) & 0x1FF) != 0 )
            TransformRectBetweenCoordinateSpaces(&v29, &v29, 0LL, v10);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v29;
    ThreadUnlock1(MmUserProbeAddress, v17, v18);
  }
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v25, v15);
  ThreadUnlock1(v22, v21, v23);
LABEL_20:
  UserSessionSwitchLeaveCrit(v9, v8, v11, v12);
  return MenuItemRect;
}

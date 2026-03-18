/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C022D7D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C02469A8 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  unsigned int MenuItemRect; // esi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  _QWORD v38[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+38h] [rbp-A0h]
  __int64 v40; // [rsp+48h] [rbp-90h] BYREF
  __int64 v41; // [rsp+50h] [rbp-88h]
  __int64 v42; // [rsp+58h] [rbp-80h]
  __int64 v43; // [rsp+60h] [rbp-78h] BYREF
  __int64 v44; // [rsp+68h] [rbp-70h]
  __int64 v45; // [rsp+70h] [rbp-68h]
  __int128 v46; // [rsp+80h] [rbp-58h] BYREF

  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0uLL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v13 = ValidateHwnd(a1);
    if ( !v13 )
    {
      MenuItemRect = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v40 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v40;
  v41 = v13;
  if ( v13 )
    HMLockObject(v13);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v38, v9, v10, v11);
  v15 = ValidateHmenu(a2);
  v39 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v38, v15);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v38) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v19 = v39;
    if ( !v39 )
      v19 = *(_QWORD *)v38[0];
    v43 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v43;
    v44 = v19;
    HMLockObject(v19);
    MenuItemRect = xxxGetMenuItemRect(v13, v38, a3, &v46);
    if ( v13 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 472) + 224LL) & 1) == 0 )
      {
        v24 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v23) + 472);
        if ( (*(_BYTE *)(v24 + 224) & 0x20) == 0 )
        {
          v26 = *(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL);
          if ( (((unsigned __int16)(v26 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v24,
                                                                                   v20,
                                                                                   v21,
                                                                                   v25) >> 8)) & 0x1FF) != 0 )
            goto LABEL_23;
          v30 = *(unsigned int *)(*(_QWORD *)(v13 + 40) + 288LL);
          v31 = (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 288LL) & 0xF) == 2 && (v30 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v30, v27, v28, v29) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v32, v20, v21, v33) & 0x20000000) == 0 )
          {
            v8 = 0;
          }
          if ( v31 != v8 )
LABEL_23:
            TransformRectBetweenCoordinateSpaces(&v46, &v46, 0LL, v13);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v46;
    ThreadUnlock1(MmUserProbeAddress, v20, v21);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v38, v16, v17, v18);
  ThreadUnlock1(v35, v34, v36);
LABEL_28:
  UserSessionSwitchLeaveCrit(v12);
  return MenuItemRect;
}

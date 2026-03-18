/*
 * XREFs of NtUserGetMenuItemRect @ 0x1C022D1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     xxxGetMenuItemRect @ 0x1C0246268 (xxxGetMenuItemRect.c)
 */

__int64 __fastcall NtUserGetMenuItemRect(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int MenuItemRect; // esi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  _QWORD v31[2]; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+38h] [rbp-A0h]
  __int64 v33; // [rsp+48h] [rbp-90h] BYREF
  __int64 v34; // [rsp+50h] [rbp-88h]
  __int64 v35; // [rsp+58h] [rbp-80h]
  __int64 v36; // [rsp+60h] [rbp-78h] BYREF
  __int64 v37; // [rsp+68h] [rbp-70h]
  __int64 v38; // [rsp+70h] [rbp-68h]
  __int128 v39; // [rsp+80h] [rbp-58h] BYREF

  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v39 = 0uLL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
    {
      MenuItemRect = 0;
      goto LABEL_28;
    }
  }
  else
  {
    v12 = 0LL;
  }
  v33 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v33;
  v34 = v12;
  if ( v12 )
    HMLockObject(v12);
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v31, v9, v10);
  v14 = ValidateHmenu(a2);
  v32 = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(v31, v14);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v31) )
  {
    MenuItemRect = 0;
  }
  else
  {
    v17 = v32;
    if ( !v32 )
      v17 = *(_QWORD *)v31[0];
    v36 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v36;
    v37 = v17;
    HMLockObject(v17);
    MenuItemRect = xxxGetMenuItemRect(v12, v31, a3, &v39);
    if ( v12 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19) + 472) + 224LL) & 1) == 0 )
      {
        v20 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19) + 472);
        if ( (*(_BYTE *)(v20 + 224) & 0x20) == 0 )
        {
          v21 = *(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL);
          if ( (((unsigned __int16)(v21 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v20,
                                                                                   v18,
                                                                                   v19) >> 8)) & 0x1FF) != 0 )
            goto LABEL_23;
          v24 = *(unsigned int *)(*(_QWORD *)(v12 + 40) + 288LL);
          v25 = (*(_DWORD *)(*(_QWORD *)(v12 + 40) + 288LL) & 0xF) == 2 && (v24 & 0x20000000) != 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v24, v22, v23) & 0xF) != 2
            || (W32GetCurrentThreadDpiAwarenessContext(v26, v18, v19) & 0x20000000) == 0 )
          {
            v8 = 0;
          }
          if ( v25 != v8 )
LABEL_23:
            TransformRectBetweenCoordinateSpaces(&v39, &v39, 0LL, v12);
        }
      }
    }
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    *a4 = v39;
    ThreadUnlock1(MmUserProbeAddress, v18, v19);
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v31, v15, v16);
  ThreadUnlock1(v28, v27, v29);
LABEL_28:
  UserSessionSwitchLeaveCrit(v11);
  return MenuItemRect;
}

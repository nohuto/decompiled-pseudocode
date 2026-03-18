/*
 * XREFs of xxxDoScrollMenu @ 0x1C02296AC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 * Callees:
 *     CalcSBStuff @ 0x1C0020010 (CalcSBStuff.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C0106D0C (GetWndSBDisableFlags.c)
 *     GetAppCompatFlags @ 0x1C0115390 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01C424C (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228A8C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C0228D28 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C02295E4 (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  unsigned int v13; // r13d
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // r9
  char WndSBDisableFlags; // al
  struct tagMENU *ScrollMenu; // rax
  __int64 v19; // r12
  __int64 ThreadWin32Thread; // rax
  int v21; // r12d
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-79h]
  unsigned __int16 v26; // [rsp+34h] [rbp-75h]
  _QWORD v27[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v28; // [rsp+48h] [rbp-61h]
  _QWORD v29[4]; // [rsp+50h] [rbp-59h] BYREF
  _BYTE v30[64]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v27, 0LL);
  v28 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL, v9) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v10);
      SBCtlSetup(v8);
      v11 = *((_QWORD *)a2 + 5);
      v12 = *(_DWORD *)(v8 + 12);
      v13 = (__int16)a4;
      v14 = SWORD1(a4) - *(_DWORD *)(v11 + 92);
      v25 = (__int16)a4 - *(_DWORD *)(v11 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v30, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v15, v16);
      v10 = *((_QWORD *)a1 + 5);
      LOBYTE(v12) = WndSBDisableFlags;
      v13 = (__int16)a4;
      v14 = SWORD1(a4) - *(_DWORD *)(v10 + 92);
      v25 = (__int16)a4 - *(_DWORD *)(v10 + 88);
    }
    v26 = v14;
    if ( (v12 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v27, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
      {
        v19 = v28;
        if ( !v28 )
          v19 = *(_QWORD *)v27[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
        v29[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v29;
        v29[1] = v19;
        _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
        v21 = xxxTrackPopupMenuEx(v27, 386LL, v13, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v23, v22);
        if ( v21 )
        {
          if ( (unsigned __int8)v21 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v25 | (unsigned __int64)(v26 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v21, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v10);
}

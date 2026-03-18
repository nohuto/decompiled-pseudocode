/*
 * XREFs of xxxDoScrollMenu @ 0x1C0200C74
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     CalcSBStuff @ 0x1C0038D48 (CalcSBStuff.c)
 *     GetAppCompatFlags @ 0x1C00F8F30 (GetAppCompatFlags.c)
 *     GetWndSBDisableFlags @ 0x1C012FA58 (GetWndSBDisableFlags.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01A2874 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02002F8 (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C0200BAC (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  int v13; // r14d
  char WndSBDisableFlags; // al
  struct tagMENU *ScrollMenu; // rax
  __int64 v16; // r14
  __int64 ThreadWin32Thread; // rax
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct tagWND *v22; // rcx
  unsigned __int64 v23; // rdx
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
      v13 = SWORD1(a4) - *(_DWORD *)(v11 + 92);
      v25 = (__int16)a4 - *(_DWORD *)(v11 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, (__int64)v30, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3);
      v10 = *((_QWORD *)a1 + 5);
      LOBYTE(v12) = WndSBDisableFlags;
      v13 = SWORD1(a4) - *(_DWORD *)(v10 + 92);
      v25 = (__int16)a4 - *(_DWORD *)(v10 + 88);
    }
    v26 = v13;
    if ( (v12 & 3) != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v28 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v27, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v27) )
      {
        v16 = v28;
        if ( !v28 )
          v16 = *(_QWORD *)v27[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10);
        v29[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v29;
        v29[1] = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
        v18 = xxxTrackPopupMenuEx(v27, 386LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v20, v19, v21);
        if ( v18 )
        {
          if ( (unsigned __int8)v18 == 4 )
          {
            if ( a2 )
            {
              v22 = a2;
              v23 = (unsigned __int16)v25 | (unsigned __int64)(v26 << 16);
            }
            else
            {
              v23 = a4;
              v22 = a1;
            }
            xxxSBTrackInit(v22, v23);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v18, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v27, v10);
}

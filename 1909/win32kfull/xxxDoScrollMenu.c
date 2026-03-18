/*
 * XREFs of xxxDoScrollMenu @ 0x1C0241B40
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetWndSBDisableFlags @ 0x1C00EB194 (GetWndSBDisableFlags.c)
 *     GetAppCompatFlags @ 0x1C00F6E70 (GetAppCompatFlags.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D73E0 (safe_cast_fnid_to_PSBWND.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1C02411AC (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 *     SBCtlSetup @ 0x1C0241A70 (SBCtlSetup.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 */

_QWORD *__fastcall xxxDoScrollMenu(struct tagWND *a1, struct tagWND *a2, unsigned int a3, unsigned __int64 a4)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // r8d
  unsigned int v15; // r13d
  int v16; // r12d
  __int64 v17; // r8
  __int64 v18; // r9
  char WndSBDisableFlags; // al
  struct tagMENU *ScrollMenu; // rax
  __int64 v21; // r12
  __int64 ThreadWin32Thread; // rax
  int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v28; // [rsp+30h] [rbp-79h]
  unsigned __int16 v29; // [rsp+34h] [rbp-75h]
  _QWORD v30[2]; // [rsp+38h] [rbp-71h] BYREF
  __int64 v31; // [rsp+48h] [rbp-61h]
  __int64 v32; // [rsp+50h] [rbp-59h] BYREF
  __int64 v33; // [rsp+58h] [rbp-51h]
  __int64 v34; // [rsp+60h] [rbp-49h]
  int v35[16]; // [rsp+70h] [rbp-39h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v30, 0LL);
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  v8 = safe_cast_fnid_to_PSBWND((__int64)a2);
  if ( (int)GetAppCompatFlags(0LL, v9, v10) >= 0 )
  {
    if ( a2 )
    {
      if ( !v8 )
        return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v11, v12);
      SBCtlSetup(v8);
      v13 = *((_QWORD *)a2 + 5);
      v14 = *(_DWORD *)(v8 + 12);
      v15 = (__int16)a4;
      v16 = SWORD1(a4) - *(_DWORD *)(v13 + 92);
      v28 = (__int16)a4 - *(_DWORD *)(v13 + 88);
    }
    else
    {
      CalcSBStuff((__int64)a1, v35, a3);
      WndSBDisableFlags = GetWndSBDisableFlags((__int64)a1, a3, v17, v18);
      v11 = *((_QWORD *)a1 + 5);
      LOBYTE(v14) = WndSBDisableFlags;
      v15 = (__int16)a4;
      v16 = SWORD1(a4) - *(_DWORD *)(v11 + 92);
      v28 = (__int16)a4 - *(_DWORD *)(v11 + 88);
    }
    v12 = v14 & 3;
    v29 = v16;
    if ( (_BYTE)v12 != 3 )
    {
      ScrollMenu = xxxGetScrollMenu(a1, a3);
      v31 = 0LL;
      SmartObjStackRefBase<tagMENU>::operator=(v30, (__int64)ScrollMenu);
      if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v30) )
      {
        v21 = v31;
        if ( !v31 )
          v21 = *(_QWORD *)v30[0];
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
        v32 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v32;
        v33 = v21;
        HMLockObject(v21);
        v23 = xxxTrackPopupMenuEx(v30, 386LL, v15, (unsigned int)SWORD1(a4), a1, 0LL);
        ThreadUnlock1(v25, v24, v26);
        if ( v23 )
        {
          if ( (unsigned __int8)v23 == 4 )
          {
            if ( a2 )
              a4 = (unsigned __int16)v28 | (unsigned __int64)(v29 << 16);
            else
              a2 = a1;
            xxxSBTrackInit(a2, a4);
          }
          else
          {
            xxxDoScroll(a2, a1, (unsigned __int8)v23, 0LL, a3);
            xxxDoScroll(a2, a1, 8LL, 0LL, a3);
          }
        }
      }
    }
  }
  return SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v30, v11, v12);
}

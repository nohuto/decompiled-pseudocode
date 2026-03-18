/*
 * XREFs of xxxInternalPaintDesktop @ 0x1C0112D90
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00546DC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0128CB0 (xxxDWP_EraseBkgnd.c)
 *     xxxRedrawHungWindow @ 0x1C015EBC8 (xxxRedrawHungWindow.c)
 *     xxxRealizeDesktop @ 0x1C01EAFF0 (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x1C02322F0 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x1C0112F34 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  HDC v8; // [rsp+38h] [rbp-48h]
  __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+50h] [rbp-30h] BYREF
  int v11; // [rsp+58h] [rbp-28h]
  int v12; // [rsp+5Ch] [rbp-24h]
  __int128 v13; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v9 = 0LL;
    v13 = 0uLL;
    v7 = 0LL;
    v8 = 0LL;
    if ( (unsigned int)GreGetDCOrgEx(a2, &v9, &v13) )
    {
      v11 = DWORD2(v13) - v13;
      v10 = 0LL;
      v12 = HIDWORD(v13) - DWORD1(v13);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreSetDCOrg(a2, (unsigned int)v10, HIDWORD(v10), &v10);
      GreOffsetClipRgn(a2);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v7 = a1;
      v8 = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, &xxxDesktopPaintCallback, &v7, 1);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, (unsigned int)v13, DWORD1(v13), &v13);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  return v3;
}

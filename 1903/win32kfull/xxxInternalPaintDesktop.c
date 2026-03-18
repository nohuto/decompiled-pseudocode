/*
 * XREFs of xxxInternalPaintDesktop @ 0x1C0138D90
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00B387C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0124A68 (xxxDWP_EraseBkgnd.c)
 *     xxxRedrawHungWindow @ 0x1C015DC18 (xxxRedrawHungWindow.c)
 *     xxxRealizeDesktop @ 0x1C01EB170 (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x1C0232910 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x1C0138F34 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  HDC v12; // [rsp+38h] [rbp-48h]
  __int64 v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-30h] BYREF
  int v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+5Ch] [rbp-24h]
  __int128 v17; // [rsp+60h] [rbp-20h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v13 = 0LL;
    v17 = 0uLL;
    v11 = 0LL;
    v12 = 0LL;
    if ( (unsigned int)GreGetDCOrgEx(a2, &v13, &v17) )
    {
      v15 = DWORD2(v17) - v17;
      v14 = 0LL;
      v16 = HIDWORD(v17) - DWORD1(v17);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), (unsigned int)-DWORD1(v17), v6, v7);
      GreSetDCOrg(a2, (unsigned int)v14, HIDWORD(v14), &v14);
      GreOffsetClipRgn(a2);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v11 = a1;
      v12 = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, &xxxDesktopPaintCallback, &v11, 1);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), gpDispInfo, v8, v9);
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, (unsigned int)v17, DWORD1(v17), &v17);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  return v3;
}

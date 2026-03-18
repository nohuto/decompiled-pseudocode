/*
 * XREFs of xxxInternalPaintDesktop @ 0x1C010C1E8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006C68C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00FEB18 (xxxDWP_EraseBkgnd.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 *     xxxRealizeDesktop @ 0x1C01B32AC (xxxRealizeDesktop.c)
 *     NtUserPaintDesktop @ 0x1C01F3330 (NtUserPaintDesktop.c)
 * Callees:
 *     GreOffsetClipRgn @ 0x1C010C350 (GreOffsetClipRgn.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInternalPaintDesktop(__int64 a1, HDC a2, int a3)
{
  unsigned int v3; // ebx
  _QWORD v7[2]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v8[16]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v9; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v10; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+64h] [rbp-1Ch]
  int v12; // [rsp+68h] [rbp-18h]
  int v13; // [rsp+6Ch] [rbp-14h]

  v3 = 0;
  if ( a3 )
  {
    v9 = 0uLL;
    if ( (unsigned int)GreGetDCOrgEx(a2, v8, &v10) )
    {
      DWORD2(v9) = v12 - v10;
      *(_QWORD *)&v9 = 0LL;
      HIDWORD(v9) = v13 - v11;
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreSetDCOrg(a2, (unsigned int)v9, DWORD1(v9), &v9);
      GreOffsetClipRgn(a2);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      v7[0] = a1;
      v7[1] = a2;
      v3 = xxxEnumDisplayMonitors(a2, 0LL, &xxxDesktopPaintCallback, v7, 1);
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
      GreOffsetClipRgn(a2);
      GreSetDCOrg(a2, v10, v11, &v10);
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    }
  }
  return v3;
}

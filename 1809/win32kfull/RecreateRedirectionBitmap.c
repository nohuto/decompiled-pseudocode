/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00107D4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C0104F04 (zzzUpdateWindowsAfterModeChange.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01D4310 (UserRecreateRedirectionBitmap.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E89F8 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C0217FA0 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C0010724 (ChangeRedirectionParentInDCEs.c)
 *     GreNotifyDirtySprite @ 0x1C0010ABC (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C0010BC4 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C0073E98 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     GetRedirectionFlags @ 0x1C0074038 (GetRedirectionFlags.c)
 *     HintSpriteShape @ 0x1C0074624 (HintSpriteShape.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0077534 (CreateOrGetRedirectionBitmap.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C01225E0 (GreAdjustSpriteDirtyAccum.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, LONG a2, int a3, int a4, unsigned int a5, HSURF *a6)
{
  int v8; // r13d
  __int64 v9; // rcx
  HSURF RedirectionBitmap; // rsi
  int v11; // eax
  HSURF v12; // rbx
  int v13; // r12d
  LONG x; // r14d
  bool v15; // zf
  int v16; // r13d
  __int64 v17; // rcx
  HWND v18; // rdx
  LONG v19; // eax
  int v20; // ebx
  struct _POINTL v23; // [rsp+48h] [rbp-81h] BYREF
  int v24; // [rsp+50h] [rbp-79h]
  int v25; // [rsp+54h] [rbp-75h]
  struct _POINTL v26; // [rsp+58h] [rbp-71h] BYREF
  tagBITMAP v27; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v28[32]; // [rsp+80h] [rbp-49h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-29h]
  struct tagBITMAP v30; // [rsp+A8h] [rbp-21h] BYREF
  struct _RECTL v31; // [rsp+C8h] [rbp-1h] BYREF

  v23.x = a2;
  v26 = 0LL;
  memset(&v30, 0, sizeof(v30));
  memset(&v27, 0, sizeof(v27));
  v8 = IsDesktopWindow(a1);
  v24 = 0;
  v25 = 0;
  RedirectionBitmap = (HSURF)GetRedirectionBitmap(v9);
  SURFREF::SURFREF((SURFREF *)v28, RedirectionBitmap);
  if ( !v29 )
  {
    SURFREF::~SURFREF((SURFREF *)v28);
    goto LABEL_3;
  }
  v20 = *(_DWORD *)(v29 + 112);
  DEC_SHARE_REF_CNT(v29);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v28);
  if ( (v20 & 0x800000) == 0 || !a4 || v8 )
  {
LABEL_3:
    v11 = CreateOrGetRedirectionBitmap(a1, 1LL, a5, &v26);
    v12 = (HSURF)v26;
    v13 = v11;
    if ( v11 < 0 )
      goto LABEL_7;
    if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v26, 0) )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, v12, 1);
      v13 = -1073741801;
    }
    if ( v13 < 0 )
    {
LABEL_7:
      SetRedirectionBitmap(a1, 0LL, 0);
      v25 = 1;
    }
    if ( v12 && !v8 )
    {
      if ( RedirectionBitmap )
      {
        GreExtGetObjectW(RedirectionBitmap);
        v24 = 1;
      }
      GreExtGetObjectW(v12);
    }
    if ( (GetRedirectionFlags(a1) & 1) != 0
      && (HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, 0LL, v8 == 0 ? 2 : 0), v12) )
    {
      HintSpriteShape(*(_QWORD *)(gpDispInfo + 40LL), a1, v12, v8 == 0 ? 2 : 0);
      x = v23.x;
      v15 = v8 == 0;
      v16 = a3;
      if ( v15 )
      {
        v17 = *((_QWORD *)a1 + 5);
        v18 = *(HWND *)a1;
        v26.x = *(_DWORD *)(v17 + 88);
        v19 = *(_DWORD *)(v17 + 92);
        v31.left = 0;
        v31.top = 0;
        v26.y = v19;
        v31.right = v27.bmWidth;
        v31.bottom = v27.bmHeight;
        v23.x = -v23.x;
        v23.y = -a3;
        GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v18, &v31, &v23, &v26);
      }
    }
    else
    {
      v16 = a3;
      x = v23.x;
    }
    if ( v24 )
    {
      BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)RedirectionBitmap, (HBITMAP)v12, &v30, &v27, x, v16);
      GreNotifyDirtySprite(*(HWND *)a1);
    }
    ChangeRedirectionParentInDCEs(a1, v25);
    if ( a6 )
    {
      *a6 = RedirectionBitmap;
    }
    else if ( RedirectionBitmap )
    {
      DeleteOrSetRedirectionBitmap((__int64)a1, RedirectionBitmap, 1);
    }
    return (unsigned int)v13;
  }
  if ( a6 )
    *a6 = 0LL;
  return 0LL;
}

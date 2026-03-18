/*
 * XREFs of RecreateRedirectionBitmap @ 0x1C00ED748
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00ED094 (zzzUpdateWindowsAfterModeChange.c)
 *     UserRecreateRedirectionBitmap @ 0x1C01E9890 (UserRecreateRedirectionBitmap.c)
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FE3AC (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 *     NtUserHwndQueryRedirectionInfo @ 0x1C022FE30 (NtUserHwndQueryRedirectionInfo.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     HintSpriteShape @ 0x1C0029310 (HintSpriteShape.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C002C250 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C002C3F4 (CreateOrGetRedirectionBitmap.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C00AD814 (--1EPALOBJ@@QEAA@XZ.c)
 *     ChangeRedirectionParentInDCEs @ 0x1C00EDA08 (ChangeRedirectionParentInDCEs.c)
 *     GreNotifyDirtySprite @ 0x1C00EDAB8 (GreNotifyDirtySprite.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x1C00EDBC0 (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     GreAdjustSpriteDirtyAccum @ 0x1C00EE578 (GreAdjustSpriteDirtyAccum.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall RecreateRedirectionBitmap(struct tagWND *a1, int a2, int a3, int a4, int a5, HBRUSH *a6)
{
  int v8; // eax
  int v9; // r13d
  __int64 v10; // rcx
  __int64 RedirectionBitmap; // rax
  __int64 v12; // rdx
  HBRUSH v13; // rsi
  struct _POINTL v14; // rax
  int v15; // ebx
  int v16; // eax
  HBRUSH v17; // rbx
  int v18; // r12d
  bool v19; // zf
  int v20; // r13d
  struct _POINTL *v21; // rcx
  HWND v22; // rdx
  int v23; // r14d
  struct _POINTL v27; // [rsp+48h] [rbp-71h] BYREF
  int v28; // [rsp+50h] [rbp-69h]
  int v29; // [rsp+54h] [rbp-65h]
  struct _POINTL v30; // [rsp+58h] [rbp-61h] BYREF
  __int64 v31; // [rsp+60h] [rbp-59h]
  LONG bmWidth; // [rsp+68h] [rbp-51h]
  LONG bmHeight; // [rsp+6Ch] [rbp-4Dh]
  tagBITMAP v34; // [rsp+70h] [rbp-49h] BYREF
  struct tagBITMAP v35; // [rsp+90h] [rbp-29h] BYREF
  struct _RECTL v36; // [rsp+B0h] [rbp-9h] BYREF

  v27 = 0LL;
  memset(&v35, 0, sizeof(v35));
  memset(&v34, 0, sizeof(v34));
  LOBYTE(v8) = IsDesktopWindow((__int64)a1);
  v9 = v8;
  v28 = 0;
  v29 = 0;
  RedirectionBitmap = GetRedirectionBitmap(v10);
  LOBYTE(v12) = 5;
  v13 = (HBRUSH)RedirectionBitmap;
  v14 = (struct _POINTL)HmgShareLockCheck(RedirectionBitmap, v12);
  v30 = v14;
  if ( v14 )
  {
    v15 = *(_DWORD *)(*(_QWORD *)&v14 + 112LL);
    ((void (__fastcall *)(_QWORD))DEC_SHARE_REF_CNT)(v14);
    if ( (v15 & 0x800000) != 0 && a4 && !v9 )
    {
      if ( a6 )
        *a6 = 0LL;
      return 0LL;
    }
  }
  else
  {
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v30);
  }
  v16 = CreateOrGetRedirectionBitmap((__int64)a1, 1, a5, (HSURF *)&v27);
  v17 = (HBRUSH)v27;
  v18 = v16;
  if ( v16 < 0 )
    goto LABEL_28;
  if ( !(unsigned int)SetRedirectionBitmap(a1, *(HBITMAP *)&v27, 0) )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v17, 1);
    v18 = -1073741801;
  }
  if ( v18 < 0 )
  {
LABEL_28:
    SetRedirectionBitmap(a1, 0LL, 0);
    v29 = 1;
  }
  if ( v17 && !v9 )
  {
    if ( v13 )
    {
      GreExtGetObjectW(v13, 32LL, (char *)&v35);
      v28 = 1;
    }
    GreExtGetObjectW(v17, 32LL, (char *)&v34);
  }
  if ( (GetRedirectionFlags((__int64)a1) & 1) == 0
    || (HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, 0LL, v9 == 0 ? 2 : 0), !v17) )
  {
    v20 = a3;
    goto LABEL_26;
  }
  HintSpriteShape(*(HDEV *)(gpDispInfo + 40LL), a1, (HBITMAP)v17, v9 == 0 ? 2 : 0);
  v19 = v9 == 0;
  v20 = a3;
  if ( !v19 )
  {
LABEL_26:
    v23 = a2;
    goto LABEL_17;
  }
  v21 = (struct _POINTL *)*((_QWORD *)a1 + 5);
  v22 = *(HWND *)a1;
  *(_QWORD *)&v36.right = 0LL;
  *(_QWORD *)&v36.left = 0LL;
  v27 = 0LL;
  v30 = v21[11];
  v36.right = v34.bmWidth;
  v36.bottom = v34.bmHeight;
  bmWidth = v35.bmWidth;
  bmHeight = v35.bmHeight;
  v31 = 0LL;
  v23 = a2;
  v27.x = -a2;
  v27.y = -a3;
  GreAdjustSpriteDirtyAccum(*(HDEV *)(gpDispInfo + 40LL), v22, &v36, &v27, &v30);
LABEL_17:
  if ( v28 )
  {
    BltOldRedirectionBitsToNewBitmap(a1, (HBITMAP)v13, (HBITMAP)v17, &v35, &v34, v23, v20);
    GreNotifyDirtySprite(*(HWND *)a1);
  }
  ChangeRedirectionParentInDCEs(a1);
  if ( a6 )
  {
    *a6 = v13;
  }
  else if ( v13 )
  {
    DeleteOrSetRedirectionBitmap((__int64)a1, (HSURF)v13, 1);
  }
  return (unsigned int)v18;
}

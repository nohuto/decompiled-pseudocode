/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C007CD40
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C00724D0 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0119E48 (zzzUpdateShadowAlpha.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C011A754 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01B13E4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C01FAD2C (zzzMoveShadow.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0034050 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00346AC (GreClientRgnUpdated.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     OffsetChildren @ 0x1C0073D44 (OffsetChildren.c)
 *     UpdateSprite @ 0x1C007B160 (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C007CFE4 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C007D1C4 (GetRedirectionFlags.c)
 *     UnsetRedirectedWindow @ 0x1C00C4B08 (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00C4EA8 (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01B1338 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01B2300 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        HDC a2,
        const struct tagPOINT *a3,
        struct tagSIZE *a4,
        HDC a5,
        struct tagPOINT *a6,
        unsigned int a7,
        struct _BLENDFUNCTION *a8,
        unsigned int a9,
        struct tagRECT *a10)
{
  HBITMAP v10; // rdi
  struct tagSIZE *v11; // r15
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rcx
  BOOL v19; // esi
  char RedirectionFlags; // al
  unsigned int v21; // r12d
  int v22; // r14d
  __int64 v23; // r8
  int v24; // esi
  unsigned int v25; // r13d
  int updated; // r15d
  int v27; // ecx
  _DWORD *v29; // rdx
  int v30; // eax
  int v31; // [rsp+60h] [rbp-71h] BYREF
  int v32; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v33; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v34; // [rsp+70h] [rbp-61h]
  HDC v35; // [rsp+78h] [rbp-59h]
  struct tagRECT *v36; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v37; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v38; // [rsp+90h] [rbp-41h]
  struct tagPOINT *v39; // [rsp+98h] [rbp-39h]
  HDC v40; // [rsp+A0h] [rbp-31h]
  __int128 v41; // [rsp+A8h] [rbp-29h]
  __int128 v42; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v35 = a5;
  v11 = a4;
  v38 = a6;
  v37 = a8;
  v36 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v34 = a4;
  v39 = (struct tagPOINT *)a3;
  v40 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v33 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v41 = v15;
  v42 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v17 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1);
        v17 = *((_QWORD *)a1 + 5);
      }
      *(_DWORD *)(v17 + 232) &= ~0x40u;
    }
  }
  v18 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v18 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v18 + 232) & 0x20) != 0 )
    return 3221225485LL;
  v19 = GetRedirectionBitmap((__int64)a1) != 0;
  RedirectionFlags = GetRedirectionFlags(a1);
  if ( v19 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v21 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v31, &v32);
    v22 = v31;
    if ( v19 && v31 )
    {
      v30 = RecreateRedirectionBitmap(a1, 0, (__int64)&v33);
      v10 = (HBITMAP)v33;
      updated = v30;
      if ( v30 < 0 )
        goto LABEL_45;
      v11 = v34;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v24 = v32;
    if ( v22 || v32 )
    {
      if ( gcountPWO )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated(1);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    }
    v25 = v21 | 0x20000000;
    if ( !v35 )
      v25 = v21;
    updated = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v23, v40, v39, v11, v35, v38, a7, v37, v25, v36);
    if ( updated >= 0 && v24 )
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v41,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v41),
        0LL,
        1);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
      if ( v22 || v24 )
        GenerateMouseMove(0LL);
      if ( (v25 & 0x20) == 0 || v22 || v24 )
      {
        v27 = 3;
        if ( !gdwDeferWinEvent )
          v27 = 1;
        xxxWindowEvent(0x800Bu, (__int64)a1, 0, 0, v27);
      }
      return (unsigned int)updated;
    }
LABEL_45:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v41;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v42;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    return (unsigned int)updated;
  }
  if ( !v11 || (v29 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v29[24] - v29[22]) && v11->cy == v29[25] - v29[23] )
  {
    v21 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL, (__int64)v29);
  return 2151546881LL;
}

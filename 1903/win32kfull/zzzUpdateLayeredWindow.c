/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C0028DD8
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0027220 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146010 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146168 (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E9184 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C023B380 (zzzMoveShadow.c)
 * Callees:
 *     OffsetChildren @ 0x1C0025BAC (OffsetChildren.c)
 *     UpdateSprite @ 0x1C002AD80 (UpdateSprite.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C002B214 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C002B3F0 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C00446B4 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C0044AF0 (UnsetRedirectedWindow.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C00C4520 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C00C6368 (GreClientRgnUpdated.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8FFC (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01EA0F0 (InvalidateGDIWindows.c)
 */

__int64 __fastcall zzzUpdateLayeredWindow(
        struct tagWND *a1,
        __int64 a2,
        const struct tagPOINT *a3,
        const struct tagSIZE *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned int a9,
        __int64 a10)
{
  HBITMAP v10; // rdi
  const struct tagSIZE *v11; // r15
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  BOOL v21; // esi
  char RedirectionFlags; // al
  unsigned int v23; // r12d
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  __int64 v28; // r8
  int v29; // esi
  int v30; // r13d
  int updated; // r15d
  int v32; // ecx
  _DWORD *v34; // rdx
  int v35; // eax
  int v36; // [rsp+60h] [rbp-71h] BYREF
  int v37; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v38; // [rsp+68h] [rbp-69h] BYREF
  const struct tagSIZE *v39; // [rsp+70h] [rbp-61h]
  __int64 v40; // [rsp+78h] [rbp-59h]
  __int64 v41; // [rsp+80h] [rbp-51h]
  __int64 v42; // [rsp+88h] [rbp-49h]
  __int64 v43; // [rsp+90h] [rbp-41h]
  const struct tagPOINT *v44; // [rsp+98h] [rbp-39h]
  __int64 v45; // [rsp+A0h] [rbp-31h]
  __int128 v46; // [rsp+A8h] [rbp-29h]
  __int128 v47; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v40 = a5;
  v11 = a4;
  v43 = a6;
  v42 = a8;
  v41 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v39 = a4;
  v44 = a3;
  v45 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v38 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v46 = v15;
  v47 = v16;
  v17 = IsWindowDesktopComposed(a1);
  v18 = 1LL;
  if ( v17 )
  {
    v19 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v19 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v19 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1);
        v19 = *((_QWORD *)a1 + 5);
      }
      *(_DWORD *)(v19 + 232) &= ~0x40u;
    }
  }
  v20 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v20 + 26) & 8) == 0 )
    return 3221225485LL;
  if ( (*(_DWORD *)(v20 + 232) & 0x20) != 0 )
    return 3221225485LL;
  v21 = GetRedirectionBitmap(a1, v18) != 0;
  RedirectionFlags = GetRedirectionFlags(a1);
  if ( v21 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v23 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v36, &v37);
    v27 = v36;
    if ( v21 && v36 )
    {
      v35 = RecreateRedirectionBitmap(a1, 0, (__int64)&v38);
      v10 = (HBITMAP)v38;
      updated = v35;
      if ( v35 < 0 )
        goto LABEL_45;
      v11 = v39;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v24, v25, v26);
    v29 = v37;
    if ( v27 || v37 )
    {
      if ( gcountPWO )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated(1LL);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    }
    v30 = v23 | 0x20000000;
    if ( !v40 )
      v30 = v23;
    updated = UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v28, v45, v44, v11, v40, v43, a7, v42, v30, v41);
    if ( updated >= 0 && v29 )
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v46,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v46),
        0LL,
        1u);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
      if ( v27 || v29 )
        GenerateMouseMove(0LL);
      if ( (v30 & 0x20) == 0 || v27 || v29 )
      {
        v32 = 3;
        if ( !gdwDeferWinEvent )
          v32 = 1;
        xxxWindowEvent(0x800Bu, v32);
      }
      return (unsigned int)updated;
    }
LABEL_45:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v46;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v47;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    return (unsigned int)updated;
  }
  if ( !v11 || (v34 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v34[24] - v34[22]) && v11->cy == v34[25] - v34[23] )
  {
    v23 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL);
  return 2151546881LL;
}

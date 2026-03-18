/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C002F248
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C002D690 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0146DC0 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     zzzUpdateShadowAlpha @ 0x1C0146F18 (zzzUpdateShadowAlpha.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E9004 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C023AD60 (zzzMoveShadow.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     OffsetChildren @ 0x1C002C01C (OffsetChildren.c)
 *     UpdateSprite @ 0x1C00311F0 (UpdateSprite.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0031684 (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     GetRedirectionFlags @ 0x1C0031860 (GetRedirectionFlags.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C0065BF0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C0067A38 (GreClientRgnUpdated.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C0089084 (DeleteOrSetRedirectionBitmap.c)
 *     UnsetRedirectedWindow @ 0x1C00894C0 (UnsetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E8E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01E9F70 (InvalidateGDIWindows.c)
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
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // r12d
  int v26; // r14d
  __int64 v27; // r8
  int v28; // esi
  int v29; // r13d
  int updated; // r15d
  int v31; // ecx
  _DWORD *v33; // rdx
  int v34; // eax
  int v35; // [rsp+60h] [rbp-71h] BYREF
  int v36; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v37; // [rsp+68h] [rbp-69h] BYREF
  const struct tagSIZE *v38; // [rsp+70h] [rbp-61h]
  __int64 v39; // [rsp+78h] [rbp-59h]
  __int64 v40; // [rsp+80h] [rbp-51h]
  __int64 v41; // [rsp+88h] [rbp-49h]
  __int64 v42; // [rsp+90h] [rbp-41h]
  const struct tagPOINT *v43; // [rsp+98h] [rbp-39h]
  __int64 v44; // [rsp+A0h] [rbp-31h]
  __int128 v45; // [rsp+A8h] [rbp-29h]
  __int128 v46; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v39 = a5;
  v11 = a4;
  v42 = a6;
  v41 = a8;
  v40 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v38 = a4;
  v43 = a3;
  v44 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v37 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v45 = v15;
  v46 = v16;
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
  v25 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v35, &v36);
    v26 = v35;
    if ( v21 && v35 )
    {
      v34 = RecreateRedirectionBitmap(a1, 0, (__int64)&v37);
      v10 = (HBITMAP)v37;
      updated = v34;
      if ( v34 < 0 )
        goto LABEL_45;
      v11 = v38;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v28 = v36;
    if ( v26 || v36 )
    {
      if ( gcountPWO )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated(1LL);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0LL);
    }
    v29 = v25 | 0x20000000;
    if ( !v39 )
      v29 = v25;
    updated = UpdateSprite(*(_QWORD *)(gpDispInfo + 40LL), a1, v27, v44, v43, v11, v39, v42, a7, v41, v29, v40);
    if ( updated >= 0 && v28 )
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v45,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v45),
        0LL,
        1u);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
      if ( v26 || v28 )
        GenerateMouseMove(0LL);
      if ( (v29 & 0x20) == 0 || v26 || v28 )
      {
        v31 = 3;
        if ( !gdwDeferWinEvent )
          v31 = 1;
        xxxWindowEvent(0x800Bu, v31);
      }
      return (unsigned int)updated;
    }
LABEL_45:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v45;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v46;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, v10) )
      DeleteOrSetRedirectionBitmap(a1, v10, 1LL);
    return (unsigned int)updated;
  }
  if ( !v11 || (v33 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v33[24] - v33[22]) && v11->cy == v33[25] - v33[23] )
  {
    v25 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL, (__int64)v33, v23, v24);
  return 2151546881LL;
}

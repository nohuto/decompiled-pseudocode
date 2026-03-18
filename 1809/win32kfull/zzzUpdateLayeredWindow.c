/*
 * XREFs of zzzUpdateLayeredWindow @ 0x1C0077B50
 * Callers:
 *     NtUserUpdateLayeredWindow @ 0x1C0078020 (NtUserUpdateLayeredWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C013B2B4 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C0152C70 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     zzzMoveShadow @ 0x1C0222CF8 (zzzMoveShadow.c)
 *     zzzUpdateShadowAlpha @ 0x1C0222DBC (zzzUpdateShadowAlpha.c)
 * Callees:
 *     UnsetRedirectedWindow @ 0x1C000DFCC (UnsetRedirectedWindow.c)
 *     DeleteOrSetRedirectionBitmap @ 0x1C000E0AC (DeleteOrSetRedirectionBitmap.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     GreUpdateSpriteVisRgn @ 0x1C003C0E0 (GreUpdateSpriteVisRgn.c)
 *     GreClientRgnUpdated @ 0x1C003DCB4 (GreClientRgnUpdated.c)
 *     OffsetChildren @ 0x1C006F050 (OffsetChildren.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     GetRedirectionFlags @ 0x1C0074038 (GetRedirectionFlags.c)
 *     UpdateSprite @ 0x1C007622C (UpdateSprite.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     ?UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z @ 0x1C0077E2C (-UpdateWindowRects@@YAXPEAUtagWND@@PEBUtagPOINT@@PEBUtagSIZE@@PEAH3@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01D3E7C (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     InvalidateGDIWindows @ 0x1C01D48E4 (InvalidateGDIWindows.c)
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
  HSURF v10; // rdi
  struct tagSIZE *v11; // r15
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int64 v18; // rcx
  BOOL v19; // esi
  char RedirectionFlags; // al
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r12d
  int v24; // r14d
  __int64 v25; // r8
  int v26; // esi
  unsigned int v27; // r13d
  int updated; // r15d
  unsigned int v29; // ecx
  _DWORD *v31; // rdx
  int v32; // eax
  int v33; // [rsp+60h] [rbp-71h] BYREF
  int v34; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v35; // [rsp+68h] [rbp-69h] BYREF
  struct tagSIZE *v36; // [rsp+70h] [rbp-61h]
  HDC v37; // [rsp+78h] [rbp-59h]
  struct tagRECT *v38; // [rsp+80h] [rbp-51h]
  struct _BLENDFUNCTION *v39; // [rsp+88h] [rbp-49h]
  struct tagPOINT *v40; // [rsp+90h] [rbp-41h]
  struct tagPOINT *v41; // [rsp+98h] [rbp-39h]
  HDC v42; // [rsp+A0h] [rbp-31h]
  __int128 v43; // [rsp+A8h] [rbp-29h]
  __int128 v44; // [rsp+B8h] [rbp-19h]

  v10 = 0LL;
  v37 = a5;
  v11 = a4;
  v40 = a6;
  v39 = a8;
  v38 = a10;
  v14 = *((_QWORD *)a1 + 5);
  v36 = a4;
  v41 = (struct tagPOINT *)a3;
  v42 = a2;
  v15 = *(_OWORD *)(v14 + 88);
  v35 = 0LL;
  v16 = *(_OWORD *)(v14 + 104);
  v43 = v15;
  v44 = v16;
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    v17 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v17 + 232) & 0x40) != 0 )
    {
      if ( (*(_BYTE *)(v17 + 27) & 0x20) != 0 )
      {
        UnsetRedirectedWindow(a1, 1);
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
  RedirectionFlags = GetRedirectionFlags((__int64)a1);
  if ( v19 )
  {
    if ( (RedirectionFlags & 8) == 0 )
      return 3221225485LL;
  }
  v23 = a9;
  if ( (a9 & 8) == 0 )
  {
LABEL_7:
    UpdateWindowRects(a1, a3, v11, &v33, &v34);
    v24 = v33;
    if ( v19 && v33 )
    {
      v32 = RecreateRedirectionBitmap(a1, 0, 0, 0, 0, (HSURF *)&v35);
      v10 = (HSURF)v35;
      updated = v32;
      if ( v32 < 0 )
        goto LABEL_45;
      v11 = v36;
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v26 = v34;
    if ( v24 || v34 )
    {
      if ( gcountPWO )
      {
        InvalidateGDIWindows(a1);
        GreClientRgnUpdated(1);
      }
      GreUpdateSpriteVisRgn(*(_QWORD *)(gpDispInfo + 40LL), 0);
    }
    v27 = v23 | 0x20000000;
    if ( !v37 )
      v27 = v23;
    updated = UpdateSprite(*(HDEV *)(gpDispInfo + 40LL), a1, v25, v42, v41, v11, v37, v40, a7, v39, v27, v38);
    if ( updated >= 0 && v26 )
      OffsetChildren(
        a1,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL) - v43,
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL) - DWORD1(v43),
        0LL,
        1u);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( updated >= 0 )
    {
      if ( v10 )
        DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
      if ( v24 || v26 )
        GenerateMouseMove(0LL);
      if ( (v27 & 0x20) == 0 || v24 || v26 )
      {
        v29 = 3;
        if ( !gdwDeferWinEvent )
          v29 = 1;
        xxxWindowEvent(0x800Bu, (__int64)a1, 0, 0, v29);
      }
      return (unsigned int)updated;
    }
LABEL_45:
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL) = v43;
    *(_OWORD *)(*((_QWORD *)a1 + 5) + 104LL) = v44;
    if ( v10 && !(unsigned int)RestoreOldRedirectionBitmap(a1, (HBITMAP)v10) )
      DeleteOrSetRedirectionBitmap((__int64)a1, v10, 1);
    return (unsigned int)updated;
  }
  if ( !v11 || (v31 = (_DWORD *)*((_QWORD *)a1 + 5), v11->cx == v31[24] - v31[22]) && v11->cy == v31[25] - v31[23] )
  {
    v23 = a9 & 0xFFFFFFF7;
    goto LABEL_7;
  }
  UserSetLastError(1462LL, (__int64)v31, v21, v22);
  return 2151546881LL;
}

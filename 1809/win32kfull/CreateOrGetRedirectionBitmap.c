/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0077534
 * Callers:
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C00C8200 (zzzDwmStartRedirection.c)
 * Callees:
 *     GreReferenceObject @ 0x1C000E4C4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     GreSetRedirection @ 0x1C000E7FC (GreSetRedirection.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     IsWindowContentProtected @ 0x1C00722D4 (IsWindowContentProtected.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     GreGetSpriteAttributes @ 0x1C0095A58 (GreGetSpriteAttributes.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     DesktopFromDesktopWindow @ 0x1C00EE500 (DesktopFromDesktopWindow.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C0118D0C (GreSetRedirectionBitmapOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C011A798 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C011A7F8 (GreGetDxSharedSurface.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  __int64 result; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  HSURF CompatibleBitmapInternal; // rbx
  __int64 TopLevelWindow; // r14
  __int64 v19; // rcx
  unsigned int v20; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v21[2]; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h] BYREF
  __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v25; // [rsp+C8h] [rbp+58h]

  v25 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v24) = 0;
  result = 0LL;
  v22 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return result;
  }
  v9 = 0x80000LL;
  v10 = *(_DWORD *)(v4 + 232);
  v11 = 0x4000000;
  if ( (v10 & 0x80000) != 0 )
    goto LABEL_42;
  if ( a3 )
  {
    *(_DWORD *)(v4 + 232) = v10 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
LABEL_42:
    v11 = 201326592;
  }
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (unsigned int)IsDesktopWindow(a1) )
  {
    v11 |= 0x1000000u;
  }
  else if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, &v21[1], &v20, 1)
         && (v20 & 1) != 0 )
  {
    v11 |= 0x1000000u;
  }
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
  }
  else
  {
    LOWORD(v24) = 96;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 456)
                                      + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(a1 + 40);
          v15 = *(_DWORD *)(v14 + 288);
          if ( (v15 & 0xF) == 0 && (v15 & 0x40000000) != 0 )
          {
            v19 = *(unsigned __int16 *)(v14 + 284);
            if ( (_WORD)v19 != 96 )
              LOWORD(v24) = GreGetScaledLogPixels(v19);
          }
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 40);
      v21[0] = 0;
      if ( (*(_DWORD *)(v16 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)v21, (__int64)&v23) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v22);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v22,
                                        (__int64)&v24);
    LODWORD(v24) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v5 = -2143354872;
    goto LABEL_35;
  }
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1)
    || !TopLevelWindow
    || a1 == TopLevelWindow
    || !(unsigned int)IsWindowContentProtected(TopLevelWindow)
    || *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 424LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) )
  {
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) == 0x29D )
      DesktopFromDesktopWindow(a1);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v24 )
    {
      v5 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v5 < 0 )
        goto LABEL_33;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( (unsigned int)GreSetRedirection(CompatibleBitmapInternal, 1)
        && (unsigned int)GreSetRedirectionBitmapOwner(CompatibleBitmapInternal) )
      {
LABEL_31:
        if ( v5 < 0 )
          GreDereferenceObject(CompatibleBitmapInternal, 0);
LABEL_33:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        if ( v5 < 0 )
        {
          GreDeleteObject(CompatibleBitmapInternal);
          CompatibleBitmapInternal = 0LL;
        }
        goto LABEL_35;
      }
      GreMarkDeletableBitmap(CompatibleBitmapInternal);
    }
    v5 = -2143354871;
    goto LABEL_31;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_35:
  *v25 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}

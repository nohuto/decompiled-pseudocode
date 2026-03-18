/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0032864
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0010444 (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     DesktopFromDesktopWindow @ 0x1C007CB88 (DesktopFromDesktopWindow.c)
 *     GreGetSpriteAttributes @ 0x1C0081D44 (GreGetSpriteAttributes.c)
 *     GreSetRedirection @ 0x1C0089018 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 *     IsWindowContentProtected @ 0x1C008DB28 (IsWindowContentProtected.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C00FBF00 (GreSetRedirectionBitmapOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00FD52C (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C00FD58C (GreGetDxSharedSurface.c)
 */

__int64 __fastcall CreateOrGetRedirectionBitmap(__int64 a1, int a2, int a3, HSURF *a4)
{
  __int64 v4; // r10
  int v5; // esi
  int v9; // eax
  int v10; // ebx
  int v11; // eax
  HWND v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  HSURF CompatibleBitmapInternal; // rbx
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned int v20; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  struct _BLENDFUNCTION v24; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v30; // [rsp+C8h] [rbp+58h]

  v30 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v29) = 0;
  v27 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(v4 + 232);
  v10 = 0x4000000;
  if ( (v9 & 0x80000) == 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    *(_DWORD *)(v4 + 232) = v9 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
  }
  v10 = 201326592;
LABEL_5:
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (LOBYTE(v11) = IsDesktopWindow(a1), v11) )
  {
    v10 |= 0x1000000u;
  }
  else
  {
    v12 = *(HWND *)a1;
    v24 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v12, &v24, &v25, 1) && (v25 & 1) != 0 )
      v10 |= 0x1000000u;
  }
  if ( !a2 && (LOBYTE(v13) = IsDesktopWindow(a1), v13) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
  }
  else
  {
    LOWORD(v29) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(a1 + 40);
          v15 = *(_DWORD *)(v14 + 288);
          if ( (v15 & 0xF) == 0 && (v15 & 0x40000000) != 0 )
          {
            v23 = *(unsigned __int16 *)(v14 + 284);
            if ( (_WORD)v23 != 96 )
              LOWORD(v29) = GreGetScaledLogPixels(v23);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 40);
      LODWORD(v26) = 0;
      if ( (*(_DWORD *)(v16 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)&v26, (__int64)&v28) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v27);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v27,
                                        (__int64)&v29);
    LODWORD(v29) = 1;
  }
  if ( !CompatibleBitmapInternal )
  {
    v5 = -2143354872;
    goto LABEL_35;
  }
  v18 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v20 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_50;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_24:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x29D )
    {
      v22 = DesktopFromDesktopWindow(a1);
      if ( v22 )
        v19 = ***(_QWORD ***)(v22 + 8);
    }
    else
    {
      v19 = ***(_QWORD ***)(*(_QWORD *)(v18 + 448) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    if ( (_DWORD)v29 )
    {
      v5 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v5 < 0 )
        goto LABEL_33;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( (unsigned int)GreSetRedirection(CompatibleBitmapInternal, 1LL)
        && (unsigned int)GreSetRedirectionBitmapOwner(CompatibleBitmapInternal, v19, v20) )
      {
LABEL_31:
        if ( v5 < 0 )
          GreDereferenceObject(CompatibleBitmapInternal);
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
  if ( *(_QWORD *)(*(_QWORD *)(TopLevelWindow + 16) + 416LL) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
LABEL_50:
    v20 = *(_DWORD *)(*(_QWORD *)(v18 + 416) + 56LL);
    goto LABEL_24;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_35:
  *v30 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}

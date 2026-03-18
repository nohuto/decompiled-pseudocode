/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C0074C84
 * Callers:
 *     zzzDwmStartRedirection @ 0x1C0008494 (zzzDwmStartRedirection.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     DesktopFromDesktopWindow @ 0x1C00B7A98 (DesktopFromDesktopWindow.c)
 *     IsWindowContentProtected @ 0x1C00C4740 (IsWindowContentProtected.c)
 *     GreSetRedirection @ 0x1C00C4E48 (GreSetRedirection.c)
 *     GreReferenceObject @ 0x1C00C5604 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C00E8908 (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C00E895C (GreGetDxSharedSurface.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C00FCA7C (GreSetRedirectionBitmapOwner.c)
 *     GreGetSpriteAttributes @ 0x1C00FD218 (GreGetSpriteAttributes.c)
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
  __int64 v18; // r15
  __int64 v19; // r13
  unsigned int v20; // r12d
  __int64 TopLevelWindow; // r14
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // [rsp+40h] [rbp-30h] BYREF
  struct _BLENDFUNCTION v25[2]; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+60h] [rbp-10h] BYREF
  __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v29; // [rsp+C8h] [rbp+58h]

  v29 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v28) = 0;
  result = 0LL;
  v26 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return result;
  }
  v9 = 0x80000LL;
  v10 = *(_DWORD *)(v4 + 232);
  v11 = 0x4000000;
  if ( (v10 & 0x80000) == 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    *(_DWORD *)(v4 + 232) = v10 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
  }
  v11 = 201326592;
LABEL_5:
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (unsigned int)IsDesktopWindow(a1) )
  {
    v11 |= 0x1000000u;
  }
  else if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, &v25[1], &v24, 1)
         && (v24 & 1) != 0 )
  {
    v11 |= 0x1000000u;
  }
  if ( !a2 && (unsigned int)IsDesktopWindow(a1) )
  {
    CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
  }
  else
  {
    LOWORD(v28) = 96;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 448)
                                      + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(a1 + 40);
          v15 = *(_DWORD *)(v14 + 288);
          if ( (v15 & 0xF) == 0 && (v15 & 0x40000000) != 0 )
          {
            v23 = *(unsigned __int16 *)(v14 + 284);
            if ( (_WORD)v23 != 96 )
              LOWORD(v28) = GreGetScaledLogPixels(v23);
          }
        }
      }
    }
    if ( (v11 & 0x1000000) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 40);
      v25[0] = 0;
      if ( (*(_DWORD *)(v16 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)v25, (__int64)&v27) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v26);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v26,
                                        (__int64)&v28);
    LODWORD(v28) = 1;
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
    goto LABEL_51;
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
    if ( (_DWORD)v28 )
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
LABEL_51:
    v20 = *(_DWORD *)(*(_QWORD *)(v18 + 416) + 56LL);
    goto LABEL_24;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_35:
  *v29 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}

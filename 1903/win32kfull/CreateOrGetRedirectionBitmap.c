/*
 * XREFs of CreateOrGetRedirectionBitmap @ 0x1C002C3F4
 * Callers:
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     zzzDwmStartRedirection @ 0x1C00D92C4 (zzzDwmStartRedirection.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     GreGetSpriteAttributes @ 0x1C003DB44 (GreGetSpriteAttributes.c)
 *     GreSetRedirection @ 0x1C0044648 (GreSetRedirection.c)
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 *     IsWindowContentProtected @ 0x1C0049068 (IsWindowContentProtected.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     DesktopFromDesktopWindow @ 0x1C00DCE98 (DesktopFromDesktopWindow.c)
 *     GreSetRedirectionBitmapOwner @ 0x1C01210A0 (GreSetRedirectionBitmapOwner.c)
 *     GetWindowMonitorAdapterLuid @ 0x1C012252C (GetWindowMonitorAdapterLuid.c)
 *     GreGetDxSharedSurface @ 0x1C012258C (GreGetDxSharedSurface.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v15; // r10
  HSURF CompatibleBitmapInternal; // rbx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r15
  __int64 v22; // r12
  unsigned int v23; // r13d
  __int64 TopLevelWindow; // r14
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  struct _BLENDFUNCTION v29; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-2Ch] BYREF
  __int64 v31; // [rsp+48h] [rbp-28h] BYREF
  __int64 v32; // [rsp+58h] [rbp-18h] BYREF
  __int64 v33; // [rsp+60h] [rbp-10h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+40h] BYREF
  HSURF *v35; // [rsp+C8h] [rbp+58h]

  v35 = a4;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = 0;
  LODWORD(v34) = 0;
  v32 = 0LL;
  if ( (*(_BYTE *)(v4 + 26) & 0x20) != 0 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v9 = *(_DWORD *)(v4 + 232);
  v10 = 0x4000000;
  if ( (v9 & 0x80000) != 0 )
    goto LABEL_6;
  if ( a3 )
  {
    *(_DWORD *)(v4 + 232) = v9 | 0x80000;
    v4 = *(_QWORD *)(a1 + 40);
LABEL_6:
    v10 = 201326592;
  }
  if ( (*(_BYTE *)(v4 + 26) & 8) == 0 || (LOBYTE(v11) = IsDesktopWindow(a1), v11) )
  {
    v10 |= 0x1000000u;
  }
  else
  {
    v12 = *(HWND *)a1;
    v29 = 0;
    if ( (unsigned int)GreGetSpriteAttributes(*(HDEV *)(gpDispInfo + 40LL), v12, &v29, &v30, 1) && (v30 & 1) != 0 )
      v10 |= 0x1000000u;
  }
  if ( a2 )
    goto LABEL_19;
  LOBYTE(v13) = IsDesktopWindow(a1);
  if ( !v13 )
  {
    if ( (*(_WORD *)(v15 + 42) & 0x3FFF) == 0x29D )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
LABEL_19:
    LOWORD(v34) = 96;
    if ( W32GetThreadWin32Thread(KeGetCurrentThread()) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
        {
          v17 = *(_QWORD *)(a1 + 40);
          v18 = *(_DWORD *)(v17 + 288);
          if ( (v18 & 0xF) == 0 && (v18 & 0x40000000) != 0 )
          {
            v19 = *(unsigned __int16 *)(v17 + 284);
            if ( (_WORD)v19 != 96 )
              LOWORD(v34) = GreGetScaledLogPixels(v19);
          }
        }
      }
    }
    if ( (v10 & 0x1000000) == 0 )
    {
      v20 = *(_QWORD *)(a1 + 40);
      LODWORD(v31) = 0;
      if ( (*(_DWORD *)(v20 + 232) & 0x80000) == 0
        || (int)GreGetDxSharedSurface(*(HWND *)a1, (__int64)&v31, (__int64)&v33) < 0 )
      {
        GetWindowMonitorAdapterLuid(a1, &v32);
      }
    }
    CompatibleBitmapInternal = (HSURF)GreCreateCompatibleBitmapInternal(
                                        *(HDC *)(gpDispInfo + 56LL),
                                        (__int64)&v32,
                                        (__int64)&v34);
    LODWORD(v34) = 1;
    goto LABEL_31;
  }
  CompatibleBitmapInternal = *(HSURF *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL) + 88LL);
LABEL_31:
  if ( !CompatibleBitmapInternal )
  {
    v5 = -2143354872;
    goto LABEL_55;
  }
  v21 = *(_QWORD *)(a1 + 16);
  v22 = 0LL;
  v23 = 0;
  TopLevelWindow = GetTopLevelWindow(a1);
  if ( (unsigned int)IsWindowContentProtected(a1) )
    goto LABEL_38;
  if ( !TopLevelWindow || a1 == TopLevelWindow || !(unsigned int)IsWindowContentProtected(TopLevelWindow) )
  {
LABEL_39:
    if ( (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF) == 0x29D )
    {
      v28 = DesktopFromDesktopWindow(a1);
      if ( v28 )
        v22 = ***(_QWORD ***)(v28 + 8);
    }
    else
    {
      v22 = ***(_QWORD ***)(*(_QWORD *)(v21 + 448) + 8LL);
    }
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v25, v26, v27);
    if ( (_DWORD)v34 )
    {
      v5 = GreReferenceObject(CompatibleBitmapInternal);
      if ( v5 < 0 )
        goto LABEL_52;
    }
    if ( (unsigned int)GreMarkUndeletableBitmap(CompatibleBitmapInternal) )
    {
      if ( (unsigned int)GreSetRedirection(CompatibleBitmapInternal, 1LL)
        && (unsigned int)GreSetRedirectionBitmapOwner(CompatibleBitmapInternal, v22, v23) )
      {
LABEL_50:
        if ( v5 < 0 )
          GreDereferenceObject(CompatibleBitmapInternal);
LABEL_52:
        GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
        if ( v5 < 0 )
        {
          GreDeleteObject(CompatibleBitmapInternal);
          CompatibleBitmapInternal = 0LL;
        }
        goto LABEL_55;
      }
      GreMarkDeletableBitmap(CompatibleBitmapInternal);
    }
    v5 = -2143354871;
    goto LABEL_50;
  }
  v25 = *(_QWORD *)(TopLevelWindow + 16);
  if ( *(_QWORD *)(v25 + 416) == *(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) )
  {
LABEL_38:
    v23 = *(_DWORD *)(*(_QWORD *)(v21 + 416) + 56LL);
    goto LABEL_39;
  }
  GreDeleteObject(CompatibleBitmapInternal);
  CompatibleBitmapInternal = 0LL;
  v5 = -1073741790;
LABEL_55:
  *v35 = CompatibleBitmapInternal;
  return (unsigned int)v5;
}

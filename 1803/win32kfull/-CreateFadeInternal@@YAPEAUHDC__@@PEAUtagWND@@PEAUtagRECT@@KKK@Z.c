/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28
 * Callers:
 *     xxxTooltipWndProc @ 0x1C01044C0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01B21B8 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C01E4EFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     ScaleDPIRect @ 0x1C0073820 (ScaleDPIRect.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00781A4 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0079F6C (InitializeDPIINFO.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C00C4680 (GreCreateSprite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     DeleteFadeSprite @ 0x1C01B15F0 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  struct tagRECT v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int32 v17; // r10d
  __int32 v18; // r8d
  LONG top; // r9d
  __int32 v20; // edx
  LONG left; // eax
  __int32 v22; // ecx
  unsigned __int16 *Sprite; // rax
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  unsigned int v29; // esi
  unsigned int v30; // r14d
  __int64 v31; // rdx
  unsigned __int16 v32[4]; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v37[32]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v38[9]; // [rsp+B0h] [rbp-50h] BYREF

  if ( gfade[2] )
    return 0LL;
  if ( gfade[1] )
  {
    GreCleanDC();
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL));
    v10 = gfade[1];
    if ( !v10 )
      return 0LL;
    GreSetDCOwnerEx(v10, 0LL, 0LL, 1LL);
  }
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  v32[0] = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 448)
                                      + 8LL)
                        + 52LL) & 1) != 0 )
        {
          v26 = *((_QWORD *)a1 + 5);
          v27 = *(_DWORD *)(v26 + 288);
          if ( (v27 & 0xF) == 0 && (v27 & 0x40000000) != 0 )
          {
            v28 = *(unsigned __int16 *)(v26 + 284);
            if ( (_WORD)v28 != 96 )
              v32[0] = GreGetScaledLogPixels(v28);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v35);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v35);
  }
  else
  {
    v13 = *a2;
    v34 = 0LL;
    v33 = (__m128i)v13;
    if ( (a5 & 0xF) == 2 )
    {
      v34 = MonitorFromRect(a2, 2LL, a5, v12);
    }
    else
    {
      v36 = 0LL;
      LogicalToPhysicalDPIPoint(&v36, a2, a5, &v34);
      if ( *(_WORD *)(*(_QWORD *)(v34 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15) + 448)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16) + 448)
                                      + 8LL)
                        + 52LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v35 = 0LL;
          v32[0] = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 64LL));
          ScaleDPIRect(&v33, &v33, v32[0], 0x60u, 0LL, 0LL);
          v17 = v33.m128i_i32[1];
          v18 = v33.m128i_i32[0];
          top = a2->top;
          v20 = v33.m128i_i32[1] - top;
          left = a2->left;
          v22 = v33.m128i_i32[0] - a2->left;
          a2->right += v22;
          a2->bottom += v20;
          v33.m128i_i32[2] += v18;
          v33.m128i_i32[3] += v17;
          a2->left = v22 + left;
          a2->top = top + v20;
          v33.m128i_i32[0] = 2 * v18;
          v33.m128i_i32[1] = 2 * v17;
        }
        v13 = (struct tagRECT)v33;
      }
    }
    InitializeDPIINFO((__int64)v37, a5, v34, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v38, 0, 0x88uLL);
      a4 &= ~0x100u;
      v38[0] = v13;
      v38[1] = v13;
      *(_QWORD *)&v38[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 a2,
                 (struct tagMINIWINDOWINFO *)v38,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 v32);
    }
    else
    {
      Sprite = GreCreateSprite(*(HDEV *)(gpDispInfo + 40LL), 0LL, a2, 0LL, 0x9900u, 1, 1, 0, 0, 0, v32);
    }
    gfade[0] = Sprite;
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v29 = a2->right - a2->left;
  v30 = a2->bottom - a2->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v29, v30, 0, 0LL, v32);
  v31 = gfade[2];
  if ( !v31 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v31);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 0LL);
  LODWORD(gfade[3]) = a2->left;
  HIDWORD(gfade[3]) = a2->top;
  LODWORD(gfade[4]) = v29;
  HIDWORD(gfade[4]) = v30;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}

/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00B84F0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01D479C (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C020ADFC (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     ScaleDPIRect @ 0x1C001CA24 (ScaleDPIRect.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C0074AB4 (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0075F94 (InitializeDPIINFO.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C007C238 (GreCreateSprite.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     DeleteFadeSprite @ 0x1C0152EF0 (DeleteFadeSprite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, __int64 a3, int a4, unsigned int a5)
{
  int v7; // r12d
  struct tagRECT *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  __int64 v17; // rdx
  __int64 v19; // rcx
  struct tagRECT v20; // xmm6
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int32 v24; // r10d
  __int32 v25; // r8d
  LONG top; // r9d
  __int32 v27; // edx
  LONG left; // eax
  __int32 v29; // ecx
  void *Sprite; // rax
  __int64 v31; // rcx
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h] BYREF
  __int64 v35; // [rsp+80h] [rbp-80h] BYREF
  __int64 v36; // [rsp+88h] [rbp-78h] BYREF
  char v37[32]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v38[9]; // [rsp+B0h] [rbp-50h] BYREF

  v7 = a3;
  v8 = a2;
  if ( gfade[2] )
    return 0LL;
  v9 = gfade[1];
  if ( v9 )
  {
    GreCleanDC(v9);
    GreSetLayout(gfade[1], 0xFFFFFFFFLL, 0LL);
  }
  else
  {
    gfade[1] = GreCreateCompatibleDC(*(_QWORD *)(gpDispInfo + 56LL), a2, a3);
    v19 = gfade[1];
    if ( !v19 )
      return 0LL;
    GreSetDCOwnerEx(v19, 0LL, 0LL, 1LL);
  }
  if ( a1 )
    v8 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  LOWORD(v32) = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 456) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 456)
                                      + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v13 = *((_QWORD *)a1 + 5);
          v14 = *(_DWORD *)(v13 + 288);
          if ( (v14 & 0xF) == 0 && (v14 & 0x40000000) != 0 )
          {
            v31 = *(unsigned __int16 *)(v13 + 284);
            if ( (_WORD)v31 != 96 )
              LOWORD(v32) = GreGetScaledLogPixels(v31);
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
    v20 = *v8;
    v34 = 0LL;
    v33 = (__m128i)v20;
    if ( (a5 & 0xF) == 2 )
    {
      v34 = MonitorFromRect(v8, 2u, a5);
    }
    else
    {
      v36 = 0LL;
      LogicalToPhysicalDPIPoint(&v36, v8, a5, &v34);
      if ( *(_WORD *)(*(_QWORD *)(v34 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 456)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 456)
                                      + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v35 = 0LL;
          LOWORD(v32) = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v34 + 40) + 64LL));
          ScaleDPIRect(&v33, &v33, v32, 0x60u, 0LL, 0LL);
          v24 = v33.m128i_i32[1];
          v25 = v33.m128i_i32[0];
          top = v8->top;
          v27 = v33.m128i_i32[1] - top;
          left = v8->left;
          v29 = v33.m128i_i32[0] - v8->left;
          v8->right += v29;
          v8->bottom += v27;
          v33.m128i_i32[2] += v25;
          v33.m128i_i32[3] += v24;
          v8->left = v29 + left;
          v8->top = top + v27;
          v33.m128i_i32[0] = 2 * v25;
          v33.m128i_i32[1] = 2 * v24;
        }
        v20 = (struct tagRECT)v33;
      }
    }
    InitializeDPIINFO((__int64)v37, a5, v34, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v38, 0, 0x88uLL);
      a4 &= ~0x100u;
      v38[0] = v20;
      v38[1] = v20;
      *(_QWORD *)&v38[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 v8,
                 (struct tagMINIWINDOWINFO *)v38,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v32);
    }
    else
    {
      Sprite = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 v8,
                 0LL,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v32);
    }
    gfade[0] = Sprite;
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v15 = v8->right - v8->left;
  v16 = v8->bottom - v8->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v15, v16, 0, 0LL, (unsigned __int16 *)&v32);
  v17 = gfade[2];
  if ( !v17 )
  {
    DeleteFadeSprite(gfade[0], 0LL);
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v17);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 0LL);
  LODWORD(gfade[3]) = v8->left;
  HIDWORD(gfade[3]) = v8->top;
  LODWORD(gfade[4]) = v15;
  HIDWORD(gfade[4]) = v16;
  LODWORD(gfade[5]) = v7;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}

/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00E96D0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E9E28 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C02223D8 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     GreDwmNotifySpriteDPIChange @ 0x1C00303CC (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C0030B74 (InitializeDPIINFO.c)
 *     ScaleDPIRect @ 0x1C0035AD0 (ScaleDPIRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C008D6E8 (GreCreateSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00BDE20 (GreCreateCompatibleBitmapInternal.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     DeleteFadeSprite @ 0x1C01E9220 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(_QWORD *BugCheckParameter2, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  struct tagRECT v12; // xmm6
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int32 v19; // r10d
  __int32 v20; // r8d
  LONG top; // r9d
  __int32 v22; // edx
  LONG left; // eax
  __int32 v24; // ecx
  struct tagMINIWINDOWINFO *v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // rcx
  unsigned int v33; // r14d
  unsigned int v34; // r15d
  __int64 v35; // rdx
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v41[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v42[48]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v43[9]; // [rsp+C0h] [rbp-40h] BYREF

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
    v9 = gfade[1];
    if ( !v9 )
      return 0LL;
    GreSetDCOwnerEx(v9, 0LL, 0LL, 0LL);
  }
  if ( BugCheckParameter2 )
    a2 = (struct tagRECT *)(BugCheckParameter2[5] + 88LL);
  LOWORD(v37) = 96;
  if ( BugCheckParameter2 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *BugCheckParameter2;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v30 = BugCheckParameter2[5];
          v31 = *(_DWORD *)(v30 + 288);
          if ( (v31 & 0xF) == 0 && (v31 & 0x40000000) != 0 )
          {
            v32 = *(unsigned __int16 *)(v30 + 284);
            if ( (_WORD)v32 != 96 )
              LOWORD(v37) = GreGetScaledLogPixels(v32);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v40);
    xxxSetLayeredWindow((__int64)BugCheckParameter2, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v40);
  }
  else
  {
    v12 = *a2;
    v39 = 0LL;
    v38 = (__m128i)v12;
    if ( (a5 & 0xF) == 2 )
    {
      v39 = MonitorFromRect(a2, 2u, a5);
    }
    else
    {
      v41[0] = 0;
      v41[1] = 0;
      LogicalToPhysicalDPIPoint(v41, a2, a5, &v39);
      if ( *(_WORD *)(*(_QWORD *)(v39 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16) + 448)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v40 = 0LL;
          LOWORD(v37) = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v39 + 40) + 64LL));
          ScaleDPIRect(&v38, &v38, v37, 0x60u, 0LL, 0LL);
          v19 = v38.m128i_i32[1];
          v20 = v38.m128i_i32[0];
          top = a2->top;
          v22 = v38.m128i_i32[1] - top;
          left = a2->left;
          v24 = v38.m128i_i32[0] - a2->left;
          v38.m128i_i32[2] += v38.m128i_i32[0];
          a2->right += v24;
          a2->bottom += v22;
          v38.m128i_i32[3] += v19;
          a2->left = v24 + left;
          a2->top = top + v22;
          v38.m128i_i32[0] = 2 * v20;
          v38.m128i_i32[1] = 2 * v19;
          v12 = (struct tagRECT)v38;
        }
        else
        {
          v12 = (struct tagRECT)v38;
        }
      }
    }
    memset(v42, 0, 0x28uLL);
    InitializeDPIINFO((__int64)v42, a5, v39, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v43, 0, 0x88uLL);
      v25 = (struct tagMINIWINDOWINFO *)v43;
      a4 &= ~0x100u;
      v43[0] = v12;
      v43[1] = v12;
      *(_QWORD *)&v43[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v25 = 0LL;
    }
    gfade[0] = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 a2,
                 v25,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v37);
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v33 = a2->right - a2->left;
  v34 = a2->bottom - a2->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v33, v34, 0, 0LL, (unsigned __int16 *)&v37);
  v35 = gfade[2];
  if ( !v35 )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1], v35);
  if ( BugCheckParameter2 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2[5] + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 1LL);
  LODWORD(gfade[3]) = a2->left;
  HIDWORD(gfade[3]) = a2->top;
  LODWORD(gfade[4]) = v33;
  HIDWORD(gfade[4]) = v34;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}

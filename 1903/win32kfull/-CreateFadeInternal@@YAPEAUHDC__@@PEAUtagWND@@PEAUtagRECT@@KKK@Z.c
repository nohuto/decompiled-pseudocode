/*
 * XREFs of ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748
 * Callers:
 *     xxxTooltipWndProc @ 0x1C012F5F0 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E9FA8 (zzzStartSonar.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0222918 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0227440 (xxxMenuWindowProc.c)
 * Callees:
 *     GreDwmNotifySpriteDPIChange @ 0x1C0029F5C (GreDwmNotifySpriteDPIChange.c)
 *     InitializeDPIINFO @ 0x1C002A704 (InitializeDPIINFO.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     GreCreateSprite @ 0x1C0048C28 (GreCreateSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     ScaleDPIRect @ 0x1C0094DA0 (ScaleDPIRect.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     DeleteFadeSprite @ 0x1C01E93A0 (DeleteFadeSprite.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall CreateFadeInternal(struct tagWND *a1, struct tagRECT *a2, int a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct tagRECT v13; // xmm6
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int32 v23; // r10d
  __int32 v24; // r8d
  LONG top; // r9d
  __int32 v26; // edx
  LONG left; // eax
  __int32 v28; // ecx
  struct tagMINIWINDOWINFO *v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  int v37; // ecx
  __int64 v38; // rcx
  unsigned int v39; // r14d
  unsigned int v40; // r15d
  __int64 v42; // [rsp+60h] [rbp-A0h] BYREF
  __m128i v43; // [rsp+68h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v46[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v47[48]; // [rsp+90h] [rbp-70h] BYREF
  _OWORD v48[9]; // [rsp+C0h] [rbp-40h] BYREF

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
  if ( a1 )
    a2 = (struct tagRECT *)(*((_QWORD *)a1 + 5) + 88LL);
  LOWORD(v42) = 96;
  if ( a1 )
  {
    LODWORD(gfade[6]) |= 8u;
    gfade[0] = *(_QWORD *)a1;
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 448) )
      {
        if ( (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v33,
                                                      v34,
                                                      v35)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) != 0 )
        {
          v36 = *((_QWORD *)a1 + 5);
          v37 = *(_DWORD *)(v36 + 288);
          if ( (v37 & 0xF) == 0 && (v37 & 0x40000000) != 0 )
          {
            v38 = *(unsigned __int16 *)(v36 + 284);
            if ( (_WORD)v38 != 96 )
              LOWORD(v42) = GreGetScaledLogPixels(v38);
          }
        }
      }
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v45);
    xxxSetLayeredWindow(a1, 0, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v45);
  }
  else
  {
    v13 = *a2;
    v44 = 0LL;
    v43 = (__m128i)v13;
    if ( (a5 & 0xF) == 2 )
    {
      v44 = MonitorFromRect(a2, 2u, a5);
    }
    else
    {
      v46[0] = 0;
      v46[1] = 0;
      LogicalToPhysicalDPIPoint(v46, a2, a5, &v44);
      if ( *(_WORD *)(*(_QWORD *)(v44 + 40) + 64LL) != 96 )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v15, v16)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) + 448)
          && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                      (__int64)KeGetCurrentThread(),
                                                      v20,
                                                      v21,
                                                      v22)
                                                  + 448)
                                      + 8LL)
                        + 64LL) & 1) != 0
          && (a5 & 0xF) == 0
          && (a5 & 0x40000000) != 0 )
        {
          v45 = 0LL;
          LOWORD(v42) = GreGetScaledLogPixels(*(unsigned __int16 *)(*(_QWORD *)(v44 + 40) + 64LL));
          ScaleDPIRect(&v43, &v43, v42, 0x60u, 0LL, 0LL);
          v23 = v43.m128i_i32[1];
          v24 = v43.m128i_i32[0];
          top = a2->top;
          v26 = v43.m128i_i32[1] - top;
          left = a2->left;
          v28 = v43.m128i_i32[0] - a2->left;
          v43.m128i_i32[2] += v43.m128i_i32[0];
          a2->right += v28;
          a2->bottom += v26;
          v43.m128i_i32[3] += v23;
          a2->left = v28 + left;
          a2->top = top + v26;
          v43.m128i_i32[0] = 2 * v24;
          v43.m128i_i32[1] = 2 * v23;
          v13 = (struct tagRECT)v43;
        }
        else
        {
          v13 = (struct tagRECT)v43;
        }
      }
    }
    memset(v47, 0, 0x28uLL);
    InitializeDPIINFO((__int64)v47, a5, v44, 0LL);
    LODWORD(gfade[6]) &= ~8u;
    if ( (a4 & 0x100) != 0 )
    {
      memset(v48, 0, 0x88uLL);
      v29 = (struct tagMINIWINDOWINFO *)v48;
      a4 &= ~0x100u;
      v48[0] = v13;
      v48[1] = v13;
      *(_QWORD *)&v48[3] = ***(_QWORD ***)(grpdeskRitInput + 8LL);
    }
    else
    {
      v29 = 0LL;
    }
    gfade[0] = GreCreateSprite(
                 *(HDEV *)(gpDispInfo + 40LL),
                 0LL,
                 a2,
                 v29,
                 0x9900u,
                 1,
                 1,
                 0,
                 0,
                 0,
                 (unsigned __int16 *)&v42);
    if ( gfade[0] )
      GreDwmNotifySpriteDPIChange(gfade[0], 0LL, (HSPRITE)gfade[0]);
  }
  if ( !gfade[0] )
    return 0LL;
  v39 = a2->right - a2->left;
  v40 = a2->bottom - a2->top;
  gfade[2] = GreCreateCompatibleBitmapInternal(*(HDC *)(gpDispInfo + 56LL), v39, v40, 0, 0LL, (unsigned __int16 *)&v42);
  if ( !gfade[2] )
  {
    DeleteFadeSprite();
    return 0LL;
  }
  GreSelectBitmap(gfade[1]);
  if ( a1 )
  {
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
      GreSetLayout(gfade[1], 0xFFFFFFFFLL, 1LL);
  }
  GreSetDCOwnerEx(gfade[1], 2147483650LL, 0LL, 1LL);
  LODWORD(gfade[3]) = a2->left;
  HIDWORD(gfade[3]) = a2->top;
  LODWORD(gfade[4]) = v39;
  HIDWORD(gfade[4]) = v40;
  LODWORD(gfade[5]) = a3;
  LODWORD(gfade[6]) |= a4;
  HIDWORD(gfade[6]) = (gfade[6] & 0x40) != 0 ? 0xFF00FF : 0;
  return (HDC)gfade[1];
}

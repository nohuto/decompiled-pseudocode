/*
 * XREFs of ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x18009A6A0
 * Callers:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x180099CFC (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18000C9F4 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18000E9B8 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x18000EB84 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180019F10 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036950 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180039334 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x18003A444 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180040DCC (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z @ 0x180044BD0 (-GetBoundedContactWidth@CContactManager@@QEAAHHUtagPOINT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x18007E318 (McTemplateU0d.c)
 *     ?StopTimer@CContactStationaryVisual@@MEAAJXZ @ 0x18009AB70 (-StopTimer@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009FF8C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CContactStationaryVisual::Start(__int64 a1, int a2, struct tagPOINT *a3, _DWORD *a4, char a5)
{
  __int64 v6; // r10
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // eax
  int v12; // ecx
  struct CBitmapSource ***v13; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  int v16; // esi
  float v17; // xmm0_4
  __int64 v18; // rax
  bool v19; // zf
  bool v20; // al
  __int64 v21; // rcx
  __int64 v22; // rax
  double v23; // xmm6_8
  _QWORD *v24; // r8
  __int64 v25; // rax
  _QWORD *v26; // r8
  int v27; // eax
  int v28; // ecx
  struct tagPOINT v29; // r8
  struct tagSIZE *v30; // rbx
  float v31; // xmm1_4
  int v32; // ecx
  float v33; // xmm0_4
  float v34; // xmm0_4
  CContactManager *v35; // rcx
  int v36; // edx
  int BoundedContactWidth; // eax
  int v38; // eax
  __int64 cx; // kr00_8
  int v40; // ebx
  struct CBitmapSource **v41; // rdx
  struct CBitmapSource *v42; // rdx
  double v43; // xmm1_8
  unsigned int v45; // [rsp+20h] [rbp-38h]

  v6 = 44LL * a2;
  *(_DWORD *)(a1 + 416) = a2;
  v9 = *(_OWORD *)((char *)&csadAnimData + v6 + 16);
  *(_OWORD *)(a1 + 308) = *(_OWORD *)((char *)&csadAnimData + v6);
  v10 = *(_QWORD *)((char *)&csadAnimData + v6 + 32);
  v11 = *(_DWORD *)((char *)&csadAnimData + v6 + 40);
  *(_OWORD *)(a1 + 324) = v9;
  *(_QWORD *)(a1 + 340) = v10;
  *(_DWORD *)(a1 + 348) = v11;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d(a1, (int)&UdwmContactStationaryVisual_Start, a2);
  v12 = *(_DWORD *)(a1 + 308);
  if ( v12 == 1
    && *(_DWORD *)(a1 + 312) == 2
    && *(_BYTE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 324LL) )
  {
    *(_DWORD *)(a1 + 312) = 7;
    *(_DWORD *)(a1 + 320) = 1;
  }
  v13 = (struct CBitmapSource ***)(a1 + 384);
  Theme = (void *)CDesktopManager::GetTheme(v12);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 *(_DWORD *)(a1 + 312),
                                 *(_DWORD *)(a1 + 320),
                                 0LL,
                                 (struct CBitmapSource ***)(a1 + 384));
  v16 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x63u);
    goto LABEL_60;
  }
  if ( a5 )
    v17 = FLOAT_0_050000001;
  else
    v17 = 0.0;
  v18 = *(_QWORD *)(a1 + 352);
  *(float *)(a1 + 420) = v17;
  if ( v18 )
  {
    v19 = (*(_DWORD *)(v18 + 8))-- == 1;
    v20 = CDesktopManager::s_fTimelineDirty;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 352) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  else
  {
    v20 = CDesktopManager::s_fTimelineDirty;
  }
  v21 = *(_QWORD *)(a1 + 360);
  if ( v21 )
  {
    v19 = (*(_DWORD *)(v21 + 8))-- == 1;
    if ( v19 )
      v20 = 1;
    *(_QWORD *)(a1 + 360) = 0LL;
    CDesktopManager::s_fTimelineDirty = v20;
  }
  if ( a5 )
  {
    v22 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    v23 = DOUBLE_1_0;
    if ( v22 )
    {
      CTimelineBase::CTimelineBase(v22, *(float *)(a1 + 420), 0.0, 1.0, 0);
      *v24 = &CTimeline<float>::`vftable';
    }
    else
    {
      v24 = 0LL;
    }
    *(_QWORD *)(a1 + 360) = v24;
    if ( !v24 )
    {
      v45 = 117;
LABEL_28:
      v16 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v45);
      goto LABEL_61;
    }
  }
  else
  {
    v25 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
            WPF::g_pProcessHeap,
            80LL);
    v23 = DOUBLE_1_0;
    if ( v25 )
    {
      CTimelineBase::CTimelineBase(v25, *(float *)(a1 + 316), 0.0, 1.0, *(_DWORD *)(a1 + 344));
      *v26 = &CTimeline<float>::`vftable';
    }
    else
    {
      v26 = 0LL;
    }
    *(_QWORD *)(a1 + 352) = v26;
    if ( !v26 )
    {
      v45 = 122;
      goto LABEL_28;
    }
  }
  v27 = CTouchVisual::RegisterGlobalTimer((CTouchVisual *)a1);
  v16 = v27;
  if ( v27 >= 0 )
  {
    v28 = *(_DWORD *)(a1 + 348);
    v29 = *a3;
    *(struct tagPOINT *)(a1 + 296) = *a3;
    if ( (v28 & 8) != 0 )
    {
      v30 = (struct tagSIZE *)(a1 + 376);
      v31 = *(float *)(a1 + 336);
      *(_QWORD *)(a1 + 376) = *((_QWORD *)**v13 + 3);
      v32 = (int)(float)((float)*(int *)(a1 + 376) * v31);
      v33 = (float)*(int *)(a1 + 380);
      if ( v32 < 1 )
        v32 = 1;
      v30->cx = v32;
      v34 = v33 * v31;
      *(_DWORD *)(a1 + 380) = (int)v34;
      if ( (int)v34 < 1 )
        *(_DWORD *)(a1 + 380) = 1;
    }
    else
    {
      v35 = (CContactManager *)(v28 & 4);
      if ( (_BYTE)v35 )
      {
        if ( !a4 )
        {
          v16 = -2147024809;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024809, 0x95u);
LABEL_61:
          CContactStationaryVisual::StopTimer((CContactStationaryVisual *)a1);
          CVisual::SetOpacity((CVisual *)a1, 0.0);
          return (unsigned int)v16;
        }
        v36 = a4[3] - a4[1];
        if ( a4[2] - *a4 <= v36 )
          v36 = a4[2] - *a4;
        BoundedContactWidth = CContactManager::GetBoundedContactWidth(v35, v36, v29);
        *(_DWORD *)(a1 + 304) = BoundedContactWidth;
        v30 = (struct tagSIZE *)(a1 + 376);
        v38 = (int)(float)((float)BoundedContactWidth * *(float *)(a1 + 336));
        *(_DWORD *)(a1 + 376) = v38;
        if ( v38 < 1 )
        {
          v30->cx = 1;
          v38 = 1;
        }
        *(_DWORD *)(a1 + 380) = v38;
      }
      else
      {
        v30 = (struct tagSIZE *)(a1 + 376);
        *(_QWORD *)(a1 + 376) = *((_QWORD *)**v13 + 3);
      }
    }
    CVisual::SetSize(*(CVisual **)(a1 + 368), v30);
    cx = v30->cx;
    v40 = a3->y - *(_DWORD *)(a1 + 380) / 2;
    CVisual::SetInsetFromParentLeft(*(CVisual **)(a1 + 368), a3->x - cx / 2);
    CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 368), v40);
    v41 = *v13;
    if ( (*(_BYTE *)(a1 + 348) & 1) != 0 )
      v42 = *v41;
    else
      v42 = v41[*(unsigned int *)(a1 + 324)];
    CImage::SetBitmapSource(*(CImage **)(a1 + 368), v42);
    if ( a5 )
    {
      v43 = 0.0;
    }
    else if ( (*(_BYTE *)(a1 + 348) & 2) != 0 )
    {
      v43 = *(float *)(a1 + 328);
    }
    else
    {
      v43 = v23;
    }
    CVisual::SetOpacity((CVisual *)a1, v43);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v27, 0x7Du);
  }
LABEL_60:
  if ( v16 < 0 )
    goto LABEL_61;
  return (unsigned int)v16;
}

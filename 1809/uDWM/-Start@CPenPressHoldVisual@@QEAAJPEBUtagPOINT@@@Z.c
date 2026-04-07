/*
 * XREFs of ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x18009A9C8
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009281C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180013998 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018DD0 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ??0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z @ 0x1800214F4 (--0CTimelineBase@@QEAA@NNNW4InterpolationMode@@@Z.c)
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180036220 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x18003899C (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetInsetFromParentLeft@CVisual@@QEAAXH@Z @ 0x180039A60 (-SetInsetFromParentLeft@CVisual@@QEAAXH@Z.c)
 *     ?SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z @ 0x18003A888 (-SetBitmapSource@CImage@@QEAAJPEAVCBitmapSource@@@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x18003E1C4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0d @ 0x1800779F8 (McTemplateU0d.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x18009ABA0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?RegisterGlobalTimer@CTouchVisual@@IEAAJXZ @ 0x18009B63C (-RegisterGlobalTimer@CTouchVisual@@IEAAJXZ.c)
 */

__int64 __fastcall CPenPressHoldVisual::Start(CPenPressHoldVisual *this, const struct tagPOINT *a2)
{
  struct CBitmapSource ***v4; // r14
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // ebx
  unsigned int v7; // eax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // edi
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // r8

  *((struct tagPOINT *)this + 37) = *a2;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0d((__int64)this, (int)&UdwmPenPressHoldVisual_Start, 0);
  v4 = (struct CBitmapSource ***)((char *)this + 328);
  Theme = (void *)CDesktopManager::GetTheme(2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 2,
                                 0xCu,
                                 0LL,
                                 (__int64)this + 328);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 56;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, v7);
    CPenPressHoldVisual::Stop(this);
    return (unsigned int)BitmapsFromAtlasImageStrip;
  }
  v8 = *((_QWORD *)**v4 + 3);
  *((_QWORD *)this + 40) = v8;
  v9 = HIDWORD(v8);
  if ( (int)v8 < 1 )
  {
    LODWORD(v9) = *((_DWORD *)this + 81);
    LODWORD(v8) = 1;
    *((_DWORD *)this + 80) = 1;
  }
  if ( (int)v9 < 1 )
  {
    *((_DWORD *)this + 81) = 1;
    LODWORD(v9) = 1;
  }
  v10 = a2->x - (int)v8 / 2;
  v11 = a2->y - (int)v9 / 2;
  CVisual::SetSize(*((CVisual **)this + 39), (const struct tagSIZE *)this + 40);
  CVisual::SetInsetFromParentLeft(*((CVisual **)this + 39), v10);
  CVisual::SetInsetFromParentTop(*((CVisual **)this + 39), v11);
  CImage::SetBitmapSource(*((CImage **)this + 39), **v4);
  CVisual::SetOpacity(this, 1.0);
  v12 = (*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
          WPF::g_pProcessHeap,
          80LL);
  if ( v12 )
  {
    CTimelineBase::CTimelineBase(v12, 0.300000011920929, 0.0, 1.0, 0);
    *v13 = &CTimeline<float>::`vftable';
  }
  else
  {
    v13 = 0LL;
  }
  *((_QWORD *)this + 38) = v13;
  if ( !v13 )
  {
    BitmapsFromAtlasImageStrip = -2147024882;
    v7 = 83;
    goto LABEL_16;
  }
  BitmapsFromAtlasImageStrip = CTouchVisual::RegisterGlobalTimer(this);
  if ( BitmapsFromAtlasImageStrip < 0 )
  {
    v7 = 85;
    goto LABEL_16;
  }
  return (unsigned int)BitmapsFromAtlasImageStrip;
}

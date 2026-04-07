/*
 * XREFs of ?CreateCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180043E68
 * Callers:
 *     ?Initialize@CGlobalLightSet@@AEAAJXZ @ 0x180043AC8 (-Initialize@CGlobalLightSet@@AEAAJXZ.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18000B884 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z @ 0x1800223D4 (-Initialize@UdwmDcompVisual@@QEAAJPEAUIDwmChannel@@@Z.c)
 *     ?PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ @ 0x180026F08 (-PositionCoordinateSpaceVisual@CGlobalLightSet@@AEAAJXZ.c)
 *     ?ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z @ 0x1800270D4 (-ValidateUdwmDCompVisual@CGlobalLightSet@@AEBA_NPEAVUdwmDcompVisual@@@Z.c)
 *     ?GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z @ 0x180043FB4 (-GetMagnifierControlForDesktop@CWindowList@@QEAAPEAVCMagnifierControl@@_K@Z.c)
 *     ?InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z @ 0x180043FDC (-InsertUdwmDCompVisualBetween@CGlobalLightSet@@AEBAJPEAVUdwmDcompVisual@@PEAVCVisual@@1@Z.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Attach@?$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z @ 0x180072AE8 (-Attach@-$ComPtr@VUdwmDcompVisual@@@WRL@Microsoft@@QEAAXPEAVUdwmDcompVisual@@@Z.c)
 */

__int64 __fastcall CGlobalLightSet::CreateCoordinateSpaceVisual(CGlobalLightSet *this)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx
  struct UdwmDcompVisual **v4; // rdi
  CGlobalLightSet *v5; // rcx
  int inserted; // ebx
  struct CVisual *v7; // rbx
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  CGlobalLightSet *v9; // rcx
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (_DWORD *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
                   WPF::g_pProcessHeap,
                   112LL);
  v3 = v2;
  if ( v2 )
  {
    memset_0(v2, 0, 0x70uLL);
    v3[2] = 1;
    *(_QWORD *)v3 = &UdwmDcompVisual::`vftable';
    *((_QWORD *)v3 + 2) = 0LL;
    *((_QWORD *)v3 + 3) = 0LL;
    *((_QWORD *)v3 + 4) = 0LL;
    v3[10] = 0;
    *((_QWORD *)v3 + 6) = 0LL;
    *((_QWORD *)v3 + 7) = 0LL;
    *((_QWORD *)v3 + 8) = 0LL;
    *((_QWORD *)v3 + 9) = 0LL;
    v3[20] = 0;
    *((_QWORD *)v3 + 11) = 0LL;
    *((_QWORD *)v3 + 12) = 0LL;
    *((_QWORD *)v3 + 13) = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  v4 = (struct UdwmDcompVisual **)((char *)this + 96);
  Microsoft::WRL::ComPtr<UdwmDcompVisual>::Attach((char *)this + 96, v3);
  if ( *((_QWORD *)this + 12) )
  {
    inserted = UdwmDcompVisual::Initialize(
                 *((UdwmDcompVisual **)this + 12),
                 *((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 5));
    if ( inserted < 0 )
    {
      v11 = 410LL;
    }
    else if ( CGlobalLightSet::ValidateUdwmDCompVisual(v5, *v4) )
    {
      inserted = CGlobalLightSet::PositionCoordinateSpaceVisual(this);
      if ( inserted < 0 )
      {
        v11 = 416LL;
      }
      else
      {
        v7 = (struct CVisual *)*((_QWORD *)CWindowList::GetMagnifierControlForDesktop(
                                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                             *((_QWORD *)this + 11))
                               + 6);
        RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                                            + 61));
        inserted = CGlobalLightSet::InsertUdwmDCompVisualBetween(v9, *v4, RenderTargetRootVisualForDesktop, v7);
        if ( inserted >= 0 )
          return 0LL;
        v11 = 422LL;
      }
    }
    else
    {
      inserted = -2147418113;
      v11 = 413LL;
    }
  }
  else
  {
    inserted = -2147024882;
    v11 = 409LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (unsigned int)"windows\\dwm\\udwm\\globallightset.cpp",
    (const char *)(unsigned int)inserted,
    v12);
  return (unsigned int)inserted;
}

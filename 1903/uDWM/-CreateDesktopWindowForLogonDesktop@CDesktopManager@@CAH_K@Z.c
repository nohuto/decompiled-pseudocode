/*
 * XREFs of ?CreateDesktopWindowForLogonDesktop@CDesktopManager@@CAH_K@Z @ 0x18002CC04
 * Callers:
 *     ?RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ @ 0x18002CB3C (-RecreateDesktopWindowReplacementForDesktops@CWindowList@@QEAAXXZ.c)
 *     ?ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z @ 0x18002F784 (-ShowDesktopWindowReplacement@CDesktopManager@@QEAAX_N_K@Z.c)
 *     ?CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z @ 0x18004C01C (-CreateOrDestroyDesktopWindowReplacementForDesktops@CWindowList@@QEAAX_N@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180016C00 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x1800182C0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?FindElement@?$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@_K@Z @ 0x1800186A4 (-FindElement@-$CGenericTableMap@_KUDESKTOP_WINDOWLIST_MAP_ENTRY@CWindowList@@@@QEAAPEAUDESKTOP_W.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x180026838 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z @ 0x18002CCD0 (-AddDrawSolidBackgroundInstructions@CDesktopWindowReplacement@@QEAAJK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopManager::CreateDesktopWindowForLogonDesktop(__int64 a1)
{
  _QWORD *Element; // rax
  struct CVisual *v3; // rdi
  unsigned int v4; // ebx
  struct CRenderDataVisual *RootVisualForDesktop; // rax

  Element = CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 61) + 8LL),
              a1);
  if ( Element )
    v3 = (struct CVisual *)Element[4];
  else
    v3 = 0LL;
  if ( !*((_DWORD *)v3 + 68) )
  {
    v4 = 0;
    if ( !CDesktopManager::IsLogonDesktop(a1) && CAccent::s_clrCurrentAccentBackground != 0xFFFFFF )
      v4 = CAccent::s_clrCurrentAccentBackground;
    if ( (int)CDesktopWindowReplacement::AddDrawSolidBackgroundInstructions(v3, v4) >= 0 )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                               a1);
      VisualCollection::InsertRelative(
        (VisualCollection *)(*((_QWORD *)RootVisualForDesktop + 3) + 32LL),
        v3,
        RootVisualForDesktop,
        0,
        1);
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)v3 + 64LL))(v3);
    }
  }
  return 1LL;
}

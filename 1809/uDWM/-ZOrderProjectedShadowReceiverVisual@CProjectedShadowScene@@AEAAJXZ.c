/*
 * XREFs of ?ZOrderProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B103C
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E330 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ @ 0x1800B0ED8 (-UpdateProjectedShadowReceiverVisual@CProjectedShadowScene@@AEAAJXZ.c)
 * Callees:
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18001CDE0 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001F020 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180071634 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z @ 0x18008A930 (-GetLowestProjectedShadowCasterWindowForDesktop@CWindowList@@QEAAPEAVCTopLevelWindow@@_K@Z.c)
 */

__int64 __fastcall CProjectedShadowScene::ZOrderProjectedShadowReceiverVisual(CProjectedShadowScene *this)
{
  struct CTopLevelWindow *LowestProjectedShadowCasterWindowForDesktop; // rbx
  struct CRenderDataVisual *RootVisualForDesktop; // rax
  int inserted; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 72) )
    return 0LL;
  LowestProjectedShadowCasterWindowForDesktop = CWindowList::GetLowestProjectedShadowCasterWindowForDesktop(
                                                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                                                  *((_QWORD *)this + 2));
  RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 61),
                           *((_QWORD *)this + 2));
  inserted = VisualCollection::InsertRelative(
               (struct CRenderDataVisual *)((char *)RootVisualForDesktop + 32),
               *((struct CVisual **)this + 8),
               LowestProjectedShadowCasterWindowForDesktop,
               0,
               1);
  v5 = inserted;
  if ( inserted >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9D,
    (__int64)"windows\\dwm\\udwm\\projectedshadowscene.cpp",
    (const char *)(unsigned int)inserted);
  return v5;
}

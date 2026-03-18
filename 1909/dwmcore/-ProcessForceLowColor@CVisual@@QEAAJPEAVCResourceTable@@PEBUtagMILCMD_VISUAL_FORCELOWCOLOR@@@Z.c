/*
 * XREFs of ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x1801C27AC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801C3000 (-SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessForceLowColor(
        CVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_FORCELOWCOLOR *a3)
{
  CVisual::SetColorSpace(this, (enum DXGI_COLOR_SPACE_TYPE)(*((_BYTE *)a3 + 8) == 0));
  CVisual::PropagateFlags((__int64)this, 4u, 0);
  return 0LL;
}

/*
 * XREFs of ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x180212B6C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18006C430 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessEnableRendering(
        CCursorVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CURSORVISUAL_ENABLERENDERING *a3)
{
  char v3; // r9

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 568) != (v3 != 0) )
  {
    *((_BYTE *)this + 94) &= ~8u;
    *((_BYTE *)this + 568) = v3;
    *((_BYTE *)this + 94) |= v3 == 0 ? 8 : 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}

/*
 * XREFs of ?ProcessEnableRendering@CCursorVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CURSORVISUAL_ENABLERENDERING@@@Z @ 0x180193E1C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CCursorVisual::ProcessEnableRendering(
        CCursorVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_CURSORVISUAL_ENABLERENDERING *a3)
{
  int v3; // r9d

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_BYTE *)this + 568) != (v3 != 0) )
  {
    *((_BYTE *)this + 94) &= ~0x10u;
    *((_BYTE *)this + 568) = v3 != 0;
    *((_BYTE *)this + 94) |= v3 == 0 ? 0x10 : 0;
    CVisual::PropagateFlags((__int64)this, 5u, 0);
  }
  return 0LL;
}

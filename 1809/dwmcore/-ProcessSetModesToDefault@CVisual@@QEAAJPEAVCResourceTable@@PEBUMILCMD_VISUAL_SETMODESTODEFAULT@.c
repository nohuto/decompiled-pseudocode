/*
 * XREFs of ?ProcessSetModesToDefault@CVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VISUAL_SETMODESTODEFAULT@@@Z @ 0x1800742EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetModesToDefault(
        CVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETMODESTODEFAULT *a3)
{
  unsigned int v3; // eax

  *((_BYTE *)this + 96) |= 0x3Eu;
  v3 = *((_DWORD *)this + 24) & 0xFFF807FF;
  *(_QWORD *)((char *)this + 188) = 1LL;
  *((_DWORD *)this + 24) = v3 | 0x400;
  *(_QWORD *)((char *)this + 196) = 0LL;
  CVisual::PropagateFlags(this, 5LL);
  return 0LL;
}

/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18005EE54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = *((_DWORD *)a3 + 2);
  v4 = 0;
  if ( v3 < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, 0x50Fu);
  }
  else if ( *((_DWORD *)this + 215) != v3
         || *((_DWORD *)this + 216) != *((_DWORD *)a3 + 3)
         || *((_DWORD *)this + 217) != *((_DWORD *)a3 + 4)
         || *((_DWORD *)this + 218) != *((_DWORD *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 860) = *(_OWORD *)((char *)a3 + 8);
    CVisual::PropagateFlags(this, 4LL);
  }
  return v4;
}

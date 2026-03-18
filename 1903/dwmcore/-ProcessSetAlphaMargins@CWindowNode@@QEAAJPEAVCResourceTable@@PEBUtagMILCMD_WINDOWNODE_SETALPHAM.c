/*
 * XREFs of ?ProcessSetAlphaMargins@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETALPHAMARGINS@@@Z @ 0x18009BCE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18008E9C0 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessSetAlphaMargins(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_WINDOWNODE_SETALPHAMARGINS *a3)
{
  int v3; // eax
  unsigned int v4; // ebx

  v3 = *((_DWORD *)a3 + 2);
  if ( v3 < 0 || *((int *)a3 + 3) < 0 || *((int *)a3 + 4) < 0 || *((int *)a3 + 5) < 0 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x80070057, 0x4FEu, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 211) != v3
      || *((_DWORD *)this + 212) != *((_DWORD *)a3 + 3)
      || *((_DWORD *)this + 213) != *((_DWORD *)a3 + 4)
      || *((_DWORD *)this + 214) != *((_DWORD *)a3 + 5) )
    {
      *(_OWORD *)((char *)this + 844) = *(_OWORD *)((char *)a3 + 8);
      CVisual::PropagateFlags((__int64)this, 4u, 0);
    }
    return 0;
  }
  return v4;
}

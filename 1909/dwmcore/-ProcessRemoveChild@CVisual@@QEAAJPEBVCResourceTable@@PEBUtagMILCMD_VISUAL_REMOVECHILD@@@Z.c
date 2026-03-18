/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800794F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x180079060 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_REMOVECHILD *a3)
{
  unsigned int v4; // ebx
  struct CVisual *Resource; // rax
  __int64 v6; // rcx

  v4 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 189LL);
  if ( Resource )
  {
    CVisual::RemoveChild(this, Resource, 0);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, 0x88980403, 0xCD6u, 0LL);
  }
  return v4;
}

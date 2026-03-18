/*
 * XREFs of ?ProcessRemoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_REMOVECHILD@@@Z @ 0x1800A5EA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?RemoveChild@CVisual@@IEAAXPEAV1@_N@Z @ 0x1800A8C28 (-RemoveChild@CVisual@@IEAAXPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessRemoveChild(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_REMOVECHILD *a3)
{
  unsigned int v4; // ebx
  struct CVisual *Resource; // rax
  unsigned int v6; // ecx

  v4 = 0;
  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 157LL);
  if ( Resource )
  {
    CVisual::RemoveChild(this, Resource, 0);
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2003303421, 0xC6Eu);
  }
  return v4;
}

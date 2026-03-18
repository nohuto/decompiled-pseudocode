/*
 * XREFs of ?ProcessSetVisual@CProjectedShadowCaster@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWCASTER_SETVISUAL@@@Z @ 0x1801ADDA0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z @ 0x1801AE160 (-SetVisual@CProjectedShadowCaster@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::ProcessSetVisual(
        CProjectedShadowCaster *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWCASTER_SETVISUAL *a3)
{
  unsigned int v3; // ebx
  unsigned int v5; // edx
  struct CVisual *Resource; // rax
  __int64 v8; // rcx

  v3 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( !v5 || (Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, v5, 0x9Du)) != 0LL )
  {
    CProjectedShadowCaster::SetVisual(this, Resource);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xE7u);
  }
  return v3;
}

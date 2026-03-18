/*
 * XREFs of ?ProcessSetVisual@CProjectedShadowReceiver@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL@@@Z @ 0x1801AF528
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z @ 0x1801AF814 (-SetVisual@CProjectedShadowReceiver@@QEAAXPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CProjectedShadowReceiver::ProcessSetVisual(
        CProjectedShadowReceiver *this,
        struct CResourceTable *a2,
        const struct MILCMD_PROJECTEDSHADOWRECEIVER_SETVISUAL *a3)
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
    CProjectedShadowReceiver::SetVisual(this, Resource);
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x59u);
  }
  return v3;
}

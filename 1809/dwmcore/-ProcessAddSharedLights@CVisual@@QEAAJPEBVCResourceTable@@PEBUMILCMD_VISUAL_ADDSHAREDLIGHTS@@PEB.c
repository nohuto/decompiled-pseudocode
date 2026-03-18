/*
 * XREFs of ?ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_ADDSHAREDLIGHTS@@PEBXI@Z @ 0x1801B773C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1801B5E6C (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 */

__int64 __fastcall CVisual::ProcessAddSharedLights(
        CVisual *this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_ADDSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rcx

  if ( a5 == 4LL * *((unsigned int *)a3 + 2) )
  {
    v6 = CVisual::AddSharedLights((unsigned __int64)this, (_QWORD **)this + 35, 0, a2, a4, *((_DWORD *)a3 + 2));
    v5 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xBFFu);
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2003303421, 0xBF7u);
  }
  return v5;
}

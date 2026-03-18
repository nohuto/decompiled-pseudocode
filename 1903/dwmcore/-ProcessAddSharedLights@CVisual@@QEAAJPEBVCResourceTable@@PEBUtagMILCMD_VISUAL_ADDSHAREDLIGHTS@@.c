/*
 * XREFs of ?ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_ADDSHAREDLIGHTS@@PEBXI@Z @ 0x1800CEF80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18007E208 (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CVisual::ProcessAddSharedLights(
        struct CResource ***this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_VISUAL_ADDSHAREDLIGHTS *a3,
        __int64 a4,
        unsigned int a5)
{
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  if ( a5 == 4LL * *((unsigned int *)a3 + 2) )
  {
    v5 = CVisual::AddSharedLights((__int64)this, this + 35, 0, a2, a4, *((_DWORD *)a3 + 2));
    v7 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xC67u, 0LL);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, 0x88980403, 0xC5Fu, 0LL);
  }
  return v7;
}

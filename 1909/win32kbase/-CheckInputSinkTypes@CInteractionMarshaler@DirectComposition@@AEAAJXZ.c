/*
 * XREFs of ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1C007A1A4
 * Callers:
 *     ?EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAPEAVCInteractionMarshaler@2@@Z @ 0x1C00799B4 (-EnsureInteraction@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@_NPEBGPEAP.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0079BF8 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 * Callees:
 *     ?SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionInputType@@@Z @ 0x1C007A2B0 (-SetConfigurationAll@CInteractionConfigurationGroup@DirectComposition@@QEAAJW4Enum@InteractionIn.c)
 *     ?ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ @ 0x1C007A504 (-ClearConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAXXZ.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C007AAF8 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(
        DirectComposition::CInteractionMarshaler *this)
{
  int v1; // ebx
  CompositionInputObject *v3; // rcx
  int v4; // esi
  char v5; // r14
  int InputQueueTypes; // eax
  __int64 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( (*((_BYTE *)this + 316) & 1) == 0 )
    return 0LL;
  v3 = (CompositionInputObject *)*((_QWORD *)this + 31);
  v4 = 0;
  v5 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( v3 )
  {
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(v3, (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v8);
    v4 = v10;
    v1 = InputQueueTypes;
  }
  else
  {
    v5 = 1;
  }
  if ( v1 >= 0 )
  {
    DirectComposition::CInteractionConfigurationGroup::ClearConfiguration((DirectComposition::CInteractionMarshaler *)((char *)this + 40));
    if ( v5 || v4 > 1 )
      v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 3LL);
    if ( v1 >= 0 )
    {
      if ( v5 || SHIDWORD(v8) > 1 )
        v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 4LL);
      if ( v1 >= 0 && (v5 || SHIDWORD(v9) > 1) )
      {
        v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 1LL);
        if ( v1 >= 0 )
          v1 = DirectComposition::CInteractionConfigurationGroup::SetConfigurationAll((char *)this + 40, 2LL);
      }
    }
    *((_DWORD *)this + 4) |= 0x200u;
  }
  return (unsigned int)v1;
}

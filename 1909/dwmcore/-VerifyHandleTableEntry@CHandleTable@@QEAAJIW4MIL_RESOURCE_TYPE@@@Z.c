/*
 * XREFs of ?VerifyHandleTableEntry@CHandleTable@@QEAAJIW4MIL_RESOURCE_TYPE@@@Z @ 0x180056EC4
 * Callers:
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180054E20 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z @ 0x180055430 (-AtlasedRectsMeshUpdate@CChannel@@UEAAJI_NIPEBUMilRectF@@1PEBK@Z.c)
 *     ?RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z @ 0x180055BB0 (-RgnGeometryUpdate@CChannel@@UEAAJIPEBUtagRECT@@I@Z.c)
 *     ?CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180055C9C (-CheckOptionalHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?VisualSetSize@CChannel@@UEAAJINN@Z @ 0x180055DC0 (-VisualSetSize@CChannel@@UEAAJINN@Z.c)
 *     ?VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z @ 0x180055EA0 (-VisualSetTouchTargetRect@CChannel@@UEAAJIAEBUtagRECT@@@Z.c)
 *     ?WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z @ 0x180055F60 (-WindowNodeSetBounds@CChannel@@UEAAJIAEBUtagRECT@@00@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z @ 0x180056560 (-WindowNodeSetSpriteClip@CChannel@@UEAAJI_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CHandleTable::VerifyHandleTableEntry(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v6; // ebx
  _DWORD *v7; // rcx
  int *v8; // rdx
  int v9; // eax

  v6 = 0;
  EnterCriticalSection(&g_csCompositionEngine);
  if ( !a2 || a2 >= *(_DWORD *)(a1 + 12) || (v8 = (int *)(*(_QWORD *)(a1 + 24) + a2 * *(_DWORD *)(a1 + 8)), !*v8) )
    v8 = 0LL;
  if ( !v8 || v8[2] )
  {
    v6 = -2147024890;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024890, 0x1B4u, 0LL);
  }
  else if ( a3 )
  {
    v9 = *v8;
    if ( *v8 < 200 )
    {
      while ( v9 )
      {
        if ( v9 == a3 )
          goto LABEL_10;
        v7 = dword_1802D6870;
        v9 = dword_1802D6870[v9];
      }
    }
    v6 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v7, 0LL, 0, -2147024809, 0x1BAu, 0LL);
  }
LABEL_10:
  LeaveCriticalSection(&g_csCompositionEngine);
  return v6;
}

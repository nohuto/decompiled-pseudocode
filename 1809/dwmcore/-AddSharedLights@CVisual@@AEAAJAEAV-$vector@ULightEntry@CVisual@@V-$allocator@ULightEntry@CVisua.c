/*
 * XREFs of ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1801B5E6C
 * Callers:
 *     ?ProcessAddExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_ADDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x1801B76C4 (-ProcessAddExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_ADDEXCLUDEDS.c)
 *     ?ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_ADDSHAREDLIGHTS@@PEBXI@Z @ 0x1801B773C (-ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_ADDSHAREDLIGHTS@@PEB.c)
 * Callees:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800A2C88 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddSharedLights(
        unsigned __int64 a1,
        _QWORD **a2,
        int a3,
        CResourceTable *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  struct CResource *ResourceWithoutType; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  _QWORD *i; // rax
  int v15; // eax
  __int64 v16; // rcx

  v6 = 0;
  v7 = 0LL;
  if ( a6 )
  {
    while ( 2 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a4, *(_DWORD *)(a5 + 4 * v7));
      v13 = (__int64)ResourceWithoutType;
      if ( ResourceWithoutType
        && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
             ResourceWithoutType,
             32LL) )
      {
        for ( i = *a2; i != a2[1]; i += 2 )
        {
          if ( *i == v13 )
            goto LABEL_9;
        }
        v15 = CVisual::AddLight(a1, v13, a3, 1);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xC3Eu);
          return v6;
        }
LABEL_9:
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 < a6 )
          continue;
      }
      else
      {
        v6 = -2003303421;
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0xC2Eu);
      }
      break;
    }
  }
  return v6;
}

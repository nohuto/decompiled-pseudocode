/*
 * XREFs of ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x18007E208
 * Callers:
 *     ?ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_ADDSHAREDLIGHTS@@PEBXI@Z @ 0x1800CEF80 (-ProcessAddSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_ADDSHAREDLIGHTS@@.c)
 *     ?ProcessAddExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_ADDEXCLUDEDSHAREDLIGHTS@@PEBXI@Z @ 0x1801C3E40 (-ProcessAddExcludedSharedLights@CVisual@@QEAAJPEBVCResourceTable@@PEBUtagMILCMD_VISUAL_ADDEXCLUD.c)
 * Callees:
 *     ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x18007FA30 (-AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::AddSharedLights(
        __int64 a1,
        struct CResource ***a2,
        unsigned int a3,
        CResourceTable *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  struct CResource *ResourceWithoutType; // rax
  unsigned int v12; // ecx
  struct CResource *v13; // rsi
  __int64 v14; // r9
  struct CResource **i; // rax
  int v16; // eax
  unsigned int v17; // ecx

  v6 = 0;
  v7 = 0LL;
  if ( a6 )
  {
    while ( 2 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(a4, *(_DWORD *)(a5 + 4 * v7));
      v13 = ResourceWithoutType;
      if ( ResourceWithoutType
        && (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
             ResourceWithoutType,
             33LL) )
      {
        for ( i = *a2; i != a2[1]; i += 2 )
        {
          if ( *i == v13 )
            goto LABEL_9;
        }
        LOBYTE(v14) = 1;
        v16 = CCompositionLight::AddTarget(v13, a1, a3, v14);
        v6 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xCA6u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2003303421, 0xC96u, 0LL);
      }
      break;
    }
  }
  return v6;
}

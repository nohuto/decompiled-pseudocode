/*
 * XREFs of ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800A2AD8
 * Callers:
 *     ?ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTARGETS@@PEBXI@Z @ 0x18009F8F8 (-ProcessAddTargets@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDTA.c)
 *     ?ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_ADDEXCLUSIONS@@PEBXI@Z @ 0x18018FEE0 (-ProcessAddExclusions@CCompositionLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONLIGHT_AD.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x1800A2AA8 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x1800A2C88 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA68 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionLight::AddTargets(
        __int64 a1,
        CResourceTable *a2,
        unsigned int a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  unsigned int v6; // ebx
  CResourceTable *v9; // r8
  unsigned int v11; // r14d
  __int64 v12; // rdi
  unsigned int v13; // ebp
  struct CResource *ResourceWithoutType; // rax
  __int64 v15; // rcx
  struct CResource *v16; // rsi
  unsigned int v17; // eax
  int v18; // eax
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v22; // [rsp+20h] [rbp-48h]
  struct CResource *v24; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  v9 = a2;
  v11 = 0;
  v12 = a1 + (a6 != 0 ? 112LL : 72LL);
  if ( a3 )
  {
    v13 = a6;
    while ( 1 )
    {
      ResourceWithoutType = CResourceTable::GetResourceWithoutType(v9, *a4);
      v16 = ResourceWithoutType;
      if ( !ResourceWithoutType
        || !(*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 48LL))(
              ResourceWithoutType,
              157LL) )
      {
        break;
      }
      v24 = v16;
      if ( !DynArray<CVisual *,0>::Contains(v12, &v24) )
      {
        v15 = *(unsigned int *)(v12 + 24);
        v17 = v15 + 1;
        if ( (int)v15 + 1 >= (unsigned int)v15 )
          v13 = v15 + 1;
        v6 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
        if ( v17 < (unsigned int)v15 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v6, 0xB5u);
        }
        else if ( v13 > *(_DWORD *)(v12 + 20) )
        {
          v20 = DynArrayImpl<0>::AddMultipleAndSet(v12, 8, 1, &v24);
          v6 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v20, 0xC0u);
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)v12 + 8 * v15) = v24;
          *(_DWORD *)(v12 + 24) = v13;
        }
        if ( (v6 & 0x80000000) != 0 )
        {
          v22 = 142;
          goto LABEL_23;
        }
        v18 = CVisual::AddLight(v24, a1, a6, 0LL);
        v6 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x8Fu);
          return v6;
        }
      }
      ++v11;
      ++a4;
      if ( v11 >= a3 )
        return v6;
      v9 = a2;
    }
    v6 = -2003303421;
    v22 = 136;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v6, v22);
  }
  return v6;
}

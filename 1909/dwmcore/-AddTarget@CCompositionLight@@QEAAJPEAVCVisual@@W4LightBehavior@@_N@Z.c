/*
 * XREFs of ?AddTarget@CCompositionLight@@QEAAJPEAVCVisual@@W4LightBehavior@@_N@Z @ 0x18003726C
 * Callers:
 *     ?AddSharedLights@CVisual@@AEAAJAEAV?$vector@ULightEntry@CVisual@@V?$allocator@ULightEntry@CVisual@@@std@@@std@@W4LightBehavior@@PEBVCResourceTable@@PEBII@Z @ 0x1800370F8 (-AddSharedLights@CVisual@@AEAAJAEAV-$vector@ULightEntry@CVisual@@V-$allocator@ULightEntry@CVisua.c)
 *     ?AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z @ 0x1800371C4 (-AddTargets@CCompositionLight@@AEAAJPEAVCResourceTable@@IPEBXIW4LightBehavior@@@Z.c)
 * Callees:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z @ 0x180037340 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@_N@Z.c)
 *     ?Contains@?$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z @ 0x1800374B0 (-Contains@-$DynArray@PEAVCVisual@@$0A@@@QEBA_NAEBQEAVCVisual@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180154D7C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CCompositionLight::AddTarget(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // r11
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // ebx
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // rdx
  unsigned int v17; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v19 = a2;
  if ( (unsigned __int8)DynArray<CVisual *,0>::Contains(a1 + 80 + (a3 != 0 ? 0x28 : 0), &v19) )
    return 0LL;
  v10 = *(_DWORD *)(v9 + 24);
  v11 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024362, 0xB8u, 0LL);
  }
  else
  {
    if ( v11 <= *(_DWORD *)(v9 + 20) )
    {
      *(_QWORD *)(*(_QWORD *)v9 + 8LL * v10) = v19;
      *(_DWORD *)(v9 + 24) = v11;
      goto LABEL_5;
    }
    v14 = DynArrayImpl<0>::AddMultipleAndSet(v9, 8LL, 1LL, &v19);
    v12 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xC3u, 0LL);
  }
  if ( v12 < 0 )
  {
    v16 = 351LL;
    goto LABEL_14;
  }
LABEL_5:
  LOBYTE(v8) = a4;
  v12 = CVisual::AddLight(v19, a1, a3, v8);
  if ( v12 >= 0 )
    return 0LL;
  v16 = 352LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v16,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionlight.cpp",
    (const char *)(unsigned int)v12,
    v17);
  return (unsigned int)v12;
}

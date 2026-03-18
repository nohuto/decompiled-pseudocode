/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@_N@Z @ 0x1800C1D30
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z @ 0x1800C1B88 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000_N@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800C1DC4 (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x1800C42C8 (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2,
        char a3)
{
  int v5; // edi
  _DWORD v7[4]; // [rsp+20h] [rbp-28h] BYREF

  *(_BYTE *)(a1 + 149) &= ~1u;
  *(_BYTE *)(a1 + 149) |= a3;
  v7[0] = 0;
  v7[1] = 0;
  v7[2] = 0;
  v5 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, v7, 1LL);
  if ( v5 < 0 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(a1);
  else
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::operator=(a1, a2);
  return (unsigned int)v5;
}

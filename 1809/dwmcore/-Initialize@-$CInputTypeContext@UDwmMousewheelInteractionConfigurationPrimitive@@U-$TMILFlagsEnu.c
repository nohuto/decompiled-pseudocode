/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x180089898
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z @ 0x180089724 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmMousewheelInteractionConfigurationPrimitive@@I@Z @ 0x180022754 (-AddMultipleAndSet@-$DynArray@UDwmMousewheelInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUD.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800898FC (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v2; // edi
  __int64 v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 156) == 6
    || (v6 = 0LL,
        v7 = 0,
        v2 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, &v6, 1u),
        v2 >= 0) )
  {
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::operator=(a1, a2);
  }
  else
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)a1);
  }
  return (unsigned int)v2;
}

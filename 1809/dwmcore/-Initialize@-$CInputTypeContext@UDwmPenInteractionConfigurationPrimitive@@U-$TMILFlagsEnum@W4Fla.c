/*
 * XREFs of ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x180089804
 * Callers:
 *     ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z @ 0x180089724 (-Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800225FC (-AddMultipleAndSet@-$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenIn.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrapper@@@Z @ 0x1800898FC (--4-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionContextWrap.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
        __int64 a1,
        __int64 a2)
{
  int v2; // edi
  _DWORD v6[4]; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( *(_DWORD *)(a1 + 156) == 6
    || (v6[0] = 0,
        v6[1] = 0,
        v6[2] = 0,
        v2 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(a1 + 88, v6, 1LL),
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

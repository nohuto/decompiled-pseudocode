/*
 * XREFs of ?Initialize@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@000@Z @ 0x180089724
 * Callers:
 *     ?Initialize@CInteraction@@MEAAJXZ @ 0x180089360 (-Initialize@CInteraction@@MEAAJXZ.c)
 *     ?Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z @ 0x18019C224 (-Initialize@CInteractionRoot@@QEAAJPEAUIManipulationContext@@_N@Z.c)
 * Callees:
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x180089804 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ?Initialize@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x180089898 (-Initialize@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U-$TMILFlagsEnu.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::Initialize(
        CInteractionProcessor *this,
        struct IInteractionContextWrapper *a2,
        struct IInteractionContextWrapper *a3,
        struct IInteractionContextWrapper *a4,
        struct IInteractionContextWrapper *a5)
{
  __int64 result; // rax
  __int64 v9; // rdx

  if ( !a2 || !a3 )
    return 2147942487LL;
  *((_WORD *)this + 624) = 0;
  *(_QWORD *)((char *)this + 1252) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 315) = 0;
  *((_DWORD *)this + 162) = 0;
  result = ((__int64 (*)(void))CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize)();
  if ( (int)result >= 0 )
  {
    result = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
               (char *)this + 160,
               a3);
    if ( (int)result >= 0 )
    {
      LOBYTE(v9) = 1;
      (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 20) + 72LL))(*((_QWORD *)this + 20), v9);
      result = CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::Initialize(
                 (char *)this + 320,
                 a4);
      if ( (int)result >= 0 )
        return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::Initialize(
                 (char *)this + 480,
                 a5);
    }
  }
  return result;
}

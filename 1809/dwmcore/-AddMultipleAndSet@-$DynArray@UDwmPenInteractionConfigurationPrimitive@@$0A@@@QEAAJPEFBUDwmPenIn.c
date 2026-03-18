/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UDwmPenInteractionConfigurationPrimitive@@$0A@@@QEAAJPEFBUDwmPenInteractionConfigurationPrimitive@@I@Z @ 0x1800225FC
 * Callers:
 *     _anonymous_namespace_::SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_ @ 0x180022594 (_anonymous_namespace_--SetArrayConfiguration_DwmTouchpadInteractionConfigurationPrimitive_.c)
 *     ?Initialize@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJPEAUIInteractionContextWrapper@@@Z @ 0x180089804 (-Initialize@-$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fla.c)
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1801EEEB8 (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 */

__int64 __fastcall DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet(
        __int64 a1,
        const void *a2,
        __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // ecx

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + a3;
  v6 = (int)v4 + (int)a3 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( (int)v4 + (int)a3 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 <= *(_DWORD *)(a1 + 20) )
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 12 * v4), a2, 12LL * (unsigned int)a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  else
  {
    v7 = DynArrayImpl<0>::AddMultipleAndSet(a1, 12LL, a3, a2);
    v6 = v7;
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xC0u);
  }
  return v6;
}

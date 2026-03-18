/*
 * XREFs of RemoveCountFromEndOfArray_AxisWithType_ @ 0x1801F97AC
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801FA0C8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall RemoveCountFromEndOfArray_AxisWithType_(int a1, __int64 a2)
{
  int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx

  if ( a1 )
  {
    v3 = a1;
    do
    {
      v4 = *(_DWORD *)(a2 + 24);
      v5 = (unsigned int)(v4 - 1);
      if ( v4 )
        *(_DWORD *)(a2 + 24) = v5;
      else
        MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x19Cu);
      --v3;
    }
    while ( v3 );
  }
}

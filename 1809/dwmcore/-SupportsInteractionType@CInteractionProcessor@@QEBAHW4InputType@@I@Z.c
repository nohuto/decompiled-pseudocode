/*
 * XREFs of ?SupportsInteractionType@CInteractionProcessor@@QEBAHW4InputType@@I@Z @ 0x18001176C
 * Callers:
 *     ?SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z @ 0x180011750 (-SupportsInteractionType@CInteraction@@UEBAHW4InputType@@I@Z.c)
 *     ?SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I@Z @ 0x1801F93D0 (-SupportsInteractionType@CInteractionRoot@@UEBAHW4InputType@@I@Z.c)
 * Callees:
 *     _anonymous_namespace_::GetTemporaryConfigWithMask @ 0x1800118B0 (_anonymous_namespace_--GetTemporaryConfigWithMask.c)
 *     ?ConfigurationListContainsType@?$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeMousewheelPrimitiveType@@@@QEBAHIU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@0@Z @ 0x1801F01E8 (-ConfigurationListContainsType@-$CInputTypeContext@UDwmMousewheelInteractionConfigurationPrimiti.c)
 */

char __fastcall CInteractionProcessor::SupportsInteractionType(__int64 a1, int a2, unsigned int a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v12; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  anonymous_namespace_::GetTemporaryConfigWithMask(a1 + 1272, &v12, &v13);
  v6 = a2 - 2;
  if ( !v6 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1,
             a3,
             v12,
             v13);
  v7 = v6 - 1;
  if ( !v7 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1 + 160,
             a3,
             v12,
             v13);
  v8 = v7 - 1;
  if ( !v8 )
    return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
             a1 + 320,
             a3,
             v12,
             v13);
  v9 = v8 - 1;
  if ( v9 )
  {
    if ( v9 == 1 )
      return CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ConfigurationListContainsType(
               a1 + 480,
               a3,
               v12,
               v13);
    else
      return 0;
  }
  else
  {
    v10 = *(_DWORD *)(a1 + 640) & 0xFFFF7FC0;
    if ( (*(_DWORD *)(a1 + 640) & 0x8000) != 0 )
      v10 = *(_DWORD *)(a1 + 640);
    return (v10 & a3) != 0;
  }
}

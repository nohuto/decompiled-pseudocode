/*
 * XREFs of ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@3@UE$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x180260DF4
 * Callers:
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@$00@3@WDI@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800A3E50 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800A3E50.c)
 *     ?__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@WHA@E$AAAJPEAPE$AAUIWeakReference@23@@Z @ 0x1800A3E60 (-__abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference@-QIWeakReferen_ea_1800A3E60.c)
 * Callees:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$Array@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@3@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18025F90C (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$Array@PE$AAUISwitchIte_ea_18025F90C.c)
 */

__int64 __fastcall ___abi_Platform_Details_IWeakReferenceSource____abi_GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_PE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___00_3_UE_AAAJPEAPE_AAUIWeakReference_23__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 128) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _GetWeakReference__QIWeakReferenceSource_Details_Platform____Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_3_UE_AAAPE_AAUIWeakReference_23_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}

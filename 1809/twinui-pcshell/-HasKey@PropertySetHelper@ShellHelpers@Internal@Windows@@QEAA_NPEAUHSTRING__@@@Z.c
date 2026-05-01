/*
 * XREFs of ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1801B3D24
 * Callers:
 *     ?_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180027694 (-_IsPropertySetHeuristicHolographic@HolographicPositioner@@AEAA_NPEAUIPropertySet@Collections@Fo.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B6BF4 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 * Callees:
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z @ 0x1801B3C78 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEAUHSTRING__@@PEAE@Z.c)
 */

char __fastcall Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
        Windows::Internal::ShellHelpers::PropertySetHelper *this,
        HSTRING a2)
{
  int HasKey; // eax
  char v3; // cl
  unsigned __int8 v5; // [rsp+40h] [rbp+18h] BYREF

  HasKey = Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(this, a2, &v5);
  v3 = 0;
  if ( HasKey >= 0 )
    return v5 != 0;
  return v3;
}

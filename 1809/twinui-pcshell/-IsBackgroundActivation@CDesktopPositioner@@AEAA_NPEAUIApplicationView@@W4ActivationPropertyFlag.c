/*
 * XREFs of ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x18033D614
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z @ 0x180055B10 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAK@Z.c)
 * Callees:
 *     IsPeoplePane @ 0x180028600 (IsPeoplePane.c)
 */

char __fastcall CDesktopPositioner::IsBackgroundActivation(__int64 a1, __int64 a2, char a3)
{
  char result; // al

  if ( (a3 & 5) != 0 )
    return 1;
  result = IsPeoplePane(a2);
  if ( result )
    return 1;
  return result;
}

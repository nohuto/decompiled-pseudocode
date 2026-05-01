/*
 * XREFs of ?IsBackgroundActivation@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@W4ActivationPropertyFlags@PositionerPropertySetHelpers@@@Z @ 0x1803C1B74
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800ADDD4 (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     IsPeoplePane @ 0x18001F30C (IsPeoplePane.c)
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

/*
 * XREFs of ?GetEnabled@ControllerNavigationClientProxy@@UEAA_NXZ @ 0x1800711B0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetToggleEnabled@BamoMagnifierClientProxy@@UEAA_NXZ @ 0x180032290 (-GetToggleEnabled@BamoMagnifierClientProxy@@UEAA_NXZ.c)
 */

char __fastcall ControllerNavigationClientProxy::GetEnabled(ControllerNavigationClientProxy *this)
{
  bool ToggleEnabled; // al
  char v3; // dl

  ToggleEnabled = BamoMagnifierClientProxy::GetToggleEnabled(this);
  v3 = 0;
  if ( ToggleEnabled )
    return *((_BYTE *)this + 72) == 0;
  return v3;
}

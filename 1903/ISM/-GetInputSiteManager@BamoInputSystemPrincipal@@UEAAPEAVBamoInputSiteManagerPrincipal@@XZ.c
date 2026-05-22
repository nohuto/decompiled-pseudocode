/*
 * XREFs of ?GetInputSiteManager@BamoInputSystemPrincipal@@UEAAPEAVBamoInputSiteManagerPrincipal@@XZ @ 0x18000E390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoInputSiteManagerPrincipal *__fastcall BamoInputSystemPrincipal::GetInputSiteManager(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoInputSiteManagerPrincipal *)*((_QWORD *)this + 11);
}

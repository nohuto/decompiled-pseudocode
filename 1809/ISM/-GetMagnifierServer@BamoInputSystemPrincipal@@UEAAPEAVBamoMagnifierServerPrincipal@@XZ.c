/*
 * XREFs of ?GetMagnifierServer@BamoInputSystemPrincipal@@UEAAPEAVBamoMagnifierServerPrincipal@@XZ @ 0x18001BA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct BamoMagnifierServerPrincipal *__fastcall BamoInputSystemPrincipal::GetMagnifierServer(
        BamoInputSystemPrincipal *this)
{
  return (struct BamoMagnifierServerPrincipal *)*((_QWORD *)this + 8);
}

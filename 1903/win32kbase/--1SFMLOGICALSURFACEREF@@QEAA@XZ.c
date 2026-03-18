/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C009FCA0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0058D60 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     <none>
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( (int)IsSFMLOGICALSURFACEREF_vDestructorSupported() >= 0 )
    SFMLOGICALSURFACEREF_vDestructorWrap(this);
}

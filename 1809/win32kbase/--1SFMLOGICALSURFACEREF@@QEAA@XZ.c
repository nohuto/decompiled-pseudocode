/*
 * XREFs of ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00FF010
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C009CEA0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00251C0 (PopThreadGuardedObject.c)
 */

void __fastcall SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(SFMLOGICALSURFACEREF *this)
{
  if ( (int)IsSFMLOGICALSURFACEREF_vDestructorSupported() >= 0 )
    SFMLOGICALSURFACEREF_vDestructorWrap(this);
  PopThreadGuardedObject(this);
}

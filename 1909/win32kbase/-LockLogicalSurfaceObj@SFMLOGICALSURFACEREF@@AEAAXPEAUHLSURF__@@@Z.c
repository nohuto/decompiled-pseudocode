/*
 * XREFs of ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C009D67C
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C0069F00 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     HmgLockEx @ 0x1C001FCA0 (HmgLockEx.c)
 */

void __fastcall SFMLOGICALSURFACEREF::LockLogicalSurfaceObj(SFMLOGICALSURFACEREF *this, HLSURF a2)
{
  if ( a2 )
    *(_QWORD *)this = HmgLockEx((unsigned int)a2, 18, 0);
}

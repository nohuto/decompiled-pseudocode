/*
 * XREFs of ?Release@ConnectionIndirector@BamoImpl@Microsoft@@UEAAKXZ @ 0x180189780
 * Callers:
 *     ?Release@ConnectionIndirector@BamoImpl@Microsoft@@WBA@EAAKXZ @ 0x1800F0B40 (-Release@ConnectionIndirector@BamoImpl@Microsoft@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::BamoImpl::ConnectionIndirector::Release(
        Microsoft::BamoImpl::BamoImplObject *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  return Microsoft::BamoImpl::BamoImplObject::Release(this, a2, a3, a4);
}

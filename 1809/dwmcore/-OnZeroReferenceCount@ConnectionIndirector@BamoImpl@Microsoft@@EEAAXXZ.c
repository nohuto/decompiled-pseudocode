/*
 * XREFs of ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154320
 * Callers:
 *     <none>
 * Callees:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153700 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::ConnectionIndirector::OnZeroReferenceCount(
        Microsoft::BamoImpl::ConnectionIndirector *this)
{
  if ( this )
    Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(this, 1);
}

/*
 * XREFs of _PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor$57 @ 0x18012931C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PenDeviceManager::RepopulateActiveBamoForId_::_1_::dtor_57(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)(a2 + 64), a2, a3, a4);
}

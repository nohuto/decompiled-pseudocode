/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C0051BEC
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C004BEDC (DrvChangeDisplaySettings.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00510C8 (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvFunctionalizeDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C0128E18 (_DrvFunctionalizeDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     _DrvChangeDisplaySettings_::_2_::AUTO_KM::_scalar_deleting_destructor_ @ 0x1C0128EB0 (_DrvChangeDisplaySettings_--_2_--AUTO_KM--_scalar_deleting_destructor_.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C0128F00 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0015E80 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((_QWORD *)this + 2);
}

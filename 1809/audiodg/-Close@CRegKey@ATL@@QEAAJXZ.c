/*
 * XREFs of ?Close@CRegKey@ATL@@QEAAJXZ @ 0x140050EF4
 * Callers:
 *     ??1CRegKey@ATL@@QEAA@XZ @ 0x14004FE64 (--1CRegKey@ATL@@QEAA@XZ.c)
 *     ?Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z @ 0x140050F20 (-Create@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAK@Z.c)
 *     ?Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z @ 0x140051E44 (-Open@CRegKey@ATL@@QEAAJPEAUHKEY__@@PEBGK@Z.c)
 *     ?RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z @ 0x140052A38 (-RecurseDeleteKey@CRegKey@ATL@@QEAAJPEBG@Z.c)
 *     ?RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z @ 0x140052EC4 (-RegisterSubkeys@CRegParser@ATL@@IEAAJPEAGPEAUHKEY__@@HH@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall ATL::CRegKey::Close(HKEY *this)
{
  LSTATUS result; // eax
  HKEY v3; // rcx

  result = 0;
  v3 = *this;
  if ( v3 )
  {
    result = RegCloseKey(v3);
    *this = 0LL;
  }
  return result;
}

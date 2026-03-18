/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C014CFC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1, __int64 a2)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1, a2) + 245) != 0;
}

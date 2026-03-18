/*
 * XREFs of DxgkGetPresenterViewMode @ 0x1C0139FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool __fastcall DxgkGetPresenterViewMode(__int64 a1)
{
  return *((_DWORD *)DXGGLOBAL::GetGlobal(a1) + 253) != 0;
}

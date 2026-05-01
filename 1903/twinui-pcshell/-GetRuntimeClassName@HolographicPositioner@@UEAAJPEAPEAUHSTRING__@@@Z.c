/*
 * XREFs of ?GetRuntimeClassName@HolographicPositioner@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1802008A0
 * Callers:
 *     ?GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z @ 0x1800B6E40 (-GetRuntimeClassName@HolographicPositioner@@WJI@EAAJPEAPEAUHSTRING__@@@Z.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall HolographicPositioner::GetRuntimeClassName(HolographicPositioner *this, HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Internal.Shell.Holographic.HolographicViewHostItemSource", 0x40u, a2);
}

/*
 * XREFs of ?GetApplicationId@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180072880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall CImmersiveApp::GetApplicationId(LPCWSTR *this, unsigned __int16 **a2)
{
  return SHStrDupW(this[59], a2);
}

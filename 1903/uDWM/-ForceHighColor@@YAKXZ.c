/*
 * XREFs of ?ForceHighColor@@YAKXZ @ 0x18002EC90
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002E9EC (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004C5C4 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
 */

__int64 ForceHighColor(void)
{
  __int64 result; // rax

  result = dword_1800DB1D0;
  if ( dword_1800DB1D0 == -1 )
  {
    result = (unsigned int)-RegGetHKLMDword(L"Software\\Microsoft\\Windows\\Dwm", L"HighColor", &dword_1800DB1D0);
    dword_1800DB1D0 = result;
  }
  return result;
}

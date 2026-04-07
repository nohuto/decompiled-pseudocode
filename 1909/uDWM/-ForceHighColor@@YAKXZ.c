/*
 * XREFs of ?ForceHighColor@@YAKXZ @ 0x18002C2B0
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x18002C00C (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?RegGetHKLMDword@@YA_NQEBG0PEAK@Z @ 0x18004C474 (-RegGetHKLMDword@@YA_NQEBG0PEAK@Z.c)
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

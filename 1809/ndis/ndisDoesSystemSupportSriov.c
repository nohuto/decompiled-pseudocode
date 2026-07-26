/*
 * XREFs of ndisDoesSystemSupportSriov @ 0x1C00CBF3C
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1C0065340 (WPP_SF_S.c)
 */

void ndisDoesSystemSupportSriov()
{
  const wchar_t *v20; // r8

  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
    WPP_SF_(0x81u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids);
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    if ( (_DWORD)_RAX == 824407624 )
    {
      _RAX = 0x40000000LL;
      __asm { cpuid }
      if ( (unsigned int)_RAX >= 0x40000006 )
      {
        _RAX = 1073741830LL;
        __asm { cpuid }
        ndisSystemSupportsSriov = (_RAX & 0x30) == 48;
      }
    }
  }
  if ( ndisSriovSupportTestOverride )
  {
    if ( (unsigned __int8)byte_1C00A0269 >= 4u )
      WPP_SF_(0x82u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids);
    ndisSystemSupportsSriov = 1;
  }
  if ( (unsigned __int8)byte_1C00A0269 >= 4u )
  {
    v20 = L"Yes";
    if ( ndisSystemSupportsSriov != 1 )
      v20 = L"No";
    WPP_SF_S(0x83u, &WPP_045c459e6c3833fc2a6b90252fda9676_Traceguids, v20);
  }
}

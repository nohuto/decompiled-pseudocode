/*
 * XREFs of SiIsValidWindowsBootEntry @ 0x1408F6D48
 * Callers:
 *     SiGetEspFromFirmware @ 0x1408F692C (SiGetEspFromFirmware.c)
 * Callees:
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     wcsnlen @ 0x1401979D0 (wcsnlen.c)
 */

bool __fastcall SiIsValidWindowsBootEntry(_DWORD *a1, __int64 a2)
{
  const wchar_t *v3; // rcx
  bool result; // al

  result = 0;
  if ( a1[5] )
  {
    if ( (a1[3] & 4) != 0 && a1[6] >= 0x18u )
      return 1;
    v3 = (const wchar_t *)(a2
                         + 12
                         + 2
                         * (wcsnlen((const wchar_t *)(a2 + 12), (unsigned __int64)*(unsigned int *)(a2 + 4) >> 1) + 1));
    if ( (unsigned __int64)v3 < (unsigned __int64)*(unsigned int *)(a2 + 4) + a2 + 12
      && !wcsicmp(v3, L"\\EFI\\Microsoft\\Boot\\bootmgfw.efi") )
    {
      return 1;
    }
  }
  return result;
}

/*
 * XREFs of ?HampSystemCreateKey@@YGJPAUHKEY__@@PBGKKPAPAU1@@Z @ 0x100137D8
 * Callers:
 *     ?HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z @ 0x10013803 (-HampSystemOpenAppRegistryKey@@YGJPBGPAXKPAPAUHKEY__@@@Z.c)
 * Callees:
 *     <none>
 */

LSTATUS __userpurge HampSystemCreateKey@<eax>(
        const WCHAR *a1@<edx>,
        HKEY a2@<ecx>,
        DWORD dwOptions,
        const unsigned __int16 *a4,
        PHKEY phkResult,
        unsigned int a6,
        HKEY *a7)
{
  LSTATUS result; // eax

  result = RegCreateKeyExW(a2, a1, 0, 0, dwOptions, 1u, 0, phkResult, 0);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}

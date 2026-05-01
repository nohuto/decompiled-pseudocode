/*
 * XREFs of ?HampSystemQueryValue@@YGJPAUHKEY__@@PBGPAXPAK@Z @ 0x10013923
 * Callers:
 *     _HampUsageInfoRegistryQuery@12 @ 0x100132F0 (_HampUsageInfoRegistryQuery@12.c)
 * Callees:
 *     <none>
 */

LSTATUS __userpurge HampSystemQueryValue@<eax>(
        const WCHAR *a1@<edx>,
        HKEY a2@<ecx>,
        BYTE *lpData,
        LPDWORD lpcbData,
        void *a5,
        unsigned int *a6)
{
  LSTATUS result; // eax

  result = RegQueryValueExW(a2, a1, 0, 0, lpData, lpcbData);
  if ( result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}

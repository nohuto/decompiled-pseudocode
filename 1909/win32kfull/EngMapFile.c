/*
 * XREFs of EngMapFile @ 0x1C02868D0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0095D7C (PALLOCMEM2.c)
 *     bMapFile @ 0x1C0286D80 (bMapFile.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v3; // rbx
  void *v6; // rdi

  v3 = 0LL;
  v6 = PALLOCMEM2(0x50uLL, 1818846791LL, 1);
  if ( v6 )
  {
    if ( (unsigned int)bMapFile(pwsz) )
    {
      *piFile = (ULONG_PTR)v6;
      return (PVOID)*((_QWORD *)v6 + 1);
    }
    else
    {
      *piFile = 0LL;
      Win32FreePool(v6);
    }
  }
  return v3;
}

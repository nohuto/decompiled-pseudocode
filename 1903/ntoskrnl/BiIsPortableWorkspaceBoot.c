/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x14092F0E0
 * Callers:
 *     BiBindEfiEntries @ 0x14092FE38 (BiBindEfiEntries.c)
 *     BiExportBcdObjects @ 0x140931204 (BiExportBcdObjects.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14073D538 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14073DB30 (BiOpenKey.c)
 *     BiCloseKey @ 0x14073DCB4 (BiCloseKey.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  char v0; // di
  int v1; // ebx
  void *v3; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 0x20019u, &v3) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4,
                &P,
                &v3) >= 0 )
    {
      v1 = *(_DWORD *)P;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v1 != 0;
    }
  }
  else
  {
    BiCloseKey(v3);
  }
  return v0;
}

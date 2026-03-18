/*
 * XREFs of BiIsWinPEBoot @ 0x14073E40C
 * Callers:
 *     BiCleanupLoadedStores @ 0x14073D6DC (BiCleanupLoadedStores.c)
 *     BcdCloseStore @ 0x14073DA4C (BcdCloseStore.c)
 * Callees:
 *     wcsstr @ 0x1401A28C0 (wcsstr.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     BiGetRegistryValue @ 0x14073F438 (BiGetRegistryValue.c)
 */

bool BiIsWinPEBoot()
{
  bool v0; // bl
  __int64 v2; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  if ( (int)BiGetRegistryValue(
              0LL,
              L"SystemStartOptions",
              L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1LL,
              &Str,
              &v2) >= 0 )
  {
    v0 = wcsstr(Str, L"MININT") != 0LL;
    ExFreePoolWithTag(Str, 0x4B444342u);
  }
  return v0;
}

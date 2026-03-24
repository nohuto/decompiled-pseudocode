/*
 * XREFs of CmpGetSystemRelativeRegistryHiveFilePath @ 0x1409F39C0
 * Callers:
 *     CmpInitializeDriverStores @ 0x1409C1534 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHive @ 0x1409C3CAC (CmpInitializePreloadedHive.c)
 * Callees:
 *     _wcsnicmp @ 0x140195A70 (_wcsnicmp.c)
 *     wcsrchr @ 0x1401978C0 (wcsrchr.c)
 */

const wchar_t *__fastcall CmpGetSystemRelativeRegistryHiveFilePath(const wchar_t *a1)
{
  wchar_t *v2; // rax
  wchar_t *v3; // rbx

  v2 = wcsrchr(a1, 0x5Cu);
  v3 = v2;
  if ( !v2 || v2 <= a1 )
    return a1;
  if ( (unsigned __int64)(((char *)v2 - (char *)a1 + 2) >> 1) > 0x11
    && !wcsnicmp(v2 - 16, L"\\System32\\Config\\", 0x11uLL) )
  {
    v3 -= 16;
  }
  return v3;
}

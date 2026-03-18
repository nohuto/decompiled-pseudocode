/*
 * XREFs of wcsrchr @ 0x1C0074010
 * Callers:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C003215C (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ldevLoadImage @ 0x1C0053150 (ldevLoadImage.c)
 *     rimLoadImage @ 0x1C00F112C (rimLoadImage.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C012A6B4 (GetWindowsDirectoryDevicePath.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrchr(const wchar_t *Str, wchar_t Ch)
{
  const wchar_t *v2; // r9
  wchar_t *v3; // r8
  __int16 v5; // ax

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    v5 = *--Str;
  while ( Str != v2 && v5 != Ch );
  if ( v5 == Ch )
    return (wchar_t *)Str;
  return v3;
}

/*
 * XREFs of wcsrchr @ 0x1C00B8388
 * Callers:
 *     rimLoadImage @ 0x1C005E590 (rimLoadImage.c)
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C006B69C (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 *     GetWindowsDirectoryDevicePath @ 0x1C0073E14 (GetWindowsDirectoryDevicePath.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C009C838 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     ivrLoadImage @ 0x1C018C2AC (ivrLoadImage.c)
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

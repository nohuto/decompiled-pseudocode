/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x1801B4010
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x1801B4B80 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(HolographicApps *this, const unsigned __int16 *a2)
{
  wchar_t **v3; // rbx

  v3 = &off_180505EC8;
  while ( (unsigned int)_o__wcsicmp(this, *v3) )
  {
    if ( ++v3 == (wchar_t **)&hProvider )
      return 0;
  }
  return 1;
}

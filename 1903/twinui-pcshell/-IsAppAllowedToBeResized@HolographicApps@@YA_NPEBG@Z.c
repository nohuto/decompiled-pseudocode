/*
 * XREFs of ?IsAppAllowedToBeResized@HolographicApps@@YA_NPEBG@Z @ 0x180201318
 * Callers:
 *     ?ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z @ 0x180201FC0 (-ResizeView@HolographicPositioner@@UEAAJPEAUIApplicationView@@UtagSIZE@@1@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall HolographicApps::IsAppAllowedToBeResized(HolographicApps *this, const unsigned __int16 *a2)
{
  int *v3; // rbx

  v3 = (int *)&off_18058FF28;
  while ( (unsigned int)_o__wcsicmp(this, *(_QWORD *)v3) )
  {
    v3 += 2;
    if ( v3 == &hProvider )
      return 0;
  }
  return 1;
}

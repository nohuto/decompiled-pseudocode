/*
 * XREFs of ?get_AllowDisplayRegionSpanning@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x1802A1D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_AllowDisplayRegionSpanning(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 94) )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 112);
  return 0LL;
}

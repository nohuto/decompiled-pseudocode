/*
 * XREFs of ?get_IsExclusive@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x18022D760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_IsExclusive(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  *a2 = 0;
  if ( *((_DWORD *)this + 17) != 1 )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 152);
  return 0LL;
}

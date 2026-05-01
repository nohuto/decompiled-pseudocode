/*
 * XREFs of ?get_IsExclusive@WindowingEnvironmentSettings@@UEAAJPEAE@Z @ 0x180282A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_IsExclusive(
        WindowingEnvironmentSettings *this,
        unsigned __int8 *a2)
{
  bool v2; // al

  v2 = 0;
  *a2 = 0;
  if ( *((_BYTE *)this + 68) )
    v2 = *((_DWORD *)this + 16) == 2;
  if ( !v2 )
    return 2147943568LL;
  *a2 = *((_BYTE *)this + 152);
  return 0LL;
}

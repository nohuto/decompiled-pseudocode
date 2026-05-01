/*
 * XREFs of ?get_PresenterMode@WindowingEnvironmentSettings@@UEAAJPEAI@Z @ 0x18022D7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_PresenterMode(
        WindowingEnvironmentSettings *this,
        unsigned int *a2)
{
  *a2 = 0;
  if ( !*((_BYTE *)this + 64) )
    return 2147943568LL;
  *a2 = *((_DWORD *)this + 17);
  return 0LL;
}

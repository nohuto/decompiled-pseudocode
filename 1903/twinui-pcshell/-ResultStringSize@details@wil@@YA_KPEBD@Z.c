/*
 * XREFs of ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18004A6EC
 * Callers:
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x18004A300 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z @ 0x18004A40C (-SetFailureInfo@StoredFailureInfo@wil@@QEAAXAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ResultStringSize(wil::details *this, const char *a2)
{
  __int64 v3; // rcx

  if ( !this )
    return 1LL;
  v3 = -1LL;
  do
    ++v3;
  while ( *((_BYTE *)this + v3) );
  return v3 + 1;
}

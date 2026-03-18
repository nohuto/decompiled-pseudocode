/*
 * XREFs of ?ResultStringSize@details@wil@@YA_KPEBD@Z @ 0x18014487C
 * Callers:
 *     ??$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z @ 0x180142DC4 (--$WriteResultString@PEBD@details@wil@@YAPEAEPEAE0PEBDPEAPEBD@Z.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x180144978 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ResultStringSize(wil::details *this, const char *a2)
{
  __int64 v4; // rcx

  if ( !this )
    return 1LL;
  v4 = -1LL;
  do
    ++v4;
  while ( *((_BYTE *)this + v4) );
  return v4 + 1;
}

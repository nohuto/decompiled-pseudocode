/*
 * XREFs of DxgkChangeD3RequestsState @ 0x1C0156C00
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0008924 (DpiEnableD3Requests.c)
 *     DpiDisableD3Requests @ 0x1C0008938 (DpiDisableD3Requests.c)
 */

__int64 __fastcall DxgkChangeD3RequestsState(__int64 a1, char a2)
{
  __int64 v2; // rcx

  if ( !a1 )
    return 3221225480LL;
  v2 = *(_QWORD *)(a1 + 192);
  if ( a2 )
    DpiEnableD3Requests(v2);
  else
    DpiDisableD3Requests(v2);
  return 0LL;
}

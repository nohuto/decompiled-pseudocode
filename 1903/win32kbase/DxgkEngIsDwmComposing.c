/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00A8A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  __int64 v1; // rcx

  if ( a1 )
    *a1 = 0;
  if ( (int)IsIsDwmActiveSupported() < 0 )
    return 0LL;
  else
    return IsDwmActive(v1);
}

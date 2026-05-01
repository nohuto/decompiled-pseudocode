/*
 * XREFs of _lambda_b30b843a24f7a843996b1737c1303811_::_lambda_invoker_cdecl_ @ 0x1801F2350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z @ 0x1801F34DC (-IsWindowEligibleForTabbing@@YA_NPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall lambda_b30b843a24f7a843996b1737c1303811_::_lambda_invoker_cdecl_(HWND a1, __int64 a2)
{
  bool v4; // al
  unsigned int v5; // r8d

  v4 = IsWindowEligibleForTabbing(a1, 0LL);
  v5 = 0;
  if ( v4 )
  {
    if ( **(_BYTE **)a2 )
    {
      **(_BYTE **)(a2 + 8) = a1 != **(HWND **)(a2 + 16);
    }
    else
    {
      v5 = 1;
      if ( a1 == **(HWND **)(a2 + 24) )
        **(_BYTE **)a2 = 1;
    }
  }
  else
  {
    return 1;
  }
  return v5;
}

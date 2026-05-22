/*
 * XREFs of _lambda_018d032e83798cc1d7fea9feccefba1b_::_lambda_invoker_cdecl_ @ 0x1800337D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_018d032e83798cc1d7fea9feccefba1b_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 2676);
  v2 = *(_BYTE *)(a1 + 6720) && !v1;
  if ( (*(_DWORD *)(a1 + 1780) != *(_DWORD *)(a1 + 6724) || *(_DWORD *)(a1 + 1784) != *(_DWORD *)(a1 + 6728)) && !v1
    || v2 )
  {
    *(_BYTE *)(a1 + 6920) = 1;
  }
  *(_QWORD *)(a1 + 6724) = *(_QWORD *)(a1 + 1780);
  result = 0LL;
  *(_BYTE *)(a1 + 6720) = v1 != 0;
  return result;
}

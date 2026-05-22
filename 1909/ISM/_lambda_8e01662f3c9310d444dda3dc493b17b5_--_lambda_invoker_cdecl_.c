/*
 * XREFs of _lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_ @ 0x180074140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_8e01662f3c9310d444dda3dc493b17b5_::_lambda_invoker_cdecl_(__int64 a1)
{
  int v1; // edx
  bool v2; // r8
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 3140);
  v2 = *(_BYTE *)(a1 + 11104) && !v1;
  if ( (*(_DWORD *)(a1 + 2236) != *(_DWORD *)(a1 + 11108) || *(_DWORD *)(a1 + 2240) != *(_DWORD *)(a1 + 11112)) && !v1
    || v2 )
  {
    *(_BYTE *)(a1 + 11304) = 1;
  }
  *(_QWORD *)(a1 + 11108) = *(_QWORD *)(a1 + 2236);
  result = 0LL;
  *(_BYTE *)(a1 + 11104) = v1 != 0;
  return result;
}

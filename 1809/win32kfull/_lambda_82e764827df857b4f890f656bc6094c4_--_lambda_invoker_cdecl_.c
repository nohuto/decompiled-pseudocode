/*
 * XREFs of _lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_ @ 0x1C0008730
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 */

__int64 __fastcall lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 result; // rax

  result = ValidateHwnd(a1);
  if ( result )
    return SetOrClrWF(0LL, result, 528LL, 1LL);
  return result;
}

/*
 * XREFs of _lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_ @ 0x1C0162360
 * Callers:
 *     <none>
 * Callees:
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 */

char __fastcall lambda_82e764827df857b4f890f656bc6094c4_::_lambda_invoker_cdecl_(__int64 a1)
{
  __int64 v1; // rax

  v1 = ValidateHwnd(a1);
  if ( v1 )
    LOBYTE(v1) = SetOrClrWF(0, v1, 0x210u, 1);
  return v1;
}

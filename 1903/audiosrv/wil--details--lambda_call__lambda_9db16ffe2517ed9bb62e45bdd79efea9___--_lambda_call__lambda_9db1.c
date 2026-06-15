/*
 * XREFs of wil::details::lambda_call__lambda_9db16ffe2517ed9bb62e45bdd79efea9___::_lambda_call__lambda_9db16ffe2517ed9bb62e45bdd79efea9___ @ 0x180129F08
 * Callers:
 *     _DynamicAudioEndpointManager::UpdateRule_::_1_::dtor$3 @ 0x18012C4D5 (_DynamicAudioEndpointManager--UpdateRule_--_1_--dtor$3.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_9db16ffe2517ed9bb62e45bdd79efea9___::_lambda_call__lambda_9db16ffe2517ed9bb62e45bdd79efea9___(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)**a1 + 96LL))(**a1, *a1[1], a1[2]);
  }
  return result;
}

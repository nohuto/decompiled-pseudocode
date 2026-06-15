/*
 * XREFs of wil::details::ScopeExitFn__lambda_b6f247e70b2a6561a4419e809a63c8ff___::_ScopeExitFn__lambda_b6f247e70b2a6561a4419e809a63c8ff___ @ 0x1800653B4
 * Callers:
 *     _BuildDeviceGraphForStream_::_1_::dtor$8 @ 0x180065DF6 (_BuildDeviceGraphForStream_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_b6f247e70b2a6561a4419e809a63c8ff___::_ScopeExitFn__lambda_b6f247e70b2a6561a4419e809a63c8ff___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_QWORD *)(result + 104) = 0LL;
  }
  return result;
}

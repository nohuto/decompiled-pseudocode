/*
 * XREFs of wil::details::lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___::_lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___ @ 0x1800F51C8
 * Callers:
 *     _CAudioResourceManager::SwitchStreamGroupsToNewSaDevice_::_1_::dtor$6 @ 0x1800F960A (_CAudioResourceManager--SwitchStreamGroupsToNewSaDevice_--_1_--dtor$6.c)
 * Callees:
 *     _lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator() @ 0x1800F57EC (_lambda_75b02e7f6b47e5adc47099aefab01fa1_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___::_lambda_call__lambda_f7ea18b6f0a66a2b0ac24e14c232af22___(
        __int64 a1)
{
  __int64 result; // rax
  _QWORD v2[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( *(_BYTE *)(a1 + 48) )
  {
    *(_BYTE *)(a1 + 48) = 0;
    v2[0] = *(_QWORD *)a1;
    v2[1] = *(_QWORD *)(a1 + 8);
    v2[2] = *(_QWORD *)(a1 + 16);
    v2[3] = *(_QWORD *)(a1 + 24);
    v2[4] = *(_QWORD *)(a1 + 32);
    v2[5] = *(_QWORD *)(a1 + 40);
    return lambda_75b02e7f6b47e5adc47099aefab01fa1_::operator()(v2);
  }
  return result;
}

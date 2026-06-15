/*
 * XREFs of wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___ @ 0x140025CB8
 * Callers:
 *     ?CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUSYSTEM_AUDIO_STREAM@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@PEAPEAV1@@Z @ 0x14000F96C (-CreateStreamEndpointInstance@CEndpointInstance@@SAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@_JIPEAUS.c)
 *     _CEndpointInstance::CreateStreamEndpointInstance_::_1_::dtor$0 @ 0x14001B27B (_CEndpointInstance--CreateStreamEndpointInstance_--_1_--dtor$0.c)
 *     _CEndpointInstance::CreateSpatialStreamEndpointInstance_::_1_::dtor$0 @ 0x140039AF4 (_CEndpointInstance--CreateSpatialStreamEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___::_lambda_call__lambda_41ababd1f7db6775c029845e18383e4d___(
        _BYTE *a1)
{
  __int64 result; // rax
  void *v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(void **)(**(_QWORD **)a1 + 144LL);
    if ( v3 )
    {
      CoTaskMemFree(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(**(_QWORD **)a1 + 144LL) = 0LL;
    }
  }
  return result;
}

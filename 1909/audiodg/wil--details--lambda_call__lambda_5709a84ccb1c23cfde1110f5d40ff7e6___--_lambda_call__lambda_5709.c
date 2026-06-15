/*
 * XREFs of wil::details::lambda_call__lambda_5709a84ccb1c23cfde1110f5d40ff7e6___::_lambda_call__lambda_5709a84ccb1c23cfde1110f5d40ff7e6___ @ 0x14005B164
 * Callers:
 *     _CSpatialCrossProcessBaseEndpoint::MapCPMemory_::_1_::dtor$0 @ 0x14005CE30 (_CSpatialCrossProcessBaseEndpoint--MapCPMemory_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_5709a84ccb1c23cfde1110f5d40ff7e6___::_lambda_call__lambda_5709a84ccb1c23cfde1110f5d40ff7e6___(
        _BYTE *a1)
{
  __int64 result; // rax
  void *v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(void **)(*(_QWORD *)a1 + 176LL);
    if ( v3 )
    {
      CoTaskMemFree(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 176LL) = 0LL;
    }
  }
  return result;
}

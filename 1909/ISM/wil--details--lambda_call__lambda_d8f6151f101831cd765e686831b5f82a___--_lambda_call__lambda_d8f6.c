/*
 * XREFs of wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___ @ 0x18009A01C
 * Callers:
 *     _RIMDeviceCollection::InitializeRIM_::_1_::dtor$0 @ 0x18003CAD1 (_RIMDeviceCollection--InitializeRIM_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___::_lambda_call__lambda_d8f6151f101831cd765e686831b5f82a___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 80LL) )
    {
      RIMUnregisterForInput();
      CloseHandle(*(HANDLE *)(*(_QWORD *)a1 + 80LL));
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 80LL) = 0LL;
    }
  }
  return result;
}

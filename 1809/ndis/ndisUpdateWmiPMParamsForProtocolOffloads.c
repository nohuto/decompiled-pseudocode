/*
 * XREFs of ndisUpdateWmiPMParamsForProtocolOffloads @ 0x1C004BC5C
 * Callers:
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0014A50 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004A5AC (ndisMIndicatePMOffloadReject.c)
 * Callees:
 *     ndisEnablePMParamForProtocolOffload @ 0x1C004A1A8 (ndisEnablePMParamForProtocolOffload.c)
 */

__int64 __fastcall ndisUpdateWmiPMParamsForProtocolOffloads(__int64 a1)
{
  __int64 v1; // r10
  _QWORD *i; // rax
  _QWORD *j; // r9
  __int64 result; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0;
  for ( i = *(_QWORD **)(a1 + 976); i; i = (_QWORD *)*i )
  {
    for ( j = i + 1; j; j = (_QWORD *)*j )
    {
      if ( (_UNKNOWN *)j[2] == &ndisIntReqWmi )
        ndisEnablePMParamForProtocolOffload((__int64)(i + 6), (__int64)&v5);
    }
  }
  result = (unsigned int)v6;
  *(_DWORD *)(v1 + 1148) = v6;
  return result;
}

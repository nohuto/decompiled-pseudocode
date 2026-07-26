/*
 * XREFs of ndisUpdateWmiPMParamsForPatterns @ 0x1C00773F0
 * Callers:
 *     ndisMIndicateWoLPatternReject @ 0x1C0073430 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0073D70 (ndisOidPostPMRemoveWOLPattern.c)
 * Callees:
 *     ndisEnablePMParamForPattern @ 0x1C0072E58 (ndisEnablePMParamForPattern.c)
 */

__int64 __fastcall ndisUpdateWmiPMParamsForPatterns(__int64 a1)
{
  __int64 v1; // r10
  _QWORD *i; // rax
  _QWORD *j; // r9
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v5[0] = 0LL;
  v5[1] = 0LL;
  v6 = 0;
  for ( i = *(_QWORD **)(a1 + 968); i; i = (_QWORD *)*i )
  {
    for ( j = i + 1; j; j = (_QWORD *)*j )
    {
      if ( (_UNKNOWN *)j[2] == &ndisIntReqWmi )
        ndisEnablePMParamForPattern((__int64)(i + 6), (__int64)v5);
    }
  }
  result = HIDWORD(v5[0]);
  *(_DWORD *)(v1 + 1144) = HIDWORD(v5[0]);
  return result;
}

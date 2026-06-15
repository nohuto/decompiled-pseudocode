/*
 * XREFs of _lambda_d6c91c141caa9023ad6869a8fc78e301_::operator() @ 0x140017AF4
 * Callers:
 *     wil::details::lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___::_lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___ @ 0x140017AD4 (wil--details--lambda_call__lambda_d6c91c141caa9023ad6869a8fc78e301___--_lambda_call__lambda_d6c9.c)
 * Callees:
 *     ?TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z @ 0x140007D0C (-TrackSystemEffectBehavior@@YAJPEBGW4APO_TYPE@@_N2AEBU_GUID@@M@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400329C0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall lambda_d6c91c141caa9023ad6869a8fc78e301_::operator()(__int64 **a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = **a1;
  v2 = *(_DWORD *)(v1 + 4);
  if ( v2 )
  {
    v3 = TrackSystemEffectBehavior(a1[1][24], v2, 0, 0, v1 + 8, SLODWORD(FLOAT_1_0));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBD7,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
}

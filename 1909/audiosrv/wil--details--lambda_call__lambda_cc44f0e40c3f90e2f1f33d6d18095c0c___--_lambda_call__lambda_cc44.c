/*
 * XREFs of wil::details::lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___::_lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___ @ 0x18006B078
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckForEndpoint_::_1_::dtor$0 @ 0x18006BEFA (_AtmosCheck--PerformLicenseCheckForEndpoint_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013DEDC (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___::_lambda_call__lambda_cc44f0e40c3f90e2f1f33d6d18095c0c___(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = AtmosCheck::EndAppSvcCall(*(AtmosCheck **)a1);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x595,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}

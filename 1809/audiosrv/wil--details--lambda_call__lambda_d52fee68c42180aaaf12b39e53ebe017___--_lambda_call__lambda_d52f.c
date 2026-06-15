/*
 * XREFs of wil::details::lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___::_lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___ @ 0x180067AC4
 * Callers:
 *     ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4 (-PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _AtmosCheck::PerformLicenseCheckInternalAppService_::_1_::dtor$0 @ 0x18013AE10 (_AtmosCheck--PerformLicenseCheckInternalAppService_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18006806C (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___::_lambda_call__lambda_d52fee68c42180aaaf12b39e53ebe017___(
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
        (void *)0x560,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}

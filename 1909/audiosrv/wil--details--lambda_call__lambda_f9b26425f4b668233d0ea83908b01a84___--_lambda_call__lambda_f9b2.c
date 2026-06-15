/*
 * XREFs of wil::details::lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___::_lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___ @ 0x18006B0B8
 * Callers:
 *     _AtmosCheck::PerformLicenseCheckForSpatialAudioSubtype_::_1_::dtor$0 @ 0x18006C05B (_AtmosCheck--PerformLicenseCheckForSpatialAudioSubtype_--_1_--dtor$0.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E4E0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x18013DEDC (-EndAppSvcCall@AtmosCheck@@AEAAJXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___::_lambda_call__lambda_f9b26425f4b668233d0ea83908b01a84___(
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
        (void *)0x5C0,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v1);
  }
}

/*
 * XREFs of _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x18005A1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x180059F00 (-LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z.c)
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A4C0 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x18005A89C (-WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_(
        PTP_CALLBACK_INSTANCE Instance,
        unsigned int *Context,
        PTP_TIMER Timer)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)Context + 4) = GetTickCount64();
  if ( MPCHeadMovementDetector::AccumulateYawVelocity((MPCHeadMovementDetector *)Context) )
  {
    if ( MPCHeadMovementDetector::WasThereSufficientYawMovement((MPCHeadMovementDetector *)Context) )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), _QWORD, __int64))(**(_QWORD **)Context + 128LL))(
             *(_QWORD *)Context,
             lambda_63fb782d36acab0c5992718409f4ec66_::_lambda_invoker_cdecl_,
             0LL,
             3LL);
      if ( v4 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x74,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcheadmovementdetector.cpp",
          (const char *)(unsigned int)v4);
        JUMPOUT(0x18005A2B8LL);
      }
      RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL, 0LL);
      ISMTracing::LogMPCLastHeadYawMovement(0);
      v5 = *((_QWORD *)Context + 4);
      v6 = v5 + Context[29];
      *((_QWORD *)Context + 5) = v5;
      goto LABEL_7;
    }
    v7 = *((_QWORD *)Context + 4);
    if ( *((_QWORD *)Context + 13) <= v7 )
    {
      ISMTracing::LogMPCLastHeadYawMovement((v7 - *((_QWORD *)Context + 5)) / 0x3E8);
      v6 = *((_QWORD *)Context + 4) + Context[29];
LABEL_7:
      *((_QWORD *)Context + 13) = v6;
    }
  }
  SetThreadpoolTimer(*((PTP_TIMER *)Context + 1), (PFILETIME)Context + 3, 0, Context[5]);
}

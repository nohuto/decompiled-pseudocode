/*
 * XREFs of ?OnTimerCallback@MPCHeadMovementDetector@@AEAAXXZ @ 0x180096C64
 * Callers:
 *     _lambda_aa0eaa0d8a3377c6799a200e781869ec_::_lambda_invoker_cdecl_ @ 0x1800962A0 (_lambda_aa0eaa0d8a3377c6799a200e781869ec_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ @ 0x1800966A8 (-AccumulateYawVelocity@MPCHeadMovementDetector@@AEAA_NXZ.c)
 *     ?LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z @ 0x180096BA0 (-LogMPCLastHeadYawMovement@ISMTracing@@SAXI@Z.c)
 *     ?QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ @ 0x180096D4C (-QueueIdleTimerKick@MPCHeadMovementDetector@@AEAAXXZ.c)
 *     ?WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ @ 0x180096D9C (-WasThereSufficientYawMovement@MPCHeadMovementDetector@@AEAA_NXZ.c)
 */

void __fastcall MPCHeadMovementDetector::OnTimerCallback(MPCHeadMovementDetector *this)
{
  ULONGLONG TickCount64; // rax
  bool v3; // zf
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned __int64 v6; // rcx

  TickCount64 = GetTickCount64();
  v3 = *((_BYTE *)this + 64) == 0;
  *((_QWORD *)this + 5) = TickCount64;
  if ( !v3 && MPCHeadMovementDetector::AccumulateYawVelocity((__int64 **)this) )
  {
    if ( MPCHeadMovementDetector::WasThereSufficientYawMovement(this) )
    {
      MPCHeadMovementDetector::QueueIdleTimerKick(this);
      RtlPublishWnfStateData(WNF_HOLO_RESET_IDLE_TIMER, 0LL, 0LL, 0LL, 0LL);
      ISMTracing::LogMPCLastHeadYawMovement(0LL);
      v4 = *((_QWORD *)this + 5);
      v5 = v4 + *((unsigned int *)this + 35);
      *((_QWORD *)this + 6) = v4;
LABEL_7:
      *((_QWORD *)this + 16) = v5;
      goto LABEL_8;
    }
    v6 = *((_QWORD *)this + 5);
    if ( *((_QWORD *)this + 16) <= v6 )
    {
      ISMTracing::LogMPCLastHeadYawMovement((v6 - *((_QWORD *)this + 6)) / 0x3E8);
      v5 = *((_QWORD *)this + 5) + *((unsigned int *)this + 35);
      goto LABEL_7;
    }
  }
LABEL_8:
  SetThreadpoolTimer(
    *((PTP_TIMER *)this + 1),
    (PFILETIME)((char *)this + (-(__int64)(*((_BYTE *)this + 64) != 0) & 0xFFFFFFFFFFFFFFF8uLL) + 32),
    0,
    *((_DWORD *)this + 5));
}

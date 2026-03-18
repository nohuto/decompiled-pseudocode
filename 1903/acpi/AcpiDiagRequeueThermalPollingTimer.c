/*
 * XREFs of AcpiDiagRequeueThermalPollingTimer @ 0x1C0049150
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0049210 (AcpiDiagThermalPollingTimerRoutine.c)
 *     AcpiDiagThermalPollingTraceControlCallback @ 0x1C0049290 (AcpiDiagThermalPollingTraceControlCallback.c)
 *     AcpiDiagInitialize @ 0x1C00BC294 (AcpiDiagInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 */

void AcpiDiagRequeueThermalPollingTimer()
{
  KIRQL v0; // al
  __int64 Reserved; // rdx
  KIRQL v2; // bl
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]

  v3 = 0LL;
  v4 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiThermalConstraintLock);
  Reserved = *((_QWORD *)&WPP_MAIN_CB.Reserved + 1);
  v2 = v0;
  if ( !*((_QWORD *)&WPP_MAIN_CB.Reserved + 1)
    || WPP_MAIN_CB.Reserved && (__int64)WPP_MAIN_CB.Reserved < *((__int64 *)&WPP_MAIN_CB.Reserved + 1) )
  {
    Reserved = (__int64)WPP_MAIN_CB.Reserved;
  }
  if ( Reserved )
  {
    v4 = -1LL;
    ((void (__fastcall *)(void *, __int64, _QWORD, __int64 *))KeSetTimer2)(
      &AcpiDiagThermalPollingTimer,
      -Reserved,
      0LL,
      &v3);
  }
  else
  {
    KeCancelTimer2(&AcpiDiagThermalPollingTimer);
  }
  KeReleaseSpinLock(&AcpiThermalConstraintLock, v2);
}

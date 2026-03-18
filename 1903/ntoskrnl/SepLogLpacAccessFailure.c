/*
 * XREFs of SepLogLpacAccessFailure @ 0x14031CE14
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepGetStackTraceHash @ 0x14031CD0C (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x140849F6C (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x1408FDB3C (EtwTraceLpacAccessFailure.c)
 */

__int64 __fastcall SepLogLpacAccessFailure(ULONG a1)
{
  ULONG v1; // ebx
  unsigned __int8 v2; // di
  _QWORD v4[19]; // [rsp+20h] [rbp-A8h] BYREF
  ULONG v5; // [rsp+D0h] [rbp+8h] BYREF

  v5 = a1;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  SepGetStackTraceHash(&v5);
  v1 = v5;
  v2 = v5 ^ BYTE2(v5) ^ ((unsigned __int16)(v5 ^ HIWORD(v5)) >> 8);
  EtwTraceLpacAccessFailure(v5);
  if ( !SeLpacEnableWatsonReporting )
    return 3221226326LL;
  if ( SeLpacEnableWatsonThrottling )
  {
    if ( _interlockedbittestandset(&dword_14050EC90[(unsigned __int64)v2 >> 5], v2 & 0x1F) )
      return 0LL;
    v1 = v5;
  }
  memset(v4, 0, sizeof(v4));
  v4[2] = 0LL;
  v4[5] = v1;
  v4[0] = 3221226505LL;
  LODWORD(v4[3]) = 2;
  v4[4] = 43LL;
  return DbgkQueueUserExceptionReport(KeGetCurrentThread());
}

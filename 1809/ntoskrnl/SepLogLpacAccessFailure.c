/*
 * XREFs of SepLogLpacAccessFailure @ 0x1402FEDF0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     SepGetStackTraceHash @ 0x1402FECEC (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x1408118BC (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x1408C1BF4 (EtwTraceLpacAccessFailure.c)
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
    if ( _interlockedbittestandset(&dword_1404E25B0[(unsigned __int64)v2 >> 5], v2 & 0x1F) )
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

/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405D2160
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402848B0 (IoRevokeHandlesForProcess.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     ObGetProcessHandleCount @ 0x1405B4960 (ObGetProcessHandleCount.c)
 *     ObDuplicateObject @ 0x1405D1B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E9390 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     PspRundownSingleProcess @ 0x140604A48 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x14060A2E4 (ObInitProcess.c)
 *     ObCompleteObjectDuplication @ 0x140613FA0 (ObCompleteObjectDuplication.c)
 *     PspApplyMitigationOptions @ 0x14064EF50 (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x14066ED30 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 *     ObSetHandleAttributes @ 0x14068EA90 (ObSetHandleAttributes.c)
 *     ObFindHandleForObject @ 0x140690BE0 (ObFindHandleForObject.c)
 *     ObQueryObjectAuditingByHandle @ 0x140698B40 (ObQueryObjectAuditingByHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A6BC8 (ObCaptureObjectStateForDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x14081F908 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14082847C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1408899B4 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408C0124 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 95;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 95) )
  {
    Count = a1[131].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}

/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405D1160
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1402845C0 (IoRevokeHandlesForProcess.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     ObGetProcessHandleCount @ 0x1405B3960 (ObGetProcessHandleCount.c)
 *     ObDuplicateObject @ 0x1405D0B70 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     ObpCloseHandle @ 0x1405F573C (ObpCloseHandle.c)
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406092E4 (ObInitProcess.c)
 *     ObCompleteObjectDuplication @ 0x140612FA0 (ObCompleteObjectDuplication.c)
 *     PspApplyMitigationOptions @ 0x14064DDB0 (PspApplyMitigationOptions.c)
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C60 (NtSetInformationProcess.c)
 *     ObSetHandleAttributes @ 0x14068D8F0 (ObSetHandleAttributes.c)
 *     ObFindHandleForObject @ 0x14068FA40 (ObFindHandleForObject.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406979A0 (ObQueryObjectAuditingByHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A5948 (ObCaptureObjectStateForDuplication.c)
 *     IopQueryProcessIdsUsingFile @ 0x14081E728 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14082729C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x140888774 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408BEE84 (EtwpObjectHandleRundown.c)
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

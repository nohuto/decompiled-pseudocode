/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405E67C4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299A00 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1405E61D0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x14060EFC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14060F0D0 (ObSetHandleAttributes.c)
 *     ObpCloseHandle @ 0x14060F2BC (ObpCloseHandle.c)
 *     ObCompleteObjectDuplication @ 0x14063FF80 (ObCompleteObjectDuplication.c)
 *     ObInitProcess @ 0x140671FD0 (ObInitProcess.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     PspApplyMitigationOptions @ 0x140691394 (PspApplyMitigationOptions.c)
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 *     ObFindHandleForObject @ 0x1406BAB40 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406CB8FC (ObCaptureObjectStateForDuplication.c)
 *     ObGetProcessHandleCount @ 0x1406CD780 (ObGetProcessHandleCount.c)
 *     IopQueryProcessIdsUsingFile @ 0x140858698 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408616FC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1408C66D4 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408FBC24 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 96;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 96) )
  {
    Count = a1[131].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}

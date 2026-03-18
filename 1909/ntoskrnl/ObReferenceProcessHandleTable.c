/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405E6F94
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140299760 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     ObDuplicateObject @ 0x1405E69A0 (ObDuplicateObject.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x140610AD0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x140610BE0 (ObSetHandleAttributes.c)
 *     ObpCloseHandle @ 0x140610DCC (ObpCloseHandle.c)
 *     ObCompleteObjectDuplication @ 0x140653AD0 (ObCompleteObjectDuplication.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     ObInitProcess @ 0x140680D70 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x140684904 (PspApplyMitigationOptions.c)
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 *     ObFindHandleForObject @ 0x1406B62D0 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406CA72C (ObCaptureObjectStateForDuplication.c)
 *     ObGetProcessHandleCount @ 0x1406CC5B0 (ObGetProcessHandleCount.c)
 *     IopQueryProcessIdsUsingFile @ 0x140857D98 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140860DFC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1408C5FB4 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1408FB604 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
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

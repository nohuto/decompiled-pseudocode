/*
 * XREFs of MmGetSessionId @ 0x14001D880
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BB8 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x1405EBC10 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1405ECB60 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x1405F9BB0 (ExpGetProcessInformation.c)
 *     ExCallSessionCallBack @ 0x140639448 (ExCallSessionCallBack.c)
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     EtwpPsProvTraceProcess @ 0x140683C20 (EtwpPsProvTraceProcess.c)
 *     PspInitializeProcessSecurity @ 0x1406853A0 (PspInitializeProcessSecurity.c)
 *     PspBindProcessSessionToJob @ 0x140688D60 (PspBindProcessSessionToJob.c)
 *     EtwpStartLogger @ 0x1406A8918 (EtwpStartLogger.c)
 *     SeExchangePrimaryToken @ 0x14074AC24 (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408871F8 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x1408B592C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408FB7DC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x14090873C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1788) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}

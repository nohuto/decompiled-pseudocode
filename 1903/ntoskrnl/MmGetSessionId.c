/*
 * XREFs of MmGetSessionId @ 0x14001D490
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BA4 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1405EC390 (PsGetThreadSessionId.c)
 *     ExpGetProcessInformation @ 0x1405F8B60 (ExpGetProcessInformation.c)
 *     ExCallSessionCallBack @ 0x1406361E8 (ExCallSessionCallBack.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     EtwpPsProvTraceProcess @ 0x1406906B0 (EtwpPsProvTraceProcess.c)
 *     PspInitializeProcessSecurity @ 0x140691E30 (PspInitializeProcessSecurity.c)
 *     PspBindProcessSessionToJob @ 0x1406957F0 (PspBindProcessSessionToJob.c)
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     SeExchangePrimaryToken @ 0x14078038C (SeExchangePrimaryToken.c)
 *     MmGetSessionMappedViewInformation @ 0x1408879CC (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x1408B605C (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408FBDFC (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x140908CDC (ExGetSessionBigPoolInformation.c)
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

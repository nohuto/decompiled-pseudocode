/*
 * XREFs of MmGetSessionId @ 0x1400897B0
 * Callers:
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     ExpGetProcessInformation @ 0x1405E6B60 (ExpGetProcessInformation.c)
 *     PsInvokeWin32Callout @ 0x1405F4E90 (PsInvokeWin32Callout.c)
 *     PsGetThreadSessionId @ 0x1405F6300 (PsGetThreadSessionId.c)
 *     PspBindProcessSessionToJob @ 0x140605480 (PspBindProcessSessionToJob.c)
 *     PspInitializeProcessSecurity @ 0x14064E814 (PspInitializeProcessSecurity.c)
 *     EtwpStartLogger @ 0x1406591A0 (EtwpStartLogger.c)
 *     EtwpPsProvTraceProcess @ 0x14066C050 (EtwpPsProvTraceProcess.c)
 *     NtQueryInformationProcess @ 0x14066DB70 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     MmCreatePeb @ 0x140678530 (MmCreatePeb.c)
 *     ExCallSessionCallBack @ 0x14069E824 (ExCallSessionCallBack.c)
 *     MmGetSessionMappedViewInformation @ 0x14084C4A0 (MmGetSessionMappedViewInformation.c)
 *     PopInputDisabled @ 0x140878E78 (PopInputDisabled.c)
 *     EtwpPoolRunDown @ 0x1408BF034 (EtwpPoolRunDown.c)
 *     ExGetSessionBigPoolInformation @ 0x1408CB33C (ExGetSessionBigPoolInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionId(__int64 a1)
{
  __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  v1 = *(_QWORD *)(a1 + 1024);
  if ( !v1 || (*(_DWORD *)(a1 + 1740) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}

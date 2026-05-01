/*
 * XREFs of ?RmpSystemSetProcessAllowedCpuSets@@YAJPEAXPEA_K@Z @ 0x180044DFC
 * Callers:
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044690 (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180068F7C (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

NTSTATUS __fastcall RmpSystemSetProcessAllowedCpuSets(HANDLE ProcessHandle, PVOID ProcessInformation)
{
  ULONG v2; // ebx
  WORD MaximumProcessorGroupCount; // ax
  DWORD LastError; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  DWORD *p_LastError; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]

  v2 = 0;
  if ( !ProcessInformation )
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v2 = 8 * MaximumProcessorGroupCount;
    return NtSetInformationProcess(ProcessHandle, ProcessVmCounters|0x40, ProcessInformation, v2);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      LastError = GetLastError();
      p_LastError = &LastError;
      v10 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009674C, 0LL, 0LL, 3u, &pData);
    }
  }
  return -1073739509;
}

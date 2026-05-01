/*
 * XREFs of ?RmpSystemSetWorkloadAllowedCpuSets@@YAJPEA_KW4_THREAD_WORKLOAD_CLASS@@@Z @ 0x180044AF0
 * Callers:
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x180044990 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180049292 (memcpy_0.c)
 */

NTSTATUS __fastcall RmpSystemSetWorkloadAllowedCpuSets(const void *a1, int a2)
{
  __int64 v2; // rsi
  ULONG v4; // ebx
  WORD MaximumProcessorGroupCount; // cx
  DWORD LastError; // [rsp+30h] [rbp-118h] BYREF
  __int64 SystemInformation; // [rsp+40h] [rbp-108h] BYREF
  _BYTE v9[168]; // [rsp+48h] [rbp-100h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-58h] BYREF
  DWORD *p_LastError; // [rsp+110h] [rbp-38h]
  __int64 v12; // [rsp+118h] [rbp-30h]

  v2 = a2;
  v4 = 8;
  if ( !a1 )
    goto LABEL_2;
  MaximumProcessorGroupCount = GetMaximumProcessorGroupCount();
  if ( MaximumProcessorGroupCount )
  {
    v4 = 8 * MaximumProcessorGroupCount + 8;
    memcpy_0(v9, a1, 8LL * MaximumProcessorGroupCount);
LABEL_2:
    SystemInformation = v2;
    return NtSetSystemInformation(SystemFirmwareTableInformation|0x80, &SystemInformation, v4);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      LastError = GetLastError();
      p_LastError = &LastError;
      v12 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18009674C, 0LL, 0LL, 3u, &pData);
    }
  }
  return -1073739509;
}

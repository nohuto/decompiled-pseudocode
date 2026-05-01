/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x18006678C
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180064AE0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  unsigned int v1; // r9d
  const struct _TlgProvider_t *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-39h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v7; // [rsp+48h] [rbp-21h]
  int v8; // [rsp+50h] [rbp-19h]
  _QWORD v9[3]; // [rsp+58h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  unsigned int *v11; // [rsp+90h] [rbp+27h]
  int v12; // [rsp+98h] [rbp+2Fh]
  int v13; // [rsp+9Ch] [rbp+33h]
  __int64 *v14; // [rsp+A0h] [rbp+37h]
  int v15; // [rsp+A8h] [rbp+3Fh]
  int v16; // [rsp+ACh] [rbp+43h]

  v5 = a1;
  v9[0] = 1LL;
  v9[1] = (unsigned __int64)(a1 + 4095) >> 12;
  v7 = v9;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v8 = 16;
  v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v4 = v1;
  if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
  {
    v13 = 0;
    v16 = 0;
    v11 = &v4;
    v14 = &v5;
    v12 = 4;
    v15 = 8;
    TlgWrite(v2, &unk_180088DC4, 0LL, 0LL, 4u, &pData);
    return v4;
  }
  return v1;
}

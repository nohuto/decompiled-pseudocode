/*
 * XREFs of ?RmpSystemTrimCompressionProcessPrivateWorkingSet@@YAJ_K@Z @ 0x1800738F4
 * Callers:
 *     ?RmpMemoryMonitorEmptySystemStore@@YA?AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_SYSTEM_MEMORY_METRICS@@1@Z @ 0x180071BD0 (-RmpMemoryMonitorEmptySystemStore@@YA-AW4_RM_REMEDIATION_STATUS@@PEAU_RM_MEMORY_MONITOR_DATA@@PE.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemTrimCompressionProcessPrivateWorkingSet(__int64 a1)
{
  unsigned int v1; // r9d
  const struct _TlgProvider_t *v2; // rcx
  unsigned int v4; // [rsp+30h] [rbp-39h] BYREF
  __int64 v5; // [rsp+38h] [rbp-31h] BYREF
  _DWORD SystemInformation[2]; // [rsp+40h] [rbp-29h] BYREF
  _DWORD *v7; // [rsp+48h] [rbp-21h]
  int v8; // [rsp+50h] [rbp-19h]
  _DWORD v9[2]; // [rsp+58h] [rbp-11h] BYREF
  unsigned __int64 v10; // [rsp+60h] [rbp-9h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp+7h] BYREF
  unsigned int *v12; // [rsp+90h] [rbp+27h]
  int v13; // [rsp+98h] [rbp+2Fh]
  int v14; // [rsp+9Ch] [rbp+33h]
  __int64 *v15; // [rsp+A0h] [rbp+37h]
  int v16; // [rsp+A8h] [rbp+3Fh]
  int v17; // [rsp+ACh] [rbp+43h]

  v9[1] = 0;
  v10 = (unsigned __int64)(a1 + 4095) >> 12;
  v5 = a1;
  v7 = v9;
  v9[0] = 1;
  SystemInformation[0] = 1;
  SystemInformation[1] = 21;
  v8 = 16;
  v1 = NtSetSystemInformation(SystemVerifierFaultsInformation|SystemLocksInformation, SystemInformation, 0x18u);
  v4 = v1;
  if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v14 = 0;
    v17 = 0;
    v12 = &v4;
    v15 = &v5;
    v13 = 4;
    v16 = 8;
    TlgWrite(v2, &unk_180096B46, 0LL, 0LL, 4u, &pData);
    return v4;
  }
  return v1;
}

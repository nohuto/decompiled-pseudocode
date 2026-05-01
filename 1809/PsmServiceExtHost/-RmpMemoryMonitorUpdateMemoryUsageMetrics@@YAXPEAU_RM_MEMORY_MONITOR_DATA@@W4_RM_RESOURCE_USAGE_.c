/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x180038474
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x1800407A0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpMemoryMonitorConvertResourceUsageLevel@@YA?AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE_USAGE_LEVEL@@@Z @ 0x180038518 (-RmpMemoryMonitorConvertResourceUsageLevel@@YA-AW4_RM_MEMORY_MONITOR_USAGE_LEVEL@@W4_RM_RESOURCE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp-49h] BYREF
  int v7; // [rsp+38h] [rbp-41h] BYREF
  int v8; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v9; // [rsp+40h] [rbp-39h] BYREF
  int v10; // [rsp+44h] [rbp-35h] BYREF
  int v11; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v13; // [rsp+70h] [rbp-9h]
  int v14; // [rsp+78h] [rbp-1h]
  int v15; // [rsp+7Ch] [rbp+3h]
  int *v16; // [rsp+80h] [rbp+7h]
  int v17; // [rsp+88h] [rbp+Fh]
  int v18; // [rsp+8Ch] [rbp+13h]
  int *v19; // [rsp+90h] [rbp+17h]
  int v20; // [rsp+98h] [rbp+1Fh]
  int v21; // [rsp+9Ch] [rbp+23h]
  int *v22; // [rsp+A0h] [rbp+27h]
  int v23; // [rsp+A8h] [rbp+2Fh]
  int v24; // [rsp+ACh] [rbp+33h]
  int *v25; // [rsp+B0h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+3Fh]
  int v27; // [rsp+BCh] [rbp+43h]

  LODWORD(v6) = RmpMemoryMonitorConvertResourceUsageLevel(a2);
  HIDWORD(v6) = RmpMemoryMonitorConvertResourceUsageLevel(v3);
  result = *(_QWORD *)(a1 + 96);
  if ( result != v6 )
  {
    v7 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v6, 8LL, 0LL);
    if ( dword_18009B0B0 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v15 = 0;
        v18 = 0;
        v21 = 0;
        v24 = 0;
        v27 = 0;
        v13 = &v7;
        v8 = *(_DWORD *)(a1 + 96);
        v16 = &v8;
        v9 = v6;
        v19 = &v9;
        v10 = *(_DWORD *)(a1 + 100);
        v22 = &v10;
        v11 = HIDWORD(v6);
        v25 = &v11;
        v14 = 4;
        v17 = 4;
        v20 = 4;
        v23 = 4;
        v26 = 4;
        TlgWrite(v5, &unk_180087EBA, 0LL, 0LL, 7u, &pData);
      }
    }
    result = v6;
    *(_QWORD *)(a1 + 96) = v6;
  }
  return result;
}

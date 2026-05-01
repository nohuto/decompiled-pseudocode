/*
 * XREFs of ?RmpMemoryMonitorUpdateMemoryUsageMetrics@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@W4_RM_RESOURCE_USAGE_LEVEL@@1@Z @ 0x1800392C8
 * Callers:
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x180044F30 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall RmpMemoryMonitorUpdateMemoryUsageMetrics(__int64 a1, int a2, int a3)
{
  int v4; // r9d
  int v5; // eax
  __int64 result; // rax
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // [rsp+30h] [rbp-49h] BYREF
  int v9; // [rsp+38h] [rbp-41h] BYREF
  int v10; // [rsp+3Ch] [rbp-3Dh] BYREF
  int v11; // [rsp+40h] [rbp-39h] BYREF
  int v12; // [rsp+44h] [rbp-35h] BYREF
  int v13; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v15; // [rsp+70h] [rbp-9h]
  int v16; // [rsp+78h] [rbp-1h]
  int v17; // [rsp+7Ch] [rbp+3h]
  int *v18; // [rsp+80h] [rbp+7h]
  int v19; // [rsp+88h] [rbp+Fh]
  int v20; // [rsp+8Ch] [rbp+13h]
  int *v21; // [rsp+90h] [rbp+17h]
  int v22; // [rsp+98h] [rbp+1Fh]
  int v23; // [rsp+9Ch] [rbp+23h]
  int *v24; // [rsp+A0h] [rbp+27h]
  int v25; // [rsp+A8h] [rbp+2Fh]
  int v26; // [rsp+ACh] [rbp+33h]
  int *v27; // [rsp+B0h] [rbp+37h]
  int v28; // [rsp+B8h] [rbp+3Fh]
  int v29; // [rsp+BCh] [rbp+43h]

  v4 = 2;
  if ( a2 <= 1 )
    goto LABEL_2;
  if ( a2 == 2 )
  {
    v5 = 1;
  }
  else
  {
    if ( (unsigned int)(a2 - 3) > 1 )
    {
LABEL_2:
      v5 = 0;
      goto LABEL_3;
    }
    v5 = 2;
  }
LABEL_3:
  LODWORD(v8) = v5;
  if ( a3 <= 1 )
  {
LABEL_4:
    v4 = 0;
    goto LABEL_5;
  }
  if ( a3 == 2 )
  {
    v4 = 1;
  }
  else if ( (unsigned int)(a3 - 3) > 1 )
  {
    goto LABEL_4;
  }
LABEL_5:
  result = *(_QWORD *)(a1 + 96);
  HIDWORD(v8) = v4;
  if ( result != v8 )
  {
    v9 = RtlPublishWnfStateData(WNF_RM_MEMORY_MONITOR_USAGE_METRICS, 0LL, &v8, 8LL, 0LL);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
      {
        v17 = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        v15 = &v9;
        v10 = *(_DWORD *)(a1 + 96);
        v18 = &v10;
        v11 = v8;
        v21 = &v11;
        v12 = *(_DWORD *)(a1 + 100);
        v24 = &v12;
        v13 = HIDWORD(v8);
        v27 = &v13;
        v16 = 4;
        v19 = 4;
        v22 = 4;
        v25 = 4;
        v28 = 4;
        TlgWrite(v7, &unk_180095BC2, 0LL, 0LL, 7u, &pData);
      }
    }
    result = v8;
    *(_QWORD *)(a1 + 96) = v8;
  }
  return result;
}

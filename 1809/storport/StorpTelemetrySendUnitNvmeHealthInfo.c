/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C005159C
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00108E0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     McTemplateK0quuujjzsszxqqbr12uhqbr16 @ 0x1C002A258 (McTemplateK0quuujjzsszxqqbr12uhqbr16.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0050E38 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0050F8C (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C0051294 (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  void (__fastcall *v2)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // rdi
  __int64 v3; // r15
  unsigned int *v4; // rbp
  __int64 v5; // r14
  unsigned __int16 v6; // bx
  __int16 v7; // r12
  unsigned int *PoolWithTag; // rax
  unsigned int *v9; // r13
  NTSTATUS LogPage; // eax
  char v11; // r10
  void *v12; // r9
  bool v13; // zf
  const unsigned __int16 *v14; // rdx
  unsigned __int64 v15; // r8
  int v16; // eax
  __int64 v17; // r9
  const struct _MCGEN_TRACE_CONTEXT *p_Logger; // rdi
  int v19; // [rsp+68h] [rbp-A0h]
  unsigned __int64 v20; // [rsp+B0h] [rbp-58h]
  char v21; // [rsp+110h] [rbp+8h]
  unsigned __int16 v22; // [rsp+118h] [rbp+10h]
  unsigned __int64 v23; // [rsp+128h] [rbp+20h]

  v2 = 0LL;
  v22 = 0;
  v3 = 0LL;
  v21 = 0;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0LL;
  v23 = 0LL;
  v6 = 0;
  v7 = 0;
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v9 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v22 = 216;
    v3 = (__int64)v9 + v9[6] + 8;
    v20 = *(_QWORD *)(v3 + 48);
    v23 = *(_QWORD *)(v3 + 56);
    *(_BYTE *)(a1 + 1996) = *(_BYTE *)v3;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 8) != 0 )
  {
    v11 = 0;
    goto LABEL_14;
  }
  v4 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  if ( !v4 )
  {
    v12 = 0LL;
    v11 = 0;
    goto LABEL_15;
  }
  LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v4);
  if ( LogPage < 0 )
  {
    v11 = 0;
    if ( LogPage != -1073741670 )
    {
      v16 = *(_DWORD *)(a1 + 1992);
      if ( (v16 & 1) == 0 )
        *(_DWORD *)(a1 + 1992) = v16 | 8;
    }
    goto LABEL_14;
  }
  v11 = -64;
  v5 = (__int64)v4 + v4[6] + 8;
  v21 = -64;
  if ( *(_BYTE *)(v5 + 509) )
  {
LABEL_13:
    v6 = *((_WORD *)v4 + 14);
    v7 = -1;
LABEL_14:
    v12 = 0LL;
    goto LABEL_15;
  }
  v7 = *(_WORD *)(v5 + 510);
  if ( v7 )
  {
    if ( v7 == 1 )
    {
      v6 = 88;
      goto LABEL_10;
    }
    goto LABEL_13;
  }
  v6 = 55;
LABEL_10:
  v2 = *(void (__fastcall **)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))v5;
  v12 = *(void **)(v5 + 8);
LABEL_15:
  if ( v3 || v5 )
  {
    v13 = g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1;
    v14 = *(const unsigned __int16 **)(a1 + 3160);
    v15 = *(_QWORD *)(a1 + 3168);
    *(_QWORD *)(a1 + 3160) = 0LL;
    *(_QWORD *)(a1 + 3168) = 0LL;
    if ( v13 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_33;
    }
    if ( (*(_DWORD *)(a1 + 1992) & 0x20) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1996) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 450) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      ++g_StorpTraceLoggingCriticalEventsLogged;
      StorpTelemetryNvmeHealthCriticalInfo(
        (const struct _TlgProvider_t *)a1,
        (__int64)v14,
        v3,
        v22,
        v11,
        v7,
        v5,
        v6,
        v14,
        v15,
        v20,
        v23,
        v2,
        v12);
    }
    else
    {
LABEL_33:
      StorpTelemetryNvmeHealthInfo(
        (const struct _TlgProvider_t *)a1,
        (__int64)v14,
        v3,
        v22,
        v11,
        v7,
        v5,
        v6,
        v14,
        v15,
        v20,
        v23,
        v2,
        v12);
    }
    if ( (byte_1C00617E4 & 8) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 24);
      p_Logger = (const struct _MCGEN_TRACE_CONTEXT *)&stru_1C0055A88.Logger;
      if ( *(_QWORD *)(v17 + 5272) )
        p_Logger = *(const struct _MCGEN_TRACE_CONTEXT **)(v17 + 5272);
      McTemplateK0quuujjzsszxqqbr12uhqbr16(
        v22,
        *(unsigned __int8 *)(a1 + 1996),
        a1 + 169,
        *(_DWORD *)(v17 + 56),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        v17 + 5256,
        *(const struct _MCGEN_TRACE_CONTEXT **)(v17 + 4864),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 160),
        (const struct _MCGEN_TRACE_CONTEXT *)(a1 + 169),
        p_Logger,
        v19,
        *(_BYTE *)(a1 + 1996),
        v22,
        v3,
        v21,
        v7,
        v6,
        v5);
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
}

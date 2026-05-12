/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C004F914
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C0002400 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0023500 (memmove.c)
 *     memset @ 0x1C0023840 (memset.c)
 *     McTemplateK0quuujjzsssxqqbr12uhqbr16 @ 0x1C004B978 (McTemplateK0quuujjzsssxqqbr12uhqbr16.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C004F1B0 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C004F304 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C004F60C (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v2; // rsi
  unsigned __int16 v3; // r12
  unsigned int *v4; // r14
  __int64 v5; // rdi
  char v6; // r13
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r15
  unsigned int *v9; // rax
  NTSTATUS LogPage; // eax
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int16 v13; // ax
  size_t v14; // r8
  bool v15; // zf
  const unsigned __int16 *v16; // rdx
  unsigned __int64 v17; // r8
  int v18; // [rsp+70h] [rbp-C8h]
  __int16 v19; // [rsp+B8h] [rbp-80h]
  unsigned __int16 v20; // [rsp+BCh] [rbp-7Ch]
  void *v21; // [rsp+C0h] [rbp-78h]
  void (__fastcall *v22)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+C8h] [rbp-70h]
  unsigned __int64 v23; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v24; // [rsp+D8h] [rbp-60h]
  _BYTE v25[296]; // [rsp+E0h] [rbp-58h] BYREF

  v20 = 0;
  v19 = 0;
  v24 = 0LL;
  v2 = 0LL;
  v23 = 0LL;
  v3 = 0;
  v22 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v6 = 0;
  v25[8] = 0;
  memset(&v25[16], 0, 17);
  memset(&v25[40], 0, 0x100uLL);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v8 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v3 = 216;
    v2 = (__int64)v8 + v8[6] + 8;
    v24 = *(_QWORD *)(v2 + 48);
    v23 = *(_QWORD *)(v2 + 56);
    *(_BYTE *)(a1 + 1740) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 1736) & 8) == 0 )
  {
    v9 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
    v4 = v9;
    if ( v9 )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v9);
      if ( LogPage < 0
        || ((v5 = (__int64)v4 + v4[6] + 8, *(_WORD *)(v5 + 510) >= 0x10u) || *(_BYTE *)(v5 + 509)
          ? (v5 = 0LL, LogPage = -1073741637)
          : (v19 = *(_WORD *)(v5 + 510),
             v6 = -64,
             v22 = *(void (__fastcall **)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))v5,
             v21 = *(void **)(v5 + 8),
             v20 = 55),
            LogPage < 0) )
      {
        if ( LogPage != -1073741670 )
        {
          v11 = *(_DWORD *)(a1 + 1736);
          if ( (v11 & 1) == 0 )
            *(_DWORD *)(a1 + 1736) = v11 | 8;
        }
      }
    }
  }
  if ( v2 || v5 )
  {
    v12 = *(_QWORD *)(a1 + 104);
    if ( v12 )
    {
      *(_QWORD *)v25 = *(_QWORD *)(v12 + 8);
      *(_OWORD *)&v25[16] = *(_OWORD *)(v12 + 16);
    }
    if ( *(_WORD *)(a1 + 114) )
    {
      v13 = *(_WORD *)(a1 + 112);
      v14 = 255LL;
      if ( v13 < 0xFFu )
        v14 = v13;
      memmove(&v25[40], *(const void **)(a1 + 120), v14);
    }
    v15 = g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1;
    v16 = *(const unsigned __int16 **)(a1 + 2688);
    v17 = *(_QWORD *)(a1 + 2696);
    *(_QWORD *)(a1 + 2688) = 0LL;
    *(_QWORD *)(a1 + 2696) = 0LL;
    if ( v15 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_34;
    }
    if ( (*(_DWORD *)(a1 + 1736) & 0x10) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( *(_BYTE *)(a1 + 1740) )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( (*(_BYTE *)(a1 + 162) & 2) != 0 )
      g_StorpTraceLoggingCriticalEventEnabled = -1;
    if ( g_StorpTraceLoggingCriticalEventEnabled )
    {
      ++g_StorpTraceLoggingCriticalEventsLogged;
      StorpTelemetryNvmeHealthCriticalInfo(
        (const struct _TlgProvider_t *)a1,
        (__int64)v25,
        (__int64)&v25[16],
        &v25[40],
        v2,
        v3,
        v6,
        v19,
        v5,
        v20,
        v16,
        v17,
        v24,
        v23,
        v22,
        v21);
    }
    else
    {
LABEL_34:
      StorpTelemetryNvmeHealthInfo(
        (const struct _TlgProvider_t *)a1,
        (__int64)v25,
        (__int64)&v25[16],
        &v25[40],
        v2,
        v3,
        v6,
        v19,
        v5,
        v20,
        v16,
        v17,
        v24,
        v23,
        v22,
        v21);
    }
    if ( (byte_1C0061744 & 8) != 0 )
      McTemplateK0quuujjzsssxqqbr12uhqbr16(
        v3,
        *(unsigned __int8 *)(a1 + 1740),
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1720,
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(unsigned __int64 **)(*(_QWORD *)(a1 + 24) + 4800LL),
        (const struct _MCGEN_TRACE_CONTEXT *)v25,
        (const struct _MCGEN_TRACE_CONTEXT *)&v25[16],
        (struct _MCGEN_TRACE_CONTEXT *)&v25[40],
        v18,
        *(_BYTE *)(a1 + 1740),
        v3,
        v2,
        v6,
        v19,
        v20,
        v5);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x65546152u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x65546152u);
}

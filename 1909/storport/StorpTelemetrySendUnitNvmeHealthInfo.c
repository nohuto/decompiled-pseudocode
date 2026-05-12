/*
 * XREFs of StorpTelemetrySendUnitNvmeHealthInfo @ 0x1C0050A84
 * Callers:
 *     StorpDeviceHealthWorkItemRoutine @ 0x1C00023B0 (StorpDeviceHealthWorkItemRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     memmove @ 0x1C0024A80 (memmove.c)
 *     memset @ 0x1C0024DC0 (memset.c)
 *     McTemplateK0quuujjzsssxqqbr12uhqbr16 @ 0x1C004CAE8 (McTemplateK0quuujjzsssxqqbr12uhqbr16.c)
 *     StorpTelemetryNvmeGetLogPage @ 0x1C0050320 (StorpTelemetryNvmeGetLogPage.c)
 *     StorpTelemetryNvmeHealthCriticalInfo @ 0x1C0050474 (StorpTelemetryNvmeHealthCriticalInfo.c)
 *     StorpTelemetryNvmeHealthInfo @ 0x1C005077C (StorpTelemetryNvmeHealthInfo.c)
 */

void __fastcall StorpTelemetrySendUnitNvmeHealthInfo(__int64 a1)
{
  __int64 v2; // rsi
  unsigned int *v3; // r14
  __int64 v4; // rdi
  unsigned __int16 v5; // r12
  __int16 v6; // r15
  unsigned int *PoolWithTag; // rax
  unsigned int *v8; // r13
  NTSTATUS LogPage; // eax
  int v10; // eax
  __int64 v11; // rcx
  unsigned __int16 v12; // ax
  size_t v13; // r8
  const unsigned __int16 *v14; // rdx
  bool v15; // zf
  unsigned __int64 v16; // r8
  int v17; // [rsp+70h] [rbp-C8h]
  char v18; // [rsp+B8h] [rbp-80h]
  unsigned __int16 v19; // [rsp+BCh] [rbp-7Ch]
  void *v20; // [rsp+C0h] [rbp-78h]
  void (__fastcall *v21)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *); // [rsp+C8h] [rbp-70h]
  unsigned __int64 v22; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v23; // [rsp+D8h] [rbp-60h]
  _BYTE v24[296]; // [rsp+E0h] [rbp-58h] BYREF

  v19 = 0;
  v18 = 0;
  v23 = 0LL;
  v2 = 0LL;
  v22 = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v5 = 0;
  *(_QWORD *)v24 = 0LL;
  v6 = 0;
  v24[8] = 0;
  memset(&v24[16], 0, 17);
  memset(&v24[40], 0, 0x100uLL);
  PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
  v8 = PoolWithTag;
  if ( PoolWithTag && StorpTelemetryNvmeGetLogPage(a1, 2, PoolWithTag) >= 0 )
  {
    v19 = 216;
    v2 = (__int64)v8 + v8[6] + 8;
    v23 = *(_QWORD *)(v2 + 48);
    v22 = *(_QWORD *)(v2 + 56);
    *(_BYTE *)(a1 + 1996) = *(_BYTE *)v2;
  }
  if ( (*(_DWORD *)(a1 + 1992) & 8) == 0 )
  {
    v3 = (unsigned int *)ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x65546152u);
    if ( v3 )
    {
      LogPage = StorpTelemetryNvmeGetLogPage(a1, 192, v3);
      if ( LogPage >= 0 )
      {
        v18 = -64;
        v4 = (__int64)v3 + v3[6] + 8;
        if ( !*(_BYTE *)(v4 + 509) )
        {
          v6 = *(_WORD *)(v4 + 510);
          if ( !v6 )
          {
            v5 = 55;
LABEL_10:
            v21 = *(void (__fastcall **)(const _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, _EVENT_FILTER_DESCRIPTOR *, void *))v4;
            v20 = *(void **)(v4 + 8);
            goto LABEL_17;
          }
          if ( v6 == 1 )
          {
            v5 = 88;
            goto LABEL_10;
          }
        }
        v5 = *((_WORD *)v3 + 14);
        v6 = -1;
        goto LABEL_17;
      }
      if ( LogPage != -1073741670 )
      {
        v10 = *(_DWORD *)(a1 + 1992);
        if ( (v10 & 1) == 0 )
          *(_DWORD *)(a1 + 1992) = v10 | 8;
      }
    }
  }
LABEL_17:
  if ( v2 || v4 )
  {
    v11 = *(_QWORD *)(a1 + 104);
    if ( v11 )
    {
      *(_QWORD *)v24 = *(_QWORD *)(v11 + 8);
      *(_OWORD *)&v24[16] = *(_OWORD *)(v11 + 16);
    }
    if ( *(_WORD *)(a1 + 114) )
    {
      v12 = *(_WORD *)(a1 + 112);
      v13 = 255LL;
      if ( v12 < 0xFFu )
        v13 = v12;
      memmove(&v24[40], *(const void **)(a1 + 120), v13);
    }
    v14 = *(const unsigned __int16 **)(a1 + 2944);
    v15 = g_StorpTraceLoggingCriticalEventEnabledSetByRegistry == 1;
    v16 = *(_QWORD *)(a1 + 2952);
    *(_QWORD *)(a1 + 2944) = 0LL;
    *(_QWORD *)(a1 + 2952) = 0LL;
    if ( v15 && !g_StorpTraceLoggingCriticalEventEnabled
      || g_StorpTraceLoggingCriticalEventsLogged >= (unsigned int)g_StorpTraceLoggingCriticalEventMaximum )
    {
      goto LABEL_36;
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
        (__int64)v24,
        (__int64)&v24[16],
        &v24[40],
        v2,
        v19,
        v18,
        v6,
        v4,
        v5,
        v14,
        v16,
        v23,
        v22,
        v21,
        v20);
    }
    else
    {
LABEL_36:
      StorpTelemetryNvmeHealthInfo(
        (const struct _TlgProvider_t *)a1,
        (__int64)v24,
        (__int64)&v24[16],
        &v24[40],
        v2,
        v19,
        v18,
        v6,
        v4,
        v5,
        v14,
        v16,
        v23,
        v22,
        v21,
        v20);
    }
    if ( (byte_1C0062744 & 8) != 0 )
      McTemplateK0quuujjzsssxqqbr12uhqbr16(
        v19,
        *(unsigned __int8 *)(a1 + 1996),
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
        *(_BYTE *)(a1 + 96),
        *(_BYTE *)(a1 + 97),
        *(_BYTE *)(a1 + 98),
        a1 + 1976,
        *(_QWORD *)(a1 + 24) + 5128LL,
        *(char **)(*(_QWORD *)(a1 + 24) + 4800LL),
        (const struct _MCGEN_TRACE_CONTEXT *)v24,
        (const struct _MCGEN_TRACE_CONTEXT *)&v24[16],
        (struct _MCGEN_TRACE_CONTEXT *)&v24[40],
        v17,
        *(_BYTE *)(a1 + 1996),
        v19,
        v2,
        v18,
        v6,
        v5,
        v4);
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x65546152u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x65546152u);
}

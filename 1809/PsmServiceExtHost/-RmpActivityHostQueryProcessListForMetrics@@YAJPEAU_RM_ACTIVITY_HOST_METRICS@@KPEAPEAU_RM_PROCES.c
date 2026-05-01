/*
 * XREFs of ?RmpActivityHostQueryProcessListForMetrics@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAK@Z @ 0x180037084
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180036F1C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ??$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@PEAKK@Z @ 0x180055918 (--$RmpArrayGrow@U_RM_PROCESS_ID_HOST_METRICS_PAIR@@@@YAJPEAPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@.c)
 */

__int64 __fastcall RmpActivityHostQueryProcessListForMetrics(
        struct _RM_ACTIVITY_HOST_METRICS *a1,
        unsigned int a2,
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR **a3,
        unsigned int *a4)
{
  PVOID Heap; // rdi
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR *v7; // r8
  unsigned int v8; // ebx
  unsigned int v9; // r12d
  __int64 v10; // rsi
  unsigned int v11; // eax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  __int64 result; // rax
  unsigned int v18; // [rsp+40h] [rbp-49h] BYREF
  unsigned int v19; // [rsp+44h] [rbp-45h] BYREF
  PVOID P; // [rsp+48h] [rbp-41h] BYREF
  int v21; // [rsp+50h] [rbp-39h]
  unsigned int v22; // [rsp+54h] [rbp-35h] BYREF
  struct _RM_PROCESS_ID_HOST_METRICS_PAIR **v23; // [rsp+58h] [rbp-31h]
  unsigned int *v24; // [rsp+60h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-21h] BYREF
  unsigned int *v26; // [rsp+88h] [rbp-1h]
  int v27; // [rsp+90h] [rbp+7h]
  int v28; // [rsp+94h] [rbp+Bh]

  v23 = a3;
  v24 = a4;
  v21 = 1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8uLL);
  if ( !Heap )
    return 3221225495LL;
  v22 = a2;
  P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 16LL * a2);
  v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
  if ( P )
  {
    v8 = 0;
    v9 = 0;
    if ( a2 )
    {
      while ( 2 )
      {
        v10 = *((_QWORD *)a1 + 6);
        v11 = v21;
        while ( 1 )
        {
          v19 = v11;
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, PVOID, unsigned int *))(*(_QWORD *)(*(_QWORD *)(v10 + 48) + 40LL) + 72LL))(
                  v10 + 552,
                  *(unsigned int *)(v10 + 620),
                  v10 + 88,
                  *(unsigned int *)(v10 + 624),
                  *(_QWORD *)(v10 + 32),
                  Heap,
                  &v19);
          v18 = v12;
          if ( v12 >= 0 )
            break;
          if ( v12 != -2147483643 )
          {
            if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
            {
              v28 = 0;
              v26 = &v18;
              v27 = 4;
              TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180086422, 0LL, 0LL, 3u, &pData);
            }
LABEL_16:
            v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
            goto LABEL_11;
          }
          Heap = RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Heap, 8LL * v19);
          if ( !Heap )
          {
            result = 3221225495LL;
            v18 = -1073741801;
            goto LABEL_14;
          }
          v11 = v19;
          v21 = v19;
        }
        v13 = v19;
        if ( !v19 )
          goto LABEL_16;
        if ( v22 - v8 < v19 )
        {
          v18 = RmpArrayGrow<_RM_PROCESS_ID_HOST_METRICS_PAIR>(&P, &v22, v19 + v8);
          if ( v18 )
            goto LABEL_13;
          v13 = v19;
        }
        v14 = 0LL;
        if ( !v13 )
          goto LABEL_16;
        v7 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)P;
        do
        {
          v15 = *((_DWORD *)Heap + 2 * v14);
          v14 = (unsigned int)(v14 + 1);
          v16 = v8++;
          v16 *= 2LL;
          *((_DWORD *)v7 + 2 * v16 + 2) = v15;
          *((_QWORD *)v7 + v16) = a1;
        }
        while ( (unsigned int)v14 < v19 );
LABEL_11:
        ++v9;
        a1 = (struct _RM_ACTIVITY_HOST_METRICS *)((char *)a1 + 64);
        if ( v9 < a2 )
          continue;
        break;
      }
    }
    P = 0LL;
    v18 = 0;
    *v23 = v7;
    *v24 = v8;
  }
  else
  {
    v18 = -1073741801;
  }
LABEL_13:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  result = v18;
LABEL_14:
  if ( P )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
    return v18;
  }
  return result;
}

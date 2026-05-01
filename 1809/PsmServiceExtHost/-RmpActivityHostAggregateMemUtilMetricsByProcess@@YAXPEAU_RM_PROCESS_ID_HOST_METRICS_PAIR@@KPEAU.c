/*
 * XREFs of ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180037238
 * Callers:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180036F1C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800374A8 (-RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpActivityHostAggregateMemUtilMetricsByProcess(
        struct _RM_PROCESS_ID_HOST_METRICS_PAIR *a1,
        unsigned int a2,
        struct _MEMUTIL_PROCESS_METRICS *a3,
        __int16 a4)
{
  __int64 v4; // rbx
  __int64 v8; // rsi
  __int16 v9; // bx
  char *v10; // rdi
  __int64 v11; // r14
  int v12; // r9d
  __int64 v13; // rcx
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v16; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B8h]
  __int64 v18; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v19[16]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h]
  __int64 v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  __int16 v23; // [rsp+A6h] [rbp-62h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-60h] BYREF
  __int64 *v25; // [rsp+C8h] [rbp-40h]
  __int64 v26; // [rsp+D0h] [rbp-38h]
  int *v27; // [rsp+D8h] [rbp-30h]
  __int64 v28; // [rsp+E0h] [rbp-28h]
  int *v29; // [rsp+E8h] [rbp-20h]
  __int64 v30; // [rsp+F0h] [rbp-18h]
  __int64 *v31; // [rsp+F8h] [rbp-10h]
  __int64 v32; // [rsp+100h] [rbp-8h]
  char *v33; // [rsp+108h] [rbp+0h]
  __int64 v34; // [rsp+110h] [rbp+8h]
  char *v35; // [rsp+118h] [rbp+10h]
  __int64 v36; // [rsp+120h] [rbp+18h]
  char *v37; // [rsp+128h] [rbp+20h]
  __int64 v38; // [rsp+130h] [rbp+28h]

  v4 = a2;
  memset_0(v19, 0, 0x40uLL);
  v8 = 0LL;
  if ( (_DWORD)v4 )
  {
    v17 = v4;
    v9 = v23;
    v10 = (char *)a3 + 4;
    do
    {
      v11 = *(_QWORD *)a1;
      if ( *(_QWORD *)a1 != v8 )
      {
        if ( v8 )
        {
          RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v8, (struct _RM_ACTIVITY_HOST_METRICS *)v19);
          v11 = *(_QWORD *)a1;
        }
        memset_0(v19, 0, 0x40uLL);
        v9 = a4;
        v23 = a4;
        v8 = v11;
      }
      if ( dword_18009B0B0 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL);
        v25 = &v18;
        v14 = *((_DWORD *)v10 - 1);
        v27 = &v14;
        v29 = &v15;
        LODWORD(v16) = *(_DWORD *)v10;
        v31 = &v16;
        v33 = v10 + 12;
        v35 = v10 + 20;
        v37 = v10 + 44;
        v18 = v13;
        v26 = 8LL;
        v28 = 4LL;
        v15 = v12;
        v30 = 4LL;
        v32 = 4LL;
        v34 = 8LL;
        v36 = 8LL;
        v38 = 8LL;
        TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180086185, 0LL, 0LL, 9u, &pData);
      }
      if ( (a4 & 4) != 0 )
      {
        if ( (*v10 & 8) != 0 )
        {
          v20 += *(_QWORD *)(v10 + 20);
        }
        else
        {
          v9 &= ~4u;
          v23 = v9;
        }
      }
      if ( (a4 & 8) != 0 )
      {
        if ( (*v10 & 1) != 0 )
        {
          v21 += *(_QWORD *)(v10 + 12);
        }
        else
        {
          v9 &= ~8u;
          v23 = v9;
        }
      }
      if ( (a4 & 0x20) != 0 )
      {
        if ( (*v10 & 0x40) != 0 )
        {
          v22 += *(_QWORD *)(v10 + 44);
        }
        else
        {
          v9 &= ~0x20u;
          v23 = v9;
        }
      }
      a1 = (struct _RM_PROCESS_ID_HOST_METRICS_PAIR *)((char *)a1 + 16);
      v10 += 64;
      --v17;
    }
    while ( v17 );
  }
  RmpCopyMemUtilHostMetrics((struct _RM_ACTIVITY_HOST_METRICS *)v8, (struct _RM_ACTIVITY_HOST_METRICS *)v19);
}

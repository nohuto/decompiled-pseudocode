/*
 * XREFs of ?RmpCopyMemUtilHostMetrics@@YAXPEAU_RM_ACTIVITY_HOST_METRICS@@0@Z @ 0x1800374A8
 * Callers:
 *     ?RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU_MEMUTIL_PROCESS_METRICS@@G@Z @ 0x180037238 (-RmpActivityHostAggregateMemUtilMetricsByProcess@@YAXPEAU_RM_PROCESS_ID_HOST_METRICS_PAIR@@KPEAU.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCopyMemUtilHostMetrics(struct _RM_ACTIVITY_HOST_METRICS *a1, struct _RM_ACTIVITY_HOST_METRICS *a2)
{
  __int16 v2; // r8
  __int16 v3; // r9
  __int16 v4; // r8
  __int16 v5; // r8
  __int16 v6; // r8

  v2 = *((_WORD *)a1 + 31);
  v3 = *((_WORD *)a2 + 31) & 0x2C;
  if ( (*((_BYTE *)a2 + 62) & 4) != 0 )
  {
    v3 = *((_WORD *)a2 + 31) & 0x28;
    *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
    v4 = v2 | 4;
  }
  else
  {
    v4 = v2 & 0xFFFB;
  }
  *((_WORD *)a1 + 31) = v4;
  if ( (v3 & 8) != 0 )
  {
    LOBYTE(v3) = v3 & 0xF7;
    *((_QWORD *)a1 + 3) = *((_QWORD *)a2 + 3);
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xFFF7;
  }
  *((_WORD *)a1 + 31) = v5;
  if ( (v3 & 0x20) != 0 )
  {
    v6 = v5 | 0x20;
    *((_QWORD *)a1 + 4) = *((_QWORD *)a2 + 4);
  }
  else
  {
    v6 = v5 & 0xFFDF;
  }
  *((_WORD *)a1 + 31) = v6 & 0xFFEF;
}

/*
 * XREFs of ?RmpPolicyIsActivityHostSwappable@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180036EAC
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180024E90 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z @ 0x180036F1C (-RmpSystemQueryMemUtilMetricsForHosts@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KG@Z.c)
 *     ?RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z @ 0x180037790 (-RmpSystemIsActivityHostTooLargeForSwap@@YAJPEAU_RM_ACTIVITY_HOST_METRICS@@KPEAK@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

bool __fastcall RmpPolicyIsActivityHostSwappable(struct _RM_ACTIVITY_HOST *a1)
{
  _BYTE v3[48]; // [rsp+20h] [rbp-48h] BYREF
  struct _RM_ACTIVITY_HOST *v4; // [rsp+50h] [rbp-18h]
  char v5; // [rsp+5Eh] [rbp-Ah]
  unsigned int v6; // [rsp+70h] [rbp+8h] BYREF

  memset_0(v3, 0, 0x40uLL);
  v4 = a1;
  RmpSystemQueryMemUtilMetricsForHosts((struct _RM_ACTIVITY_HOST_METRICS *)v3, 1u, 8u);
  return (v5 & 8) == 0
      || (int)RmpSystemIsActivityHostTooLargeForSwap(
                (struct _RM_ACTIVITY_HOST_METRICS *)v3,
                *(_DWORD *)(*((_QWORD *)a1 + 6) + 528LL),
                &v6) < 0
      || v6 == 0;
}

/*
 * XREFs of ?RmpSystemResourceTimerReset@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAXK@Z @ 0x18003DC40
 * Callers:
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x1800493C0 (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpSystemResourceTimerReset(struct _RM_HAM_ACTIVITY_HOST *a1, void *a2, unsigned int a3)
{
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL) + 192LL))(a2, a3);
}

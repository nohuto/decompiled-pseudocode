/*
 * XREFs of ?RmpSystemResourceTimerSet@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@_KPEAX@Z @ 0x18003AE5C
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180010680 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x180011058 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025B20 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemResourceTimerSet(struct _RM_HAM_ACTIVITY_HOST *a1, __int64 a2, void *a3)
{
  __int64 v5; // rsi

  v5 = *(_QWORD *)(*((_QWORD *)a1 - 2) + 40LL);
  if ( (*(int (__fastcall **)(void *, __int64, _QWORD))(v5 + 192))(a3, a2, 0LL) < 0 )
    (*(void (__fastcall **)(void *, __int64, __int64))(v5 + 192))(a3, a2, 1LL);
}

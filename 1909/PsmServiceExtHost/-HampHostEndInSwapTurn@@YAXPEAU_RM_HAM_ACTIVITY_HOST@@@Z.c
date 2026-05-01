/*
 * XREFs of ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BFE0
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x1800182C0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 * Callees:
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180030900 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18003C038 (-HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 */

void __fastcall HampHostEndInSwapTurn(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rbx

  v1 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 97) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                              + 120)
                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
     - 168;
  HampManagerAcquireLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
  --*(_DWORD *)(v1 + 784);
  HampManagerTriggerInswapTurn((struct _HOST_ACTIVITY_MANAGER *)v1, 0);
  HampManagerReleaseLockExclusive((struct _HOST_ACTIVITY_MANAGER *)v1);
}

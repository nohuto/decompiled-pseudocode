/*
 * XREFs of ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18003C038
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BFE0 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerTriggerInswapTurn(struct _HOST_ACTIVITY_MANAGER *a1, int a2)
{
  _DWORD *v2; // rcx

  if ( *((struct _HOST_ACTIVITY_MANAGER **)a1 + 96) != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 768)
    && (a2 || !*((_DWORD *)a1 + 196)) )
  {
    v2 = (_DWORD *)((char *)a1 + 788);
    ++*v2;
    RtlWakeAddressAll(v2);
  }
}

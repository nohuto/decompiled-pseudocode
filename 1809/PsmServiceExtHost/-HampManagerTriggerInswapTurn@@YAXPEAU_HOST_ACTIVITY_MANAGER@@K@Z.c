/*
 * XREFs of ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x18003B6E8
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003B690 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerTriggerInswapTurn(struct _HOST_ACTIVITY_MANAGER *a1, int a2)
{
  _DWORD *v2; // rcx

  if ( *((struct _HOST_ACTIVITY_MANAGER **)a1 + 97) != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 776)
    && (a2 || !*((_DWORD *)a1 + 198)) )
  {
    v2 = (_DWORD *)((char *)a1 + 796);
    ++*v2;
    RtlWakeAddressAll(v2);
  }
}

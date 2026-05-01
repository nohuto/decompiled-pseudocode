/*
 * XREFs of ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002C3F0
 * Callers:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180029CD0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CB80 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002CBD4 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceSerialized(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)a1 + 94);
  if ( (*(_DWORD *)(v1 + 608) & 0x80000) != 0 )
    return *(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                  + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                     + 648) & 1;
  else
    return 0LL;
}

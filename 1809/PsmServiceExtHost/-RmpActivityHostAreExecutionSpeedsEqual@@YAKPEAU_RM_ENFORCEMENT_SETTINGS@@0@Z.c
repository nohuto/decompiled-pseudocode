/*
 * XREFs of ?RmpActivityHostAreExecutionSpeedsEqual@@YAKPEAU_RM_ENFORCEMENT_SETTINGS@@0@Z @ 0x18003A8B8
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180021B80 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpActivityHostAreExecutionSpeedsEqual(
        struct _RM_ENFORCEMENT_SETTINGS *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  return *((_DWORD *)a1 + 6) == *((_DWORD *)a2 + 6) && ((*((_BYTE *)a2 + 28) ^ *((_BYTE *)a1 + 28)) & 2) == 0;
}

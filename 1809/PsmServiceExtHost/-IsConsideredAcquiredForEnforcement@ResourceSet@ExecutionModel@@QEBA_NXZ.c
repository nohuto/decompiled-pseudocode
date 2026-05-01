/*
 * XREFs of ?IsConsideredAcquiredForEnforcement@ResourceSet@ExecutionModel@@QEBA_NXZ @ 0x18003CF68
 * Callers:
 *     ?RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18001B140 (-RmpActivityHostUpdateDigests@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180020460 (-RmpActivityHostUpdateImportance@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExecutionModel::ResourceSet::IsConsideredAcquiredForEnforcement(ExecutionModel::ResourceSet *this)
{
  return *((_DWORD *)this + 350) == 2 || (*((_BYTE *)this + 1452) & 4) != 0;
}

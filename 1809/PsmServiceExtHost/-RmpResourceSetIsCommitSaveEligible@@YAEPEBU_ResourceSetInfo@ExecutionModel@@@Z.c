/*
 * XREFs of ?RmpResourceSetIsCommitSaveEligible@@YAEPEBU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180055BE4
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z @ 0x18001F260 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_PARTITION@@PEAX@Z.c)
 * Callees:
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x180055A24 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 */

bool __fastcall RmpResourceSetIsCommitSaveEligible(const struct ExecutionModel::_ResourceSetInfo *a1)
{
  bool IsFrozen; // al
  __int64 v2; // r8
  char v3; // dl

  IsFrozen = ExecutionModel::_ResourceSetInfo::IsFrozen(a1);
  v3 = 0;
  if ( IsFrozen )
    return (*(_BYTE *)(v2 + 42) & 0x40) == 0;
  return v3;
}

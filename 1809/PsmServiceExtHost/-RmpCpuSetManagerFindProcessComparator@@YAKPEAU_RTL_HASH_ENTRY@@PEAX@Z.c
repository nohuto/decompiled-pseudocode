/*
 * XREFs of ?RmpCpuSetManagerFindProcessComparator@@YAKPEAU_RTL_HASH_ENTRY@@PEAX@Z @ 0x18005C6EC
 * Callers:
 *     ?RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z @ 0x18005C5A0 (-RmpCpuSetManagerFindProcess@@YAPEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_MANAGER@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RmpCpuSetManagerFindProcessComparator(struct _RTL_HASH_ENTRY *a1, void *a2)
{
  return (_DWORD)a2 == *((_DWORD *)a1 + 14);
}

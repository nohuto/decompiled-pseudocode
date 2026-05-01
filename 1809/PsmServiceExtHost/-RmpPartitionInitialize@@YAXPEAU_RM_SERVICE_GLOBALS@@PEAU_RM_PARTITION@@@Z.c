/*
 * XREFs of ?RmpPartitionInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@@Z @ 0x180047758
 * Callers:
 *     ?RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@Z @ 0x18001B710 (-RmpPartitionTableFindOrCreatePartition@@YAJPEAU_RM_PARTITION_TABLE@@PEAXPEAPEAU_RM_PARTITION@@@.c)
 * Callees:
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

void __fastcall RmpPartitionInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PARTITION *a2)
{
  memset_0(a2, 0, 0xE8uLL);
  *((_DWORD *)a2 + 56) &= 0xFFFFFFFC;
  *((_QWORD *)a2 + 3) = a1;
  *(_QWORD *)a2 = 1LL;
  *((_QWORD *)a2 + 26) = (char *)a2 + 200;
  *((_QWORD *)a2 + 25) = (char *)a2 + 200;
  memset_0((char *)a2 + 40, 0, 0x68uLL);
  *((_QWORD *)a2 + 5) = a2;
  *((_DWORD *)a2 + 28) = *((_DWORD *)a1 + 707);
  *((_DWORD *)a2 + 29) = *((_DWORD *)a1 + 708);
  *((_DWORD *)a2 + 31) = *((_DWORD *)a1 + 709);
  *((_DWORD *)a2 + 34) = 3;
  *((_DWORD *)a2 + 35) = 3;
}

/*
 * XREFs of PspComputeQuantumAndPriority @ 0x14064C430
 * Callers:
 *     PspSetProcessPriorityByClass @ 0x1400D7A5C (PspSetProcessPriorityByClass.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 * Callees:
 *     MmSetMemoryPriorityProcess @ 0x1400D7AA4 (MmSetMemoryPriorityProcess.c)
 *     PspComputeQuantum @ 0x14064C4D8 (PspComputeQuantum.c)
 */

__int64 __fastcall PspComputeQuantumAndPriority(__int64 a1, __int64 a2, _BYTE *a3, _DWORD *a4, _DWORD *a5)
{
  char v7; // di

  v7 = (_DWORD)a2 != 1 ? 0 : 2;
  if ( a4 )
    *a4 = *(_BYTE *)(a1 + 1466) == 2 && !(_DWORD)a2;
  if ( a5 )
  {
    if ( !*(_BYTE *)(a1 + 1466) && (_DWORD)a2 == 1 )
    {
      *a5 = 1;
      goto LABEL_9;
    }
    *a5 = 0;
  }
  if ( (_DWORD)a2 != 2 )
LABEL_9:
    MmSetMemoryPriorityProcess(a1, (_DWORD)a2 != 1 ? 0 : 2);
  LOBYTE(a2) = v7;
  *a3 = PspComputeQuantum(a1, a2);
  return *((unsigned int *)PspPriorityTable + *(unsigned __int8 *)(a1 + 1119));
}

/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C001C4C0
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006C958 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C00029D8 (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1);
  *(_QWORD *)(v1 + 5408) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v1 + 5416) = 0LL;
  *(_QWORD *)(v1 + 5424) = 0LL;
  *(_QWORD *)(v1 + 5432) = 0LL;
  *(_QWORD *)(v1 + 5440) = 0LL;
  *(_QWORD *)(v1 + 5448) = 0LL;
  *(_QWORD *)(v1 + 5456) = 0LL;
  *(_QWORD *)(v1 + 5464) = 0LL;
  *(_QWORD *)(v1 + 5472) = 0LL;
  *(_QWORD *)(v1 + 5480) = 0LL;
  *(_QWORD *)(v1 + 5488) = 0LL;
  *(_DWORD *)(v1 + 5504) = 0;
  *(_BYTE *)(v1 + 5508) = 0;
  *(_QWORD *)(v1 + 5496) = 1LL;
  return result;
}

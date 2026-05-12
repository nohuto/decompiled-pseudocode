/*
 * XREFs of StorpInitializeAdapterTelemetry @ 0x1C001A0DC
 * Callers:
 *     RaidInitializeAdapter @ 0x1C006DD44 (RaidInitializeAdapter.c)
 * Callees:
 *     StorpInitializeHierarchicalResetBuckets @ 0x1C000FDBC (StorpInitializeHierarchicalResetBuckets.c)
 */

__int64 __fastcall StorpInitializeAdapterTelemetry(__int64 a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  StorpInitializeHierarchicalResetBuckets(a1);
  *(_QWORD *)(v1 + 5272) = MEMORY[0xFFFFF78000000008];
  result = 0LL;
  *(_QWORD *)(v1 + 5280) = 0LL;
  *(_QWORD *)(v1 + 5288) = 0LL;
  *(_QWORD *)(v1 + 5296) = 0LL;
  *(_QWORD *)(v1 + 5304) = 0LL;
  *(_QWORD *)(v1 + 5312) = 0LL;
  *(_QWORD *)(v1 + 5320) = 0LL;
  *(_QWORD *)(v1 + 5328) = 0LL;
  *(_QWORD *)(v1 + 5336) = 0LL;
  *(_QWORD *)(v1 + 5344) = 0LL;
  *(_QWORD *)(v1 + 5352) = 0LL;
  *(_DWORD *)(v1 + 5368) = 0;
  *(_BYTE *)(v1 + 5372) = 0;
  *(_QWORD *)(v1 + 5360) = 1LL;
  return result;
}

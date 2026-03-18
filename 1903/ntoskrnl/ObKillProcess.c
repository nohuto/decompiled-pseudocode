/*
 * XREFs of ObKillProcess @ 0x140691328
 * Callers:
 *     PspRundownSingleProcess @ 0x140693078 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400E50E0 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x140692CBC (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x140692E64 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 */

void __fastcall ObKillProcess(ULONG_PTR BugCheckParameter1)
{
  void *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(void **)(BugCheckParameter1 + 1048);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(BugCheckParameter1);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(BugCheckParameter1 + 1048) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}

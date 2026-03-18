/*
 * XREFs of ObKillProcess @ 0x140684898
 * Callers:
 *     PspRundownSingleProcess @ 0x1406865E8 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EA080 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x14068622C (ExpFreeHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406863D4 (ExpRemoveHandleTable.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
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

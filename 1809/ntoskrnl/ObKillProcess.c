/*
 * XREFs of ObKillProcess @ 0x14066C4DC
 * Callers:
 *     PspRundownSingleProcess @ 0x140603A48 (PspRundownSingleProcess.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1400EED30 (IoSetThreadHardErrorMode.c)
 *     ExpFreeHandleTable @ 0x1406067F8 (ExpFreeHandleTable.c)
 *     ExSweepHandleTable @ 0x140697AB0 (ExSweepHandleTable.c)
 *     ExpRemoveHandleTable @ 0x1406AD520 (ExpRemoveHandleTable.c)
 */

void __fastcall ObKillProcess(__int64 a1)
{
  _QWORD *v1; // rdi
  BOOLEAN v3; // bl

  v1 = *(_QWORD **)(a1 + 1048);
  if ( v1 )
  {
    v3 = IoSetThreadHardErrorMode(0);
    ExSweepHandleTable(a1, v1, 0LL);
    IoSetThreadHardErrorMode(v3);
    *(_QWORD *)(a1 + 1048) = 0LL;
    ExpRemoveHandleTable(v1);
    ExpFreeHandleTable(v1);
  }
}

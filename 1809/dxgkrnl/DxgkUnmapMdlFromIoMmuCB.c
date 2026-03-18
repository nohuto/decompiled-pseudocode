/*
 * XREFs of DxgkUnmapMdlFromIoMmuCB @ 0x1C0038BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z @ 0x1C0037DBC (-DxgkFreeMemoryTracker@@YAXQEAXPEAUDXG_DRIVER_MEMORY_TRACKER@@@Z.c)
 */

void __fastcall DxgkUnmapMdlFromIoMmuCB(void *a1, struct DXG_DRIVER_MEMORY_TRACKER **a2)
{
  struct DXG_DRIVER_MEMORY_TRACKER *v2; // rbx
  __int64 v4; // rax

  v2 = *a2;
  if ( *((_DWORD *)*a2 + 4) != 2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v4 + 24) = 1127LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DxgkFreeMemoryTracker(a1, v2);
}

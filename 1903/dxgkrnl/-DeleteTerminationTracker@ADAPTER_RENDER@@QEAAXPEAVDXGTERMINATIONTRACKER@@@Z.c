/*
 * XREFs of ?DeleteTerminationTracker@ADAPTER_RENDER@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00FDC30
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x1C00FD9F0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0115460 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ADAPTER_RENDER::DeleteTerminationTracker(ADAPTER_RENDER *this, struct _SLIST_ENTRY *a2)
{
  char *v3; // rbx
  __int64 v4; // rax

  if ( a2 )
  {
    v3 = (char *)this + 1216;
    ++*((_DWORD *)this + 311);
    if ( ExQueryDepthSList((PSLIST_HEADER)this + 76) >= *((_WORD *)this + 616) )
    {
      ++*((_DWORD *)v3 + 8);
      (*((void (__fastcall **)(struct _SLIST_ENTRY *))v3 + 7))(a2);
    }
    else
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v3, a2);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 4683LL;
    WdLogEvent5_WdAssertion(v4);
  }
}

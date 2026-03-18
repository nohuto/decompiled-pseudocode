/*
 * XREFs of ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AE688
 * Callers:
 *     ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BE278 (-PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00C0FCC (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0082F28 (-EvictTemporaryAllocation@VIDMM_GLOBAL@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PurgeAllocation(VIDMM_GLOBAL *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  char v7; // si
  VIDMM_GLOBAL *v8; // rcx

  v4 = a3;
  v7 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a2;
  if ( !*(_DWORD *)(a2 + 160) )
  {
    v8 = *(VIDMM_GLOBAL **)(a2 + 136);
    if ( v8 )
    {
      if ( g_IsInternalReleaseOrDbg )
      {
        WdLogNewEntry5_WdTrace(v8);
        v8 = *(VIDMM_GLOBAL **)(a2 + 136);
      }
      if ( (v4 & 2) != 0 || (v4 & 4) != 0 || (LOBYTE(a4) = 0, (v4 & 0x20) != 0) )
        LOBYTE(a4) = 1;
      LOBYTE(a3) = v4 & 1;
      (*(void (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64, __int64, _BYTE, _QWORD))(*(_QWORD *)v8 + 48LL))(
        v8,
        a2,
        a3,
        a4,
        0,
        0LL);
      v7 = 1;
    }
    if ( *(_QWORD *)(a2 + 264) )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v8);
      if ( v7 == 1 )
        VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
      VIDMM_GLOBAL::EvictTemporaryAllocation(v8, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      v7 = 1;
    }
    if ( v7 == 1 )
      VIDMM_GLOBAL::FlushPagingBufferInternal(a1, *(_DWORD *)(a2 + 76) & 0x3F, 0, 0LL, 0LL, 0, 0);
  }
}

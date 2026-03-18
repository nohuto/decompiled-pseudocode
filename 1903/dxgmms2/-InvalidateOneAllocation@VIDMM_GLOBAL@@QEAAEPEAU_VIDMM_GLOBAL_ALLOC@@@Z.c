/*
 * XREFs of ?InvalidateOneAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00ACDDC
 * Callers:
 *     ?InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00ACDBC (-InvalidateAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z.c)
 *     ?PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C00C0FCC (-PurgeContent@VIDMM_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C006340C (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 *     ?CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00AAB64 (-CleanupPrimaryAllocation@VIDMM_GLOBAL@@QEAAEPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

char __fastcall VIDMM_GLOBAL::InvalidateOneAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  __int64 v4; // rax
  VIDMM_GLOBAL *CurrentThread; // rcx
  int v7; // eax
  signed __int32 v8[8]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v9[13]; // [rsp+20h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  if ( *((_BYTE *)a2 + 96) == 1 )
  {
    v4 = WdLogNewEntry5_WdEvent(this, a2);
    *(_QWORD *)(v4 + 24) = a2;
    WdLogEvent5_WdEvent(v4);
  }
  else
  {
    DXGFASTMUTEX::Acquire(a2[40]);
    *((_BYTE *)a2 + 96) = 1;
    _InterlockedOr(v8, 0);
    DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40]);
    if ( (*(_DWORD *)a2[63] & 0x40000000) != 0 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread == *(VIDMM_GLOBAL **)(*(_QWORD *)this + 8LL) )
        return VIDMM_GLOBAL::CleanupPrimaryAllocation(CurrentThread, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      memset(v9, 0, 0x58uLL);
      v7 = *((_DWORD *)a2 + 19) & 0x3F;
      LODWORD(v9[0]) = 103;
      HIDWORD(v9[0]) = v7;
      v9[5] = a2;
      VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v9);
    }
  }
  return 0;
}

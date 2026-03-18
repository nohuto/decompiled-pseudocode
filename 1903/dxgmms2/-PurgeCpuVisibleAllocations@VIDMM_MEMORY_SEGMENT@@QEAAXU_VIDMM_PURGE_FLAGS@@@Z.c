/*
 * XREFs of ?PurgeCpuVisibleAllocations@VIDMM_MEMORY_SEGMENT@@QEAAXU_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00BE278
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017510 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001783C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084B14 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z @ 0x1C00AE688 (-PurgeAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@U_VIDMM_PURGE_FLAGS@@@Z.c)
 *     ?SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00B4D70 (-SuspendAccessToAllocation@VIDMM_WORKER_THREAD@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_MEMORY_SEGMENT::PurgeCpuVisibleAllocations(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rdi
  DXGFASTMUTEX **v5; // rdx
  DXGFASTMUTEX *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r9
  _QWORD *v13; // rax
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rcx
  _QWORD *v19; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-78h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x6004) != 0 )
  {
    if ( g_IsInternalReleaseOrDbg )
      *(_QWORD *)(WdLogNewEntry5_WdTrace(a1) + 24) = a1;
    v4 = *(_QWORD **)(a1 + 160);
    while ( v4 != (_QWORD *)(a1 + 160) )
    {
      v5 = (DXGFASTMUTEX **)(v4 - 48);
      v4 = (_QWORD *)*v4;
      v6 = v5[13];
      if ( v6 && (*((_BYTE *)v6 + 32) & 1) != 0 )
        VIDMM_WORKER_THREAD::SuspendAccessToAllocation(**(VIDMM_GLOBAL ****)(a1 + 8), v5);
    }
    v7 = *(_QWORD **)(a1 + 176);
    while ( v7 != (_QWORD *)(a1 + 176) )
    {
      v8 = (__int64)(v7 - 48);
      v7 = (_QWORD *)*v7;
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx(v8 + 480, 0LL);
      if ( *(_DWORD *)(v8 + 344) )
      {
        ExReleasePushLockExclusiveEx(v8 + 480, 0LL);
        KeLeaveCriticalRegion();
        if ( g_IsInternalReleaseOrDbg )
          *(_QWORD *)(WdLogNewEntry5_WdTrace(v11) + 24) = v8;
        if ( (*(_DWORD *)(v8 + 76) & 0x100) != 0 )
        {
          if ( g_IsInternalRelease )
          {
            v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v11, v10);
            v13[3] = 270LL;
            v13[4] = 9LL;
            v13[5] = 0LL;
            v13[6] = 0LL;
            v13[7] = 0LL;
            WdLogEvent5_WdCriticalError(v13);
          }
        }
        VIDMM_GLOBAL::PurgeAllocation(*(VIDMM_GLOBAL **)(a1 + 8), v8, a2, v12);
      }
      else
      {
        v14 = *(_QWORD *)(v8 + 104);
        if ( v14 && (*(_BYTE *)(v14 + 32) & 1) != 0 )
        {
          if ( g_IsInternalReleaseOrDbg )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v9) + 24) = v8;
            v14 = *(_QWORD *)(v8 + 104);
          }
          memset(&ApcState, 0, sizeof(ApcState));
          KeStackAttachProcess(**(PRKPROCESS **)(v14 + 8), &ApcState);
          v15 = VIDMM_GLOBAL::Rotate(
                  *(_QWORD *)(a1 + 8),
                  *(_QWORD *)(*(_QWORD *)(v14 + 8) + 24LL),
                  *(_QWORD *)(v14 + 24),
                  3u,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  1,
                  v8);
          v17 = v15;
          v18 = v15 + 0x80000000;
          if ( (int)v18 >= 0 && v15 != -1073741558 )
          {
            v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
            v19[6] = v17;
            v19[7] = 0LL;
            v19[3] = 270LL;
            v19[4] = 4LL;
            v19[5] = 3LL;
            WdLogEvent5_WdCriticalError(v19);
          }
          *(_BYTE *)(v14 + 32) &= ~1u;
          KeUnstackDetachProcess(&ApcState);
          if ( *(_QWORD *)(v8 + 448) )
          {
            VIDMM_CPU_HOST_APERTURE::UnmapRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v8);
            VIDMM_CPU_HOST_APERTURE::ReleaseRange(
              *(VIDMM_CPU_HOST_APERTURE **)(a1 + 488),
              (struct _VIDMM_GLOBAL_ALLOC *)v8);
          }
        }
        ExReleasePushLockExclusiveEx(v8 + 480, 0LL);
        KeLeaveCriticalRegion();
      }
    }
  }
}

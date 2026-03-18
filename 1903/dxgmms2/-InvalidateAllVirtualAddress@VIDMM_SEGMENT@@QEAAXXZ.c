/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C00BFEEC
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C006B8F0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002B90 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0017510 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C001783C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084B14 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  __int64 v2; // rcx
  char *v3; // r15
  char *v4; // rsi
  char *v5; // r12
  _QWORD **v6; // r12
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  _QWORD **v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // r15
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  VIDMM_CPU_HOST_APERTURE *v20; // rbx
  _QWORD **v21; // [rsp+58h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-68h] BYREF

  memset(&ApcState, 0, sizeof(ApcState));
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v2) + 24) = this;
  v3 = (char *)this + 136;
  v4 = (char *)*((_QWORD *)this + 17);
  while ( v4 != v3 )
  {
    v5 = v4;
    v4 = *(char **)v4;
    v6 = (_QWORD **)(v5 + 16);
    v21 = v6;
    v7 = *v6;
    if ( *v6 != v6 )
    {
      do
      {
        v8 = v7;
        v7 = (_QWORD *)*v7;
        v9 = (_QWORD **)(v8 + 2);
        v10 = *v9;
        if ( *v9 != v9 )
        {
          v11 = v9;
          do
          {
            v12 = (__int64 *)*(v10 - 7);
            v10 = (_QWORD *)*v10;
            v13 = *v12;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v13 + 480, 0LL);
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
            v14 = *(_QWORD *)(v13 + 104);
            if ( v14 && (*(_BYTE *)(v14 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
              {
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v14) + 24) = v13;
                v14 = *(_QWORD *)(v13 + 104);
              }
              KeStackAttachProcess(**(PRKPROCESS **)(v14 + 8), &ApcState);
              v15 = VIDMM_GLOBAL::Rotate(
                      *((_QWORD *)this + 1),
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 104) + 8LL) + 24LL),
                      *(_QWORD *)(*(_QWORD *)(v13 + 104) + 24LL),
                      3u,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      1,
                      v13);
              v17 = v15;
              v18 = v15 + 0x80000000;
              if ( (v18 & 0x80000000) == 0 && v15 != -1073741558 )
              {
                v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v18, v16);
                v19[7] = 0LL;
                v19[3] = 270LL;
                v19[4] = 4LL;
                v19[5] = 3LL;
                v19[6] = v17;
                WdLogEvent5_WdCriticalError(v19);
              }
              *(_BYTE *)(*(_QWORD *)(v13 + 104) + 32LL) &= ~1u;
              *(_DWORD *)(v13 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v13 + 448) )
            {
              v20 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 61);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v20, (struct _VIDMM_GLOBAL_ALLOC *)v13);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v20, (struct _VIDMM_GLOBAL_ALLOC *)v13);
            }
            ExReleasePushLockExclusiveEx(v13 + 480, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320));
          }
          while ( v10 != v11 );
          v6 = v21;
        }
      }
      while ( v7 != v6 );
      v3 = (char *)this + 136;
    }
  }
}

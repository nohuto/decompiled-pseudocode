/*
 * XREFs of ?LockInternal@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_LOCK2_DATA@@PEAUVIDMM_ALLOC@@PEAPEAXKPEA_NPEAPEAU3@@Z @ 0x1C00774F0
 * Callers:
 *     ?Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z @ 0x1C0076D70 (-Lock@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KPEAPEAX@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077D20 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z @ 0x1C0003410 (-VidMmRecordLock@@YAXPEAU_VIDMM_GLOBAL_STATISTICS@@KKH@Z.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqt @ 0x1C00262C0 (McTemplateK0pqqt.c)
 *     ?SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007E3E0 (-SafeAttach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z @ 0x1C007E400 (-SafeDetach@VIDMM_PROCESS@@QEAAXPEAU_KAPC_STATE@@@Z.c)
 *     ?LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z @ 0x1C00AD264 (-LockAllocInCpuHostAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00AD390 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z @ 0x1C00AD48C (-LockInAperture@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@PEA_NPEAPEAU2@@Z.c)
 *     ?LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z @ 0x1C00AD548 (-LockParavirtualizedAllocationOnHost@@YAJPEAUVIDMM_ALLOC@@PEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::LockInternal(
        VIDMM_GLOBAL *this,
        struct VIDMM_LOCK2_DATA *a2,
        struct VIDMM_ALLOC *a3,
        void **a4,
        unsigned int a5,
        bool *a6,
        struct VIDMM_ALLOC **a7)
{
  struct VIDMM_ALLOC *v8; // rdi
  _QWORD *v11; // rsi
  int v12; // r12d
  int v13; // r14d
  __int64 v14; // rbx
  __int64 v15; // rdx
  const GUID *v16; // r8
  unsigned __int64 v17; // rcx
  int v18; // eax
  void *v19; // rax
  int v21; // ecx
  int v22; // eax
  __int64 CurrentProcess; // rax
  __int64 v24; // rax
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-D8h]
  __int64 v32; // [rsp+28h] [rbp-D0h]
  __int64 v33; // [rsp+30h] [rbp-C8h]
  int v34; // [rsp+50h] [rbp-A8h]
  struct VIDMM_ALLOC **v36; // [rsp+60h] [rbp-98h] BYREF
  struct _KAPC_STATE v37; // [rsp+68h] [rbp-90h] BYREF
  VIDMM_PROCESS *v38; // [rsp+98h] [rbp-60h]

  v8 = a3;
  v36 = a7;
  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2502LL) && !*(_BYTE *)(*((_QWORD *)this + 2) + 777LL) )
  {
    v11 = *(_QWORD **)a3;
    v12 = 0;
    v13 = 0;
    v14 = **(_QWORD **)a3;
    v38 = *(VIDMM_PROCESS **)(*(_QWORD *)a3 + 8LL);
    VIDMM_PROCESS::SafeAttach(v38, &v37);
    v17 = *(unsigned int *)a2;
    if ( (int)v17 < 2 )
      goto LABEL_4;
    v17 = (unsigned int)(v17 - 2);
    if ( (_DWORD)v17 )
    {
      v21 = v17 - 1;
      if ( v21 )
      {
        v17 = (unsigned int)(v21 - 1);
        if ( (_DWORD)v17 )
        {
          if ( (_DWORD)v17 != 1 )
            goto LABEL_4;
          v22 = **(_DWORD **)(v14 + 504);
          if ( (v22 & 0x20000000) != 0 )
          {
            v36 = 0LL;
            v34 = ~((_WORD)v22 << 8) & 0x400 | 4;
            CurrentProcess = PsGetCurrentProcess(v17, v15);
            v13 = MmMapViewOfSection(
                    *(_QWORD *)(v14 + 360),
                    CurrentProcess,
                    v11 + 2,
                    0LL,
                    *(_QWORD *)(v14 + 8),
                    &v36,
                    v14 + 8,
                    2,
                    0,
                    v34);
            if ( v13 >= 0 )
              goto LABEL_4;
          }
          else
          {
            v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v11[1] + 24LL) + 72LL))(
                    *(_QWORD *)(v11[1] + 24LL),
                    v11[3],
                    *(_QWORD *)(v14 + 8));
            v11[2] = v24;
            if ( v24 )
              goto LABEL_4;
            v13 = -1073741801;
          }
          _InterlockedIncrement(&dword_1C004E694);
          v25 = (_QWORD *)WdLogNewEntry5_WdLowResource(v17);
          v25[3] = v14;
          v28 = PsGetCurrentProcess(v27, v26);
          v25[5] = v13;
          v25[4] = v28;
          WdLogEvent5_WdLowResource(v25);
          v8 = a3;
        }
        else
        {
          ExReleasePushLockExclusiveEx(v14 + 480, 0LL);
          KeLeaveCriticalRegion();
          v13 = VIDMM_GLOBAL::LockInAperture(this, v8, a6, v36);
          KeEnterCriticalRegion();
          ExAcquirePushLockExclusiveEx(v14 + 480, 0LL);
        }
      }
      else
      {
        v13 = VIDMM_GLOBAL::LockAllocInCpuVisibleSegment(this, v8);
      }
    }
    else
    {
      if ( (v11[4] & 1) != 0 )
        goto LABEL_4;
      v13 = VIDMM_GLOBAL::LockAllocInCpuHostAperture(
              this,
              v8,
              *(struct VIDMM_CPU_HOST_APERTURE **)(*(_QWORD *)(**(_QWORD **)v8 + 136LL) + 488LL));
      if ( v13 >= 0 )
        goto LABEL_4;
      *(_DWORD *)a2 = 4;
      *((_BYTE *)a2 + 4) = 1;
    }
    if ( v13 < 0 )
    {
LABEL_15:
      VIDMM_PROCESS::SafeDetach((VIDMM_PROCESS *)v17, &v37);
      return (unsigned int)v13;
    }
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 344));
    ++*((_DWORD *)v11 + 19);
    *(_DWORD *)(v14 + 84) |= 0x20u;
    v18 = *(_DWORD *)(v14 + 80);
    if ( (v18 & 0x4000) != 0 )
    {
      v19 = *(void **)(v14 + 536);
    }
    else
    {
      if ( (v18 & 0x2000) != 0 )
      {
        v13 = LockParavirtualizedAllocationOnHost(v8, a4);
LABEL_9:
        if ( v13 >= 0 )
        {
          *(_BYTE *)(v14 + 97) = 1;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          {
            v29 = *(unsigned int *)a2;
            LODWORD(v33) = v29 == 4;
            LODWORD(v32) = *(_DWORD *)a2;
            LODWORD(v31) = a5;
            McTemplateK0pqqt(v29, &EventLock2, v16, v8, v31, v32, v33);
          }
          if ( *(_DWORD *)a2 == 4 )
            v12 = 1;
          VidMmRecordLock((VIDMM_GLOBAL *)((char *)this + 7168), a5, 0, v12);
        }
        goto LABEL_15;
      }
      v17 = **(unsigned int **)(v14 + 504);
      if ( (v17 & 8) != 0 )
        v19 = *(void **)(v14 + 368);
      else
        v19 = (void *)v11[2];
    }
    *a4 = v19;
    goto LABEL_9;
  }
  v30 = WdLogNewEntry5_WdWarning(this, a2);
  WdLogEvent5_WdWarning(v30);
  return 3221226166LL;
}

/*
 * XREFs of ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C005BD88
 * Callers:
 *     ?InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z @ 0x1C005A534 (-InitContextAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@EPEA_NPEAPEAU2@@Z.c)
 *     ?NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C005A718 (-NotifyResidency@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A8D4 (-FillAllocationInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C005A970 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005BB84 (-DiscardAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@PEAU_MDL@@234U_DXGK_TRANSFERFLAGS@@@Z @ 0x1C0081FE8 (-MemoryTransferInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@PEAT_.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C0082138 (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTEGER@@H@Z @ 0x1C0083974 (-UnmapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1T_LARGE_INTE.c)
 *     ?MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@Z @ 0x1C0083B60 (-MapVideoApertureSegmentInternal@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@I_K1PEAU_MDL@@KHH@.c)
 *     ?BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z @ 0x1C00AA64C (-BuildInitContextAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@_N@Z.c)
 *     ?SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z @ 0x1C00AFAF8 (-SignalMonitoredFence@VIDMM_GLOBAL@@QEAAXIPEAU_VIDSCH_SYNC_OBJECT@@_KPEA_N@Z.c)
 *     ?UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z @ 0x1C00B07BC (-UpdateContextAllocation@VIDMM_GLOBAL@@QEAAX_K0PEAXI@Z.c)
 * Callees:
 *     ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C005BF58 (-RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFF.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::CompleteBuildPagingBufferIteration(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        int a6,
        void *a7)
{
  unsigned __int64 v7; // r14
  unsigned int v8; // ebx
  int v9; // r15d
  __int64 v13; // rsi
  int v14; // r12d
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v19; // ebx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+78h] [rbp+10h]

  v27 = a2;
  v7 = -1LL;
  v8 = a2;
  v9 = 0;
  if ( !a3 || (**((_DWORD **)a3 + 63) & 0x10000000) == 0 )
  {
    v13 = (unsigned int)a2;
    v14 = LODWORD(a4->pDmaBufferPrivateData) - *((_DWORD *)this + 2 * (unsigned int)a2 + 798);
    v9 = LODWORD(a4->pDmaBuffer) - *((_DWORD *)this + 2 * (unsigned int)a2 + 670);
    if ( LODWORD(a4->pDmaBuffer) != *((_DWORD *)this + 2 * (unsigned int)a2 + 670) || v14 )
    {
      if ( !*((_DWORD *)this + (unsigned int)a2 + 1171) )
      {
        *((_DWORD *)this + (unsigned int)a2 + 1171) = 1;
        ++*((_QWORD *)this + (unsigned int)a2 + 618);
      }
      v7 = *((_QWORD *)this + (unsigned int)a2 + 618);
      if ( a3 )
      {
        if ( *((_QWORD *)a3 + 22) > v7 )
        {
          v19 = *((_DWORD *)a3 + 19) & 0x3F;
          v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
          v20[6] = v19;
          v20[3] = 270LL;
          v20[4] = 31LL;
          v20[5] = a3;
          v20[7] = v7;
          WdLogEvent5_WdCriticalError(v20);
        }
        *((_QWORD *)a3 + 22) = v7;
        if ( *((_DWORD *)this + 2) == 206 )
        {
          if ( *((_QWORD *)a3 + 21) > v7 )
          {
            v21 = *((_DWORD *)a3 + 19) & 0x3F;
            v22 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
            v22[6] = v21;
            v22[3] = 270LL;
            v22[4] = 31LL;
            v22[5] = a3;
            v22[7] = v7;
            WdLogEvent5_WdCriticalError(v22);
          }
          *((_QWORD *)a3 + 21) = v7;
        }
      }
      v15 = *((_BYTE *)this + 40873);
      v8 = v27;
      if ( (v15 & 2) != 0 )
        *((_BYTE *)this + 40873) = v15 & 0xFD;
    }
    *((_DWORD *)this + v13 + 414) += v9;
    if ( *((_DWORD *)this + v13 + 414) > *((_DWORD *)this + v13 + 29) )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v23[5] = 0LL;
      v23[6] = 0LL;
      v23[7] = 0LL;
      v23[3] = 270LL;
      v23[4] = 18LL;
      WdLogEvent5_WdCriticalError(v23);
    }
    *((_DWORD *)this + v13 + 542) += v14;
    if ( *((_DWORD *)this + v13 + 542) > *((_DWORD *)this + v13 + 93) )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v24[5] = 0LL;
      v24[6] = 0LL;
      v24[7] = 0LL;
      v24[3] = 270LL;
      v24[4] = 19LL;
      WdLogEvent5_WdCriticalError(v24);
    }
  }
  VIDMM_GLOBAL::RecordPagingOperation(this, v8, a3, a4, a5, v7, a6, a7);
  if ( a5 < 0 )
  {
    if ( a5 == -1071775743 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v17);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v8, 1u, 0LL, 0LL, 1, 0);
    }
    else
    {
      v25 = *((_QWORD *)this + 3);
      v26 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v17, v16);
      v26[3] = 270LL;
      v26[4] = 11LL;
      v26[5] = a4;
      v26[6] = a5;
      v26[7] = v25;
      WdLogEvent5_WdCriticalError(v26);
    }
  }
  return v9 != 0;
}

/*
 * XREFs of ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00AF8E4
 * Callers:
 *     ?BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z @ 0x1C0061464 (-BeginCPUAccess@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_MULTI_ALLOC@@KKIPEAU_VIDMM_REGION@@PEAPEAX@Z.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1TVIDMM_ROTATE_FLAGS@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084B14 (-Rotate@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS_HEAP_INTERFACE@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MD.c)
 *     ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00B7498 (-VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z.c)
 *     ?VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z @ 0x1C00B755C (-VidMmiBuildMdlFromMdl@@YAPEAU_MDL@@PEAX_KPEAU1@1@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::SetupAllocationForCPUAccess(VIDMM_GLOBAL *this, __int64 **a2)
{
  __int64 *v2; // r14
  __int64 v3; // rdi
  VIDMM_GLOBAL *v4; // rbp
  __int64 v5; // rsi
  __int64 v6; // rbx
  int v7; // edx
  union _LARGE_INTEGER v8; // rbx
  void *v9; // rcx
  struct _MDL *v10; // rax
  __int64 v11; // rcx
  struct _MDL *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  const GUID *v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax

  v2 = *a2;
  LODWORD(v3) = 0;
  v4 = this;
  v5 = **a2;
  v6 = *(_QWORD *)(v5 + 136);
  if ( (*(_DWORD *)(v6 + 80) & 4) != 0
    && (v7 = **(_DWORD **)(v5 + 504), (v7 & 0x38) == 0)
    && (LOBYTE(this) = (*(_DWORD *)(v5 + 80) & 0x10000) == 0, ((unsigned __int8)this & ((v7 & 2) == 0)) != 0) )
  {
    v8.QuadPart = *(_QWORD *)(v5 + 144) + *(_QWORD *)(v6 + 32);
    if ( (v2[4] & 1) == 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(this);
      if ( (*((_DWORD *)v4 + 1760) & 0x1000) != 0 )
      {
        LODWORD(v3) = -1073741823;
      }
      else
      {
        v9 = (void *)v2[2];
        if ( (*(_DWORD *)(*((_QWORD *)v4 + 3) + 308LL) & 8) != 0 )
          v10 = VidMmiBuildMdlFromMdl(
                  v9,
                  *(_QWORD *)(v5 + 16),
                  *(struct _MDL **)(*(_QWORD *)(v5 + 136) + 32LL),
                  (v8.QuadPart - *(_QWORD *)(*(_QWORD *)(v5 + 136) + 32LL)) / 4096);
        else
          v10 = VidMmiBuildMdlForContiguousMmIo(v9, *(_QWORD *)(v5 + 16), v8);
        v12 = v10;
        if ( v10 )
        {
          v13 = VIDMM_GLOBAL::Rotate(
                  (__int64)v4,
                  *(_QWORD *)(v2[1] + 24),
                  v2[3],
                  1u,
                  (__int64)v10,
                  *(_QWORD *)(v5 + 16),
                  0LL,
                  0LL,
                  0,
                  v5);
          v3 = v13;
          if ( v13 < 0 )
          {
            ExFreePoolWithTag(v12, 0);
            if ( bTracingEnabled )
            {
              if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v14, &EventPerformanceWarning, v15, 7);
            }
            _InterlockedIncrement(&dword_1C004E684);
            v16 = WdLogNewEntry5_WdLowResource(v14);
            *(_QWORD *)(v16 + 24) = v3;
            WdLogEvent5_WdLowResource(v16);
          }
          else
          {
            *((_BYTE *)v2 + 32) |= 1u;
            *(_BYTE *)(v5 + 98) = 1;
          }
        }
        else
        {
          _InterlockedIncrement(&dword_1C004E664);
          v17 = WdLogNewEntry5_WdLowResource(v11);
          *(_QWORD *)(v17 + 24) = 18825LL;
          WdLogEvent5_WdLowResource(v17);
          LODWORD(v3) = -1073741801;
        }
      }
    }
    return (unsigned int)v3;
  }
  else
  {
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(this);
    return 3221225473LL;
  }
}

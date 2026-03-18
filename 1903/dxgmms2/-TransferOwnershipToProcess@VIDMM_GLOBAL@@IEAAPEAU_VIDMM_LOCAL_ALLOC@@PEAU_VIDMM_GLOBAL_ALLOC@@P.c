/*
 * XREFs of ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C007F260
 * Callers:
 *     ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C007F194 (-TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z.c)
 * Callees:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     ?VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVIDMM_SEGMENT@@_KW4VIDMM_ALLOC_RECORD_TYPE@@@Z @ 0x1C000257C (-VidMmRecordAlloc@@YAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@PEAVVID.c)
 *     VidSchSuspendResumeDevice @ 0x1C0010B50 (VidSchSuspendResumeDevice.c)
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0pqq @ 0x1C0026244 (McTemplateK0pqq.c)
 *     ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C007F35C (-TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z.c)
 */

struct _VIDMM_LOCAL_ALLOC *__fastcall VIDMM_GLOBAL::TransferOwnershipToProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  __int64 v4; // rax
  int v5; // edi
  VIDMM_GLOBAL *v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v14; // rax
  struct _VIDMM_GLOBAL_ALLOC *v15; // r13
  struct _VIDMM_GLOBAL_ALLOC *v16; // r14
  char *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  _QWORD *v20; // r13
  struct _VIDSCH_DEVICE *v21; // rbx
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-88h] BYREF

  v4 = *((_QWORD *)a2 + 17);
  v5 = 0;
  v9 = this;
  if ( v4
    && (*(_DWORD *)(v4 + 80) & 0x1001) != 0
    && *((int *)a2 + 87) > 0
    && (memset(&ApcState, 0, sizeof(ApcState)),
        KeStackAttachProcess(**((PRKPROCESS **)a4 + 1), &ApcState),
        v10 = (int)VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(v9, a3, a4),
        KeUnstackDetachProcess(&ApcState),
        (int)v10 < 0) )
  {
    _InterlockedIncrement(&dword_1C004E584);
    v14 = (_QWORD *)WdLogNewEntry5_WdLowResource(v11);
    v14[3] = a2;
    v14[4] = *((_QWORD *)a2 + 1);
    v14[5] = v10;
    WdLogEvent5_WdLowResource(v14);
    v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
    v16 = (struct _VIDMM_GLOBAL_ALLOC *)*((_QWORD *)a2 + 37);
    if ( v16 != (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296) )
    {
      do
      {
        v17 = (char *)v16 - 56;
        if ( (struct _VIDMM_GLOBAL_ALLOC *)((char *)v16 - 56) != a3 )
        {
          v18 = v17 + 40;
          v19 = (_QWORD *)*((_QWORD *)v17 + 5);
          if ( v19 != v18 )
          {
            v20 = v19;
            do
            {
              v21 = *(struct _VIDSCH_DEVICE **)(*(v20 - 4) + 32LL);
              VidSchMarkDeviceAsError((__int64)v21);
              VidSchSuspendResumeDevice(v21, 1, 0, 0);
              VidSchSuspendResumeDevice(v21, 0, 0, 0);
              v20 = (_QWORD *)*v20;
            }
            while ( v20 != v18 );
            v15 = (struct _VIDMM_GLOBAL_ALLOC *)((char *)a2 + 296);
          }
        }
        v16 = *(struct _VIDMM_GLOBAL_ALLOC **)v16;
      }
      while ( v16 != v15 );
      v9 = this;
    }
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)a3, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 0);
    VidMmRecordAlloc(v9, (__int64)a2, (__int64)a4, *((_QWORD *)a2 + 17), *((_QWORD *)a2 + 2), 1);
    *((_DWORD *)a2 + 19) |= 0x20000000u;
    a4 = 0LL;
    *((_DWORD *)a2 + 20) ^= (*((_DWORD *)a2 + 20) ^ *(_DWORD *)(*((_QWORD *)a2 + 17) + 20LL)) & 0x1F;
  }
  else if ( bTracingEnabled )
  {
    if ( a4 )
      v5 = *(_DWORD *)(*((_QWORD *)a4 + 1) + 8LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      v12 = *(unsigned int *)(*((_QWORD *)a3 + 1) + 8LL);
      McTemplateK0pqq(v12, &EventTransferAllocationOwnership, (const GUID *)a3, a2, v12, v5);
    }
  }
  return a4;
}

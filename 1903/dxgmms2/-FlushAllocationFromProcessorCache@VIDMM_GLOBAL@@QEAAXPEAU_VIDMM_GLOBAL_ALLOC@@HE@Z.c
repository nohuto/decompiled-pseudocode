/*
 * XREFs of ?FlushAllocationFromProcessorCache@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@HE@Z @ 0x1C00AC070
 * Callers:
 *     ?FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C007FAF0 (-FlushPendingCPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0081330 (-FlushPendingGPUAccess@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C398 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z @ 0x1C00B1BD8 (-VidMmFlushCpuCacheWorker@@YAJPEAX_KPEAU_MDL@@E@Z.c)
 */

void __fastcall VIDMM_GLOBAL::FlushAllocationFromProcessorCache(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  _DWORD *v2; // rdi
  int v3; // esi
  __int64 v5; // rcx
  void *v6; // rdi
  struct _MDL *v7; // r8
  unsigned __int8 v8; // r9
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF

  v2 = (_DWORD *)*((_QWORD *)a2 + 63);
  v3 = 0;
  if ( (*v2 & 4) != 0 && (*v2 & 0x800000) == 0 && !*((_BYTE *)this + 7073) )
  {
    memset(&ApcState, 0, sizeof(ApcState));
    v5 = *((_QWORD *)a2 + 13);
    if ( !v5 || (*v2 & 8) != 0 )
    {
      v6 = (void *)*((_QWORD *)a2 + 46);
      v3 = 1;
    }
    else
    {
      v6 = *(void **)(v5 + 16);
      KeStackAttachProcess(**(PRKPROCESS **)(v5 + 8), &ApcState);
    }
    VidMmGetFullMDL(a2, 0LL);
    VidMmFlushCpuCacheWorker(v6, *((_QWORD *)a2 + 1), v7, v8);
    if ( !v3 )
      KeUnstackDetachProcess(&ApcState);
  }
}

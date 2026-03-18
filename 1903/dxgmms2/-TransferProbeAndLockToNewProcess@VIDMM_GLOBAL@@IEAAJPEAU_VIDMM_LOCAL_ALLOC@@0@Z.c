/*
 * XREFs of ?TransferProbeAndLockToNewProcess@VIDMM_GLOBAL@@IEAAJPEAU_VIDMM_LOCAL_ALLOC@@0@Z @ 0x1C007F35C
 * Callers:
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C007F260 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C007F430 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 * Callees:
 *     ?VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z @ 0x1C006A29C (-VidMmiUnlockAllocation@@YAXPEAU_VIDMM_MDL@@@Z.c)
 *     ?VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006A31C (-VidMmiProbeAndLockAllocation@@YAPEAU_VIDMM_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@.c)
 *     ?UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z @ 0x1C006AA80 (-UnlockAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_K1EE@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C006ADD4 (-ProbeAndLockAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@_K2W.c)
 */

__int64 __fastcall VIDMM_GLOBAL::TransferProbeAndLockToNewProcess(
        VIDMM_GLOBAL *this,
        struct _VIDMM_LOCAL_ALLOC *a2,
        struct _VIDMM_LOCAL_ALLOC *a3)
{
  __int64 v3; // rbx
  int v7; // edi
  __int64 v9; // rdx
  const GUID *v10; // r8
  struct _VIDMM_MDL *v11; // r14
  enum _LOCK_OPERATION v12; // [rsp+28h] [rbp-30h]

  v3 = *(_QWORD *)a3;
  v7 = VIDMM_GLOBAL::ProbeAndLockAllocation(
         this,
         a3,
         (struct _VIDMM_GLOBAL_ALLOC *)v3,
         0LL,
         *(_QWORD *)(v3 + 8),
         v12,
         *(struct VIDMM_SEGMENT **)(v3 + 136),
         0);
  if ( v7 >= 0 )
  {
    if ( *(_QWORD *)(v3 + 112) )
    {
      v11 = VidMmiProbeAndLockAllocation(
              (struct _VIDMM_GLOBAL_ALLOC *)v3,
              0LL,
              *(_QWORD *)(v3 + 8),
              IoModifyAccess,
              *(struct VIDMM_SEGMENT **)(v3 + 136),
              a3);
      if ( !v11 )
      {
        v7 = -1073741801;
        VIDMM_GLOBAL::UnlockAllocation(this, a3, 0LL, *(_QWORD *)(v3 + 8), 0, 1);
        return (unsigned int)v7;
      }
      VidMmiUnlockAllocation(*(PMDL **)(v3 + 112), v9, v10);
      *(_QWORD *)(v3 + 112) = v11;
    }
    VIDMM_GLOBAL::UnlockAllocation(this, a2, 0LL, *(_QWORD *)(v3 + 8), 0, 0);
  }
  return (unsigned int)v7;
}

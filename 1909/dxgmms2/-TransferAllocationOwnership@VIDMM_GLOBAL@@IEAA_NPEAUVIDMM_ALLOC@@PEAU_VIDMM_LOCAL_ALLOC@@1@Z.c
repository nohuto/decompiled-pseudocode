/*
 * XREFs of ?TransferAllocationOwnership@VIDMM_GLOBAL@@IEAA_NPEAUVIDMM_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@1@Z @ 0x1C00802C4
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0077A60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     ?TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@1@Z @ 0x1C0080390 (-TransferOwnershipToProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@P.c)
 *     ?TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU2@@Z @ 0x1C0080560 (-TransferOwnershipToSystemProcess@VIDMM_GLOBAL@@IEAAPEAU_VIDMM_LOCAL_ALLOC@@PEAU_VIDMM_GLOBAL_AL.c)
 */

bool __fastcall VIDMM_GLOBAL::TransferAllocationOwnership(
        VIDMM_GLOBAL *this,
        struct _VIDMM_GLOBAL_ALLOC ***a2,
        struct _VIDMM_LOCAL_ALLOC *a3,
        struct _VIDMM_LOCAL_ALLOC *a4)
{
  struct _VIDMM_LOCAL_ALLOC *v4; // rdi
  struct _VIDMM_GLOBAL_ALLOC *v8; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v9; // rax
  __int64 v10; // rax
  _QWORD *v12; // rax

  v4 = a4;
  v8 = **a2;
  if ( a4 )
  {
    v4 = VIDMM_GLOBAL::TransferOwnershipToProcess(this, **a2, a3, a4);
  }
  else
  {
    if ( *((_DWORD *)v8 + 40) && g_IsInternalRelease )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
      v12[5] = 0LL;
      v12[6] = 0LL;
      v12[7] = 0LL;
      v12[3] = 270LL;
      v12[4] = 9LL;
      WdLogEvent5_WdCriticalError(v12);
    }
    v9 = a2[2][5];
    if ( v9 )
    {
      v10 = *((_QWORD *)v9 + 7);
      if ( v10 )
      {
        if ( *(_DWORD *)(v10 + 56) )
        {
          if ( (**((_DWORD **)v8 + 63) & 0x10) == 0 )
          {
            v4 = VIDMM_GLOBAL::TransferOwnershipToSystemProcess(this, v8, a3);
            *((_DWORD *)v8 + 21) = (v4 != 0LL ? 4 : 0) | *((_DWORD *)v8 + 21) & 0xFFFFFFFB;
          }
        }
        else
        {
          *((_DWORD *)v8 + 21) |= 1u;
        }
      }
    }
  }
  *((_QWORD *)v8 + 13) = v4;
  return v4 != 0LL;
}

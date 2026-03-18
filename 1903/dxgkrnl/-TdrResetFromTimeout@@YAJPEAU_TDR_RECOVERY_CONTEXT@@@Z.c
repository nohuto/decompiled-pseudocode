/*
 * XREFs of ?TdrResetFromTimeout@@YAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023E2A0
 * Callers:
 *     ?TdrResetFromTimeoutWorkItem@@YAXPEAX@Z @ 0x1C023E3F0 (-TdrResetFromTimeoutWorkItem@@YAXPEAX@Z.c)
 * Callees:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE8A0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?Start@CVP_SYSTEM_THREAD@@QEAAJXZ @ 0x1C023CB58 (-Start@CVP_SYSTEM_THREAD@@QEAAJXZ.c)
 *     ?TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C023CC20 (-TdrAllocatePool@@YAPEAX_KW4_POOL_TYPE@@@Z.c)
 *     ?TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z @ 0x1C023E274 (-TdrReferenceRecoveryContext@@YAPEAU_TDR_RECOVERY_CONTEXT@@PEAU1@@Z.c)
 *     TdrBugcheckOnTimeout @ 0x1C023EA7C (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall TdrResetFromTimeout(struct _TDR_RECOVERY_CONTEXT *a1)
{
  struct _KTHREAD *v2; // rcx
  _QWORD *Pool; // rax
  struct _TDR_RECOVERY_CONTEXT *v4; // rax
  __int64 v5; // r8

  if ( (int)DXGADAPTER::Reset(*((DXGADAPTER **)a1 + 4), (struct _KTHREAD **)a1) < 0 )
  {
    *((_QWORD *)a1 + 13) = -1LL;
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  v2 = (struct _KTHREAD *)*((_QWORD *)a1 + 362);
  if ( !v2 || KeGetCurrentThread() == v2 )
  {
    Pool = TdrAllocatePool(0x20uLL, PagedPool);
    if ( Pool )
    {
      Pool[1] = 0LL;
      *((_DWORD *)Pool + 4) = 0;
      *Pool = &CTDR_GDI_RESET_THREAD::`vftable';
      v4 = TdrReferenceRecoveryContext(a1);
      *(_QWORD *)(v5 + 24) = v4;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    if ( CVP_SYSTEM_THREAD::Start((void **)v5) < 0 )
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  return 0LL;
}

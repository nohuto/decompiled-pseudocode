/*
 * XREFs of MiExtendPagingFileMaximum @ 0x1402B7BC0
 * Callers:
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 * Callees:
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     MiLockPageInline @ 0x14002CE40 (MiLockPageInline.c)
 *     MiReleasePtes @ 0x1400340E0 (MiReleasePtes.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiDerefPageFileSpaceBitmaps @ 0x14014FBA8 (MiDerefPageFileSpaceBitmaps.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiExtendPagingFileMaximum(_QWORD *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // ecx
  void *v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r12
  unsigned int v11; // edi
  ULONG v12; // edx
  ULONG v13; // edi
  __int128 v14; // xmm1
  _DWORD *v15; // rdi
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r13
  unsigned __int64 v20; // rax
  __int64 v21; // r10
  __int64 v22; // rbx
  __int64 v23; // r9
  unsigned __int8 v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int8 v26; // di
  struct _KPRCB *v27; // rcx
  struct _KPRCB *v28; // rcx
  KSPIN_LOCK *SpinLock; // [rsp+20h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-50h] BYREF
  _DWORD *v31[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v32; // [rsp+50h] [rbp-28h]
  __int64 v33; // [rsp+60h] [rbp-18h]
  unsigned int v34; // [rsp+C0h] [rbp+48h]
  unsigned __int64 v35; // [rsp+C8h] [rbp+50h]
  __int64 v36; // [rsp+D0h] [rbp+58h] BYREF
  unsigned __int64 v37; // [rsp+D8h] [rbp+60h]

  v36 = a3;
  RtlSetAllBits((PRTL_BITMAP)(a2 + 8));
  RtlSetAllBits((PRTL_BITMAP)(a2 + 24));
  SpinLock = a1 + 29;
  KeAcquireInStackQueuedSpinLock(a1 + 29, &LockHandle);
  v6 = a1[14];
  v7 = *(_DWORD *)(v6 + 8);
  v34 = v7;
  if ( a3 )
  {
    v8 = (void *)(((a1[27] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v35 = (unsigned __int64)v8;
    v9 = ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v10 = ((4 * (unsigned __int64)v7) >> 12) + (((4LL * v7) & 0xFFF) != 0);
    v37 = v10;
    memmove((void *)v9, v8, 8 * v10);
    memset(v8, 0, 8 * v10);
    v7 = v34;
  }
  else
  {
    v35 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v37 = 0LL;
  }
  v11 = 8 * ((v7 >> 6) + ((v7 & 0x3F) != 0));
  memmove(*(void **)(a2 + 16), *(const void **)(v6 + 16), v11);
  memmove(*(void **)(a2 + 32), *(const void **)(v6 + 32), v11);
  v12 = *(_DWORD *)(v6 + 8);
  v13 = 8 * v11 - v12;
  if ( v13 )
  {
    RtlSetBits((PRTL_BITMAP)(a2 + 8), v12, v13);
    RtlSetBits((PRTL_BITMAP)(a2 + 24), *(_DWORD *)(v6 + 24), v13);
  }
  a1[1] = *(unsigned int *)(a2 + 8);
  v14 = *(_OWORD *)(v6 + 16);
  v31[1] = *(_DWORD **)(v6 + 8);
  v31[0] = (_DWORD *)v6;
  v33 = *(_QWORD *)(v6 + 32);
  v32 = v14;
  v15 = MiDerefPageFileSpaceBitmaps((__int64)a1, v31, 1);
  a1[14] = a2;
  a1[27] = v36;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(OldIrql);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v18 = v35;
  if ( v35 )
  {
    if ( v10 )
    {
      v19 = v10;
      do
      {
        v36 = MI_READ_PTE_LOCK_FREE(v9);
        if ( (v36 & 1) != 0 )
        {
          v20 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36);
          v22 = v21 + 48 * ((v20 >> 12) & 0xFFFFFFFFFLL);
          if ( (v23 | *(_QWORD *)(v22 + 8)) != v9 )
          {
            v24 = MiLockPageInline(v22);
            KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
            v36 = MI_READ_PTE_LOCK_FREE(v9);
            if ( (v36 & 1) != 0
              && v22 == 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v36) >> 12) & 0xFFFFFFFFFLL)
                      - 0x58000000000LL
              && (*(_QWORD *)(v22 + 8) | 0x8000000000000000uLL) != v9 )
            {
              v25 = (*(_QWORD *)(v22 + 40) ^ ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12)) & 0xFFFFFFFFFLL;
              *(_QWORD *)(v22 + 8) = v9;
              *(_QWORD *)(v22 + 40) ^= v25;
            }
            KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
            v26 = LockHandle.OldIrql;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
            {
              v27 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v27);
            }
            __writecr8(v26);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
            {
              v28 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v28->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v28);
            }
            __writecr8(v24);
          }
        }
        v9 += 8LL;
        --v19;
      }
      while ( v19 );
      LODWORD(v10) = v37;
      v18 = v35;
    }
    MiReleasePtes((__int64)&qword_14043C060, v18, v10);
  }
}

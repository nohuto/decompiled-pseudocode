/*
 * XREFs of CmpPostNotify @ 0x1405DD29C
 * Callers:
 *     CmpNotifyChangeKey @ 0x1405D0040 (CmpNotifyChangeKey.c)
 *     CmpReportNotifyHelper @ 0x1405DCEE0 (CmpReportNotifyHelper.c)
 *     CmpFlushNotify @ 0x140693968 (CmpFlushNotify.c)
 *     CmpCloseKeyObject @ 0x140695F40 (CmpCloseKeyObject.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeInsertQueueApc @ 0x1400F1500 (KeInsertQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpDelayedDerefKeys @ 0x1405DD0C4 (CmpDelayedDerefKeys.c)
 *     CmpSignalDeferredPosts @ 0x140696154 (CmpSignalDeferredPosts.c)
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x140696240 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x1406B417C (CmpCancelSubordinatePost.c)
 *     CmpAddToDelayedDeref @ 0x1406B41C8 (CmpAddToDelayedDeref.c)
 */

void __fastcall CmpPostNotify(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, void **a6, __int64 *a7)
{
  void **v8; // rbp
  __int64 *v9; // rsi
  __int64 **v10; // rdi
  unsigned __int64 v11; // r10
  __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 ***v18; // rax
  __int64 **v19; // rbx
  __int64 *v20; // rcx
  __int64 **v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 **v25; // rcx
  unsigned __int8 CurrentIrql; // r14
  __int64 v27; // rdx
  __int64 **v28; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v30; // rax
  __int64 v31; // [rsp+20h] [rbp-38h] BYREF
  __int64 *v32; // [rsp+28h] [rbp-30h]
  __int64 v33; // [rsp+30h] [rbp-28h] BYREF
  __int64 *v34; // [rsp+38h] [rbp-20h]
  unsigned int v35; // [rsp+78h] [rbp+20h]

  v35 = a4;
  if ( !a6 )
  {
    v32 = &v31;
    v31 = (__int64)&v31;
  }
  v8 = (void **)&v31;
  if ( a6 )
    v8 = a6;
  if ( !a7 )
  {
    v34 = &v33;
    v33 = (__int64)&v33;
  }
  v9 = &v33;
  if ( a7 )
    v9 = a7;
  if ( !a5 )
  {
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    a4 = v35;
  }
  v10 = (__int64 **)(a1 + 16);
  if ( *v10 == (__int64 *)v10 )
  {
    *(_DWORD *)(a1 + 48) |= 0x80000000;
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
  }
  else
  {
    *(_DWORD *)(a1 + 48) &= ~0x80000000;
LABEL_16:
    v11 = 1LL;
    while ( 1 )
    {
      v12 = *v10;
      if ( *v10 == (__int64 *)v10 )
        break;
      v13 = *v12;
      if ( (__int64 **)v12[1] != v10 || *(__int64 **)(v13 + 8) != v12 )
        goto LABEL_43;
      *v10 = (__int64 *)v13;
      *(_QWORD *)(v13 + 8) = v10;
      if ( (_DWORD)a4 == 267 && (v12[7] & 0x10000) == 0 )
      {
        v24 = v12[4];
        v25 = (__int64 **)v12[5];
        if ( *(__int64 **)(v24 + 8) != v12 + 4 )
          goto LABEL_43;
        if ( *v25 != v12 + 4 )
          goto LABEL_43;
        *v25 = (__int64 *)v24;
        *(_QWORD *)(v24 + 8) = v25;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v11);
        v27 = v12[2];
        v28 = (__int64 **)v12[3];
        if ( *(__int64 **)(v27 + 8) != v12 + 2 || *v28 != v12 + 2 )
          goto LABEL_43;
        *v28 = (__int64 *)v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( KiIrqlFlags
          && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v11) != 0
          && KeGetCurrentIrql() >= 2u
          && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          a4 = v35;
          v11 = 1LL;
        }
        __writecr8(CurrentIrql);
        if ( *((_DWORD *)v12 + 14) != (_DWORD)v11 )
        {
          CmpAddToDelayedDeref(v12, v8, a3, a4, v31, v32, v33, v34);
          CmpFreePostBlock(v12);
          goto LABEL_32;
        }
      }
      else
      {
        v14 = *((_DWORD *)v12 + 14);
        if ( (v14 & 0x10000) == 0 )
        {
          v22 = v12;
          do
          {
            v23 = v22[4];
            *(_DWORD *)(v23 + 24) &= ~0x10000u;
            v22 = (__int64 *)(v23 - 32);
          }
          while ( v22 != v12 );
          *((_DWORD *)v12 + 14) |= 0x10000u;
          v14 = *((_DWORD *)v12 + 14);
        }
        if ( (unsigned __int16)v14 != (_DWORD)v11 )
        {
          CmpCancelSubordinatePost(v12, v8);
          CmpAddToDelayedDeref(v12, v15, v16, v17, v31, v32, v33, v34);
          v14 = *((_DWORD *)v12 + 14);
        }
        if ( (unsigned __int16)v14 == (_DWORD)v11 )
        {
          v30 = v12[8];
          *v12 = 0LL;
          *(_DWORD *)(v30 + 24) = a4;
          KeSetEvent((PRKEVENT)v12[8], 0, 0);
          goto LABEL_32;
        }
        if ( (unsigned __int16)v14 == 2 )
        {
          KeInsertQueueApc(v12[8] + 16, (unsigned int)a4, (__int64)v12, 0);
LABEL_32:
          a4 = v35;
          goto LABEL_16;
        }
        if ( (unsigned int)(unsigned __int16)v14 - 3 <= (unsigned int)v11 )
        {
          CmpFreeSubordinatePost(v12);
          v18 = (__int64 ***)v12[3];
          v19 = (__int64 **)(v12 + 2);
          v20 = *v19;
          if ( (__int64 **)(*v19)[1] != v19
            || *v18 != v19
            || (*v18 = (__int64 **)v20, v20[1] = (__int64)v18, v21 = (__int64 **)v9[1], *v21 != v9) )
          {
LABEL_43:
            __fastfail(3u);
          }
          *v19 = v9;
          v19[1] = (__int64 *)v21;
          *v21 = (__int64 *)v19;
          v9[1] = (__int64)v19;
          goto LABEL_32;
        }
      }
    }
    if ( !a5 )
      ExReleaseFastMutexUnsafe(&CmpPostLock);
    if ( !a6 )
      CmpDelayedDerefKeys(v8);
    if ( !a7 )
      CmpSignalDeferredPosts(v9);
  }
}

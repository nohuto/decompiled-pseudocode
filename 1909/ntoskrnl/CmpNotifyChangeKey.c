/*
 * XREFs of CmpNotifyChangeKey @ 0x14062FDF0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x14062F530 (NtNotifyChangeMultipleKeys.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14009EE00 (ExAllocatePoolWithQuotaTag.c)
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     SeCaptureSubjectContext @ 0x1405DE350 (SeCaptureSubjectContext.c)
 *     CmpPostNotify @ 0x140631680 (CmpPostNotify.c)
 *     CmpFreePostBlock @ 0x1406D113C (CmpFreePostBlock.c)
 */

__int64 __fastcall CmpNotifyChangeKey(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v8; // edi
  char *v11; // r14
  __int64 v12; // rbx
  char *PoolWithQuotaTag; // rax
  _QWORD *v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rcx
  __int64 *SListFaultAddress; // rdx
  _QWORD *v21; // rax
  unsigned __int8 CurrentIrql; // bl
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v25; // rdx
  __int64 **v26; // rcx
  void **p_SListFaultAddress; // rax
  _QWORD *v28; // rdx
  __int64 **v29; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v31; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-A8h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-68h] BYREF
  char v34; // [rsp+50h] [rbp-58h]
  char v35; // [rsp+51h] [rbp-57h]
  _BYTE v36[5]; // [rsp+52h] [rbp-56h]
  char v37; // [rsp+57h] [rbp-51h]
  _QWORD v38[2]; // [rsp+60h] [rbp-48h] BYREF

  v8 = a3;
  if ( (*(_DWORD *)(a1 + 48) & 9) != 0 )
  {
    CmpFreePostBlock(a2);
    return 3221225852LL;
  }
  v11 = *(char **)(a1 + 16);
  v12 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
  if ( !v11 )
  {
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x58uLL, 0x626E4D43u);
    v11 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      CmpFreePostBlock(a2);
      return 3221225626LL;
    }
    *((_QWORD *)PoolWithQuotaTag + 4) = *(_QWORD *)(a1 + 8);
    *((_DWORD *)PoolWithQuotaTag + 12) = v8 & 0x3FFFFFFF | ((a4 & 1) << 30);
    *((_QWORD *)PoolWithQuotaTag + 3) = PoolWithQuotaTag + 16;
    *((_QWORD *)PoolWithQuotaTag + 2) = PoolWithQuotaTag + 16;
    *(_QWORD *)(a1 + 16) = PoolWithQuotaTag;
    *((_QWORD *)PoolWithQuotaTag + 5) = a1;
    SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)(PoolWithQuotaTag + 56));
    v14 = (_QWORD *)(v12 + 1584);
    v15 = *(__int64 **)(v12 + 1584);
    if ( v15 )
    {
      a3 = (*(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) >> 21) & 0x3FF;
      while ( 1 )
      {
        v14 = v15;
        if ( ((*(_DWORD *)(v15[4] + 8) >> 21) & 0x3FFu) > a3 )
          break;
        v15 = (__int64 *)*v15;
        if ( !*v14 )
          goto LABEL_8;
      }
      *(_QWORD *)v11 = v15;
      *(_QWORD *)v15[1] = v11;
      *((_QWORD *)v11 + 1) = v15[1];
      v15[1] = (__int64)v11;
    }
    else
    {
LABEL_8:
      *v14 = v11;
      *(_QWORD *)v11 = 0LL;
      *((_QWORD *)v11 + 1) = v14;
    }
  }
  v16 = *((_QWORD *)v11 + 2);
  v17 = v11 + 16;
  if ( *(char **)(v16 + 8) != v11 + 16 )
    goto LABEL_32;
  *a2 = v16;
  a2[1] = v17;
  *(_QWORD *)(v16 + 8) = a2;
  v18 = a2 + 4;
  *v17 = a2;
  if ( (a2[7] & 0x10000) != 0 )
  {
    a2[5] = a2 + 4;
    *v18 = v18;
  }
  else
  {
    v28 = *(_QWORD **)(a7 + 40);
    if ( *v28 != a7 + 32 )
      goto LABEL_32;
    *v18 = a7 + 32;
    a2[5] = v28;
    *v28 = v18;
    *(_QWORD *)(a7 + 40) = v18;
  }
  if ( (unsigned int)(unsigned __int16)*((_DWORD *)a2 + 14) - 3 > 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    CurrentThread = KeGetCurrentThread();
    if ( ((__int64)CurrentThread[1].Queue & 8) == 0 )
    {
      LOBYTE(CurrentThread[1].Queue) |= 8u;
      _InterlockedOr(v32, 0);
      CurrentThread[1].QuantumTarget = (unsigned __int64)&CurrentThread[1].SListFaultAddress;
      CurrentThread[1].SListFaultAddress = &CurrentThread[1].SListFaultAddress;
    }
    v25 = KeGetCurrentThread();
    v26 = (__int64 **)(a2 + 2);
    if ( (a2[7] & 0x10000) != 0 )
    {
      p_SListFaultAddress = &v25[1].SListFaultAddress;
      SListFaultAddress = (__int64 *)v25[1].SListFaultAddress;
      if ( (void **)SListFaultAddress[1] == p_SListFaultAddress )
      {
        *v26 = SListFaultAddress;
        a2[3] = p_SListFaultAddress;
        SListFaultAddress[1] = (__int64)v26;
        *p_SListFaultAddress = v26;
        goto LABEL_25;
      }
    }
    else
    {
      SListFaultAddress = (__int64 *)&v25[1].SListFaultAddress;
      v29 = (__int64 **)SListFaultAddress[1];
      if ( *v29 == SListFaultAddress )
      {
        *v26 = SListFaultAddress;
        a2[3] = v29;
        *v29 = (__int64 *)v26;
        SListFaultAddress[1] = (__int64)v26;
LABEL_25:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        goto LABEL_16;
      }
    }
LABEL_32:
    __fastfail(3u);
  }
  v19 = (_QWORD *)qword_1409AD6B0;
  SListFaultAddress = &CmpAsyncKernelPostList;
  v21 = a2 + 2;
  if ( *(__int64 **)qword_1409AD6B0 != &CmpAsyncKernelPostList )
    goto LABEL_32;
  *v21 = &CmpAsyncKernelPostList;
  a2[3] = v19;
  *v19 = v21;
  qword_1409AD6B0 = (__int64)(a2 + 2);
LABEL_16:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x2000000) != 0 )
  {
    v31 = *((_DWORD *)a2 + 14);
    v34 = v31;
    *(_DWORD *)&v36[1] = 0;
    v33[1] = *(_QWORD *)(a1 + 8);
    v37 = 0;
    v38[0] = v33;
    v33[0] = a2;
    *(_DWORD *)v36 = (v31 & 0x10000) != 0;
    v35 = a4;
    v38[1] = 19LL;
    EtwTraceKernelEvent((__int64)v38, 1u, 0x42000000u, 0x930u, 0x501902u);
  }
  if ( *((int *)v11 + 12) >= 0 )
    return 259LL;
  CmpPostNotify((_DWORD)v11, (_DWORD)SListFaultAddress, a3, 268, 1, 0LL, 0LL);
  return 0LL;
}

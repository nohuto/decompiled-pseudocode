/*
 * XREFs of MiEmptyPageAccessLog @ 0x140088570
 * Callers:
 *     MiDrainSystemAccessLog @ 0x14000FF28 (MiDrainSystemAccessLog.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     KiOutSwapProcesses @ 0x14010B4D0 (KiOutSwapProcesses.c)
 *     MiAllocateAccessLog @ 0x140114880 (MiAllocateAccessLog.c)
 *     MmDeleteProcessAddressSpace @ 0x140609AD0 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     MiGetSubsectionDriverProtos @ 0x14001B7BC (MiGetSubsectionDriverProtos.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x14001E38C (ObpTraceObjectDereferenceIfActive.c)
 *     ObReferenceObjectSafeWithTag @ 0x1400514C0 (ObReferenceObjectSafeWithTag.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFE4 (ObFastReferenceObjectLocked.c)
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ObReferenceObjectExWithTag @ 0x140111F40 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140125EA0 (ObpDeferObjectDeletion.c)
 *     MiGetSharedProtos @ 0x140177274 (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(PVOID *P)
{
  unsigned __int64 v1; // r13
  unsigned int v2; // r10d
  unsigned __int16 v3; // r8
  PVOID *v4; // r12
  __int64 v5; // rax
  unsigned int v6; // r11d
  unsigned __int64 v7; // rbx
  __int64 *v8; // r15
  __int64 *v9; // rdi
  unsigned __int64 v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned __int16 v13; // r14
  unsigned __int64 v14; // rbp
  __int64 v15; // rbp
  unsigned __int64 v16; // r15
  __int64 **v17; // rsi
  _QWORD *v18; // r12
  unsigned __int64 v19; // rdx
  unsigned int v20; // ebx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  volatile signed __int64 *v25; // r14
  signed __int64 v26; // rdx
  signed __int64 v27; // rax
  signed __int64 v28; // rbp
  unsigned int v29; // edx
  ULONG_PTR v30; // rbp
  __int64 *v31; // rdi
  signed __int64 v32; // rax
  signed __int64 v33; // rtt
  __int64 v34; // r8
  signed __int64 v35; // rax
  signed __int64 v36; // rtt
  __int64 SharedProtos; // rax
  signed __int64 BugCheckParameter4; // rax
  KIRQL v39; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD *v41; // rbx
  PVOID v42; // rcx
  _DWORD v43[2]; // [rsp+30h] [rbp-68h]
  unsigned __int64 v44; // [rsp+38h] [rbp-60h]
  PVOID Pa; // [rsp+40h] [rbp-58h]
  unsigned __int64 v46; // [rsp+48h] [rbp-50h]
  PVOID *v47; // [rsp+A0h] [rbp+8h]
  unsigned int v48; // [rsp+A8h] [rbp+10h]
  unsigned int v49; // [rsp+B0h] [rbp+18h]
  unsigned int v50; // [rsp+B8h] [rbp+20h]

  v47 = P;
  v1 = (unsigned __int64)P[7];
  v2 = 0;
  v3 = 0;
  v50 = 0;
  v49 = 0;
  v4 = P;
  v43[0] = 0;
  v43[1] = 3;
  v46 = v1;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 1740) & 0x1000) != 0 || (v5 = *(_QWORD *)(v1 + 1024)) == 0 )
    v6 = -1;
  else
    v6 = *(_DWORD *)(v5 + 8);
  v48 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(v4 + 9);
    v9 = (__int64 *)((char *)v4[4] - 8);
    Pa = *v4;
    v10 = 0LL;
    if ( v9 >= (__int64 *)v4 + 9 )
    {
      do
      {
        v11 = *v9;
        v12 = (unsigned __int64)*v9 >> 9;
        v13 = *v9 & 0x1FF;
        if ( v13 )
        {
          if ( v1 > 1 )
          {
            v14 = v11 >> 16;
            if ( v13 == v3 )
            {
              v7 += (__int64)(v14 - v10) >> 3 << 12 << v43[(v7 >> 10) & 1];
            }
            else
            {
              v18 = (_QWORD *)*((_QWORD *)v4[6] - (*v9 & 0x1FF));
              v19 = v18[1];
              v20 = v2 ^ ((unsigned __int16)v2 ^ (unsigned __int16)(32 * *(_DWORD *)(*v18 + 56LL))) & 0x400;
              v49 = v20;
              v2 = v20;
              v50 = v20;
              if ( (*(_DWORD *)(*v18 + 56LL) & 0x20) != 0 )
              {
                if ( v14 < v19 || v14 >= v19 + 8LL * *((unsigned int *)v18 + 11) )
                {
                  if ( (*((_BYTE *)v18 + 34) & 2) != 0 )
                  {
                    SharedProtos = MiGetSharedProtos(*v18, v6, v18);
                    v2 = v20;
                    v6 = v48;
                  }
                  else
                  {
                    SharedProtos = MiGetSubsectionDriverProtos(v18);
                  }
                  v21 = (v14 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                }
                else
                {
                  v21 = (v14 << 9) - (v19 << 9);
                }
                v22 = ((unsigned __int64)*((unsigned int *)v18 + 9) << 9) + (v21 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                if ( v19 )
                  v34 = (__int64)(v14 - v19) >> 3 << 12;
                else
                  v34 = 0LL;
                v22 = v34 + ((((unsigned __int64)((_WORD)v18[4] & 0xFFC0) << 26) | *((unsigned int *)v18 + 9)) << 12);
              }
              v4 = v47;
              v3 = v13;
              v23 = v22 << LOBYTE(v43[(v20 >> 10) & 1]);
              HIDWORD(v44) = HIDWORD(v23);
              LODWORD(v44) = v13 | v20 & 0x400 | v23 & 0xFFFFFA00;
              v7 = v44;
            }
            v10 = v14;
            *v9 = v7;
            *(_DWORD *)v9 ^= ((unsigned __int16)v7 ^ (unsigned __int16)((_WORD)v12 << 9)) & 0x200;
          }
        }
        else
        {
          v15 = v11 >> 16 << 25 >> 16;
          *v9 = v15;
          *(_DWORD *)v9 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((_WORD)v12 << 9)) & 0x200;
        }
        --v9;
      }
      while ( v9 >= v8 );
    }
    if ( v1 <= 1 )
      goto LABEL_17;
    v16 = (unsigned __int64)v4[6] - 8;
    v17 = (__int64 **)((char *)v4[5] + 8);
    if ( (unsigned __int64)v17 > v16 )
      goto LABEL_16;
    do
    {
      v24 = **v17;
      v25 = (volatile signed __int64 *)(v24 + 64);
      _m_prefetchw((const void *)(v24 + 64));
      v26 = *(_QWORD *)(v24 + 64);
      if ( (v26 & 0xF) != 0 )
      {
        do
        {
          v27 = _InterlockedCompareExchange64(v25, v26 - 1, v26);
          if ( v26 == v27 )
            break;
          v26 = v27;
        }
        while ( (v27 & 0xF) != 0 );
      }
      v28 = v26;
      v29 = v26 & 0xF;
      v30 = v28 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v29 > 1 )
        goto LABEL_28;
      if ( v29 )
      {
        ObReferenceObjectExWithTag(v30);
        _m_prefetchw((const void *)v25);
        v35 = *v25;
        while ( (v35 & 0xF) == 0 )
        {
          if ( v30 != (v35 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v36 = v35;
          v35 = _InterlockedCompareExchange64(v25, v35 + 15, v35);
          if ( v36 == v35 )
            goto LABEL_28;
        }
        ObpTraceObjectDereferenceIfActive(v30 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( *(_QWORD *)(v30 - 40) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v30 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v30 - 48) >> 8)],
              v30,
              6uLL,
              *(_QWORD *)(v30 - 40));
          if ( BugCheckParameter4 < 0 )
            KeBugCheckEx(0x18u, 0LL, v30, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v30 - 48);
        }
LABEL_28:
        if ( v30 )
          goto LABEL_29;
      }
      v39 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v24 + 72));
      v30 = ObFastReferenceObjectLocked((_QWORD *)(v24 + 64));
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v24 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v39 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v39);
LABEL_29:
      v31 = *(__int64 **)(v30 + 24);
      _m_prefetchw((const void *)v25);
      v32 = *v25;
      if ( (v30 ^ *v25) >= 0xF )
      {
LABEL_44:
        ObDereferenceObjectDeferDelete((PVOID)v30);
      }
      else
      {
        while ( 1 )
        {
          v33 = v32;
          v32 = _InterlockedCompareExchange64(v25, v32 + 1, v32);
          if ( v33 == v32 )
            break;
          if ( (v30 ^ v32) >= 0xF )
            goto LABEL_44;
        }
      }
      *v17++ = v31;
    }
    while ( (unsigned __int64)v17 <= v16 );
    v1 = v46;
    v4 = v47;
    v50 = v49;
LABEL_16:
    if ( ObReferenceObjectSafeWithTag(v1) )
    {
LABEL_17:
      MiQueuePageAccessLog(v4);
      v47 = (PVOID *)Pa;
      v4 = (PVOID *)Pa;
      if ( Pa )
      {
        v2 = v50;
        v3 = 0;
        v6 = v48;
        continue;
      }
    }
    else
    {
      ExFreePoolWithTag(v4, 0);
      v41 = Pa;
      v42 = Pa;
      if ( Pa )
      {
        do
        {
          v41 = (_QWORD *)*v41;
          ExFreePoolWithTag(v42, 0);
          v42 = v41;
        }
        while ( v41 );
      }
    }
    break;
  }
}

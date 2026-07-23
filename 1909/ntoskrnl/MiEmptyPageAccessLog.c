/*
 * XREFs of MiEmptyPageAccessLog @ 0x14001CD20
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140048180 (MiTrimOrAgeWorkingSet.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MmOutSwapProcess @ 0x1400746E0 (MmOutSwapProcess.c)
 *     MiAllocateAccessLog @ 0x140112C50 (MiAllocateAccessLog.c)
 *     MiDrainSystemAccessLog @ 0x14012FE58 (MiDrainSystemAccessLog.c)
 *     MmDeleteProcessAddressSpace @ 0x140644438 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140009AC0 (ObpTraceObjectDereferenceIfActive.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     ExAcquireSpinLockShared @ 0x140061A20 (ExAcquireSpinLockShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061AC0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x140066AD0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     MiGetSubsectionDriverProtos @ 0x1400960CC (MiGetSubsectionDriverProtos.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D4890 (MmFreeAccessPfnBuffer.c)
 *     ObReferenceObjectExWithTag @ 0x14010A6B0 (ObReferenceObjectExWithTag.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     MiGetSharedProtos @ 0x14015CC6C (MiGetSharedProtos.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CC5B0 (RtlpInterlockedPushEntrySList.c)
 *     ObpPushStackInfo @ 0x1402ED44C (ObpPushStackInfo.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiEmptyPageAccessLog(_SLIST_ENTRY *P)
{
  unsigned __int64 v1; // r13
  unsigned __int16 v2; // r8
  _SLIST_ENTRY *v3; // r9
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 *v8; // r12
  __int64 *v9; // rsi
  unsigned __int64 v10; // r11
  __int16 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rbp
  unsigned __int16 v15; // r15
  __int64 v16; // r14
  unsigned __int64 v17; // r12
  __int64 **v18; // r14
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  unsigned int Alignment_low; // esi
  int v22; // esi
  unsigned __int64 v23; // r14
  _QWORD *v24; // rbx
  unsigned __int64 v25; // r8
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdx
  __int64 v29; // rsi
  volatile signed __int64 *v30; // r15
  signed __int64 v31; // rdx
  signed __int64 v32; // rax
  signed __int64 v33; // rbp
  unsigned int v34; // edx
  ULONG_PTR v35; // rbp
  __int64 *v36; // rsi
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  __int64 v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rtt
  __int64 SharedProtos; // rax
  ULONG_PTR v43; // r13
  signed __int64 BugCheckParameter4; // rax
  KIRQL v45; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  _SLIST_ENTRY *v47; // rbx
  _SLIST_ENTRY *i; // rcx
  _SLIST_ENTRY *Pa; // [rsp+30h] [rbp-58h]
  unsigned __int64 v50; // [rsp+38h] [rbp-50h]
  _SLIST_ENTRY *ListEntry; // [rsp+90h] [rbp+8h]
  unsigned int v52; // [rsp+98h] [rbp+10h]
  int v53; // [rsp+A0h] [rbp+18h]
  int v54; // [rsp+A4h] [rbp+1Ch]
  unsigned __int64 v55; // [rsp+A8h] [rbp+20h]

  ListEntry = P;
  v1 = *((_QWORD *)&P[3].Next + 1);
  v2 = 0;
  v53 = 0;
  v3 = P;
  v54 = 3;
  v4 = 0;
  v50 = v1;
  if ( v1 <= 1 || (*(_DWORD *)(v1 + 1788) & 0x1000) != 0 || (v5 = *(_QWORD *)(v1 + 1024)) == 0 )
    v6 = 0xFFFFFFFFLL;
  else
    v6 = *(unsigned int *)(v5 + 8);
  v52 = v6;
  v7 = 0LL;
  while ( 2 )
  {
    v8 = (__int64 *)(&v3[4].Next + 1);
    v9 = (__int64 *)(&v3[2].Next[-1].Next + 1);
    v10 = 0xFFFFF68000000000uLL;
    v11 = 511;
    Pa = v3->Next;
    v12 = 0LL;
    if ( v9 >= (__int64 *)&v3[4].Next + 1 )
    {
      do
      {
        v13 = *v9;
        v14 = (unsigned __int64)*v9 >> 9;
        v15 = v11 & *v9;
        if ( v15 )
        {
          if ( v1 > 1 )
          {
            v23 = v13 >> 16;
            if ( v15 == v2 )
            {
              v7 += (__int64)(v23 - v12) >> 3 << 12 << *(&v53 + ((v7 >> 10) & 1));
            }
            else
            {
              v24 = (_QWORD *)*((_QWORD *)&v3[3].Next->Next - v15);
              v25 = v24[1];
              v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(32 * *(_DWORD *)(*v24 + 56LL))) & 0x400;
              if ( (*(_DWORD *)(*v24 + 56LL) & 0x20) != 0 )
              {
                if ( v23 < v25 || v23 >= v25 + 8LL * *((unsigned int *)v24 + 11) )
                {
                  if ( (*((_BYTE *)v24 + 34) & 2) != 0 )
                  {
                    SharedProtos = MiGetSharedProtos(*v24, v6, v24);
                    v11 = 511;
                    v10 = 0xFFFFF68000000000uLL;
                  }
                  else
                  {
                    SharedProtos = MiGetSubsectionDriverProtos(v24);
                  }
                  v26 = (v23 << 9) - (*(_QWORD *)(SharedProtos + 72) << 9);
                }
                else
                {
                  v26 = (v23 << 9) - (v25 << 9);
                }
                v27 = ((unsigned __int64)*((unsigned int *)v24 + 9) << 9) + (v26 & 0xFFFFFFFFFFFFF000uLL);
              }
              else
              {
                if ( v25 )
                  v39 = (__int64)(v23 - v25) >> 3 << 12;
                else
                  v39 = 0LL;
                v27 = ((*((unsigned int *)v24 + 9) | ((unsigned __int64)((_WORD)v24[4] & 0xFFC0) << 26)) << 12) + v39;
              }
              v3 = ListEntry;
              v2 = v15;
              v28 = v27 << *((_BYTE *)&v53 + 4 * ((v4 >> 10) & 1));
              HIDWORD(v55) = HIDWORD(v28);
              LODWORD(v55) = v15 | v4 & 0x400 | v28 & 0xFFFFFA00;
              v7 = v55;
            }
            v12 = v23;
            *v9 = v7;
            *(_DWORD *)v9 ^= ((unsigned __int16)v7 ^ (unsigned __int16)((_WORD)v14 << 9)) & 0x200;
          }
        }
        else
        {
          v16 = (__int64)((v13 >> 16 << 25) - (v10 << 25)) >> 16;
          *v9 = v16;
          *(_DWORD *)v9 = v16 ^ ((unsigned __int16)v16 ^ (unsigned __int16)((_WORD)v14 << 9)) & 0x200;
        }
        v6 = v52;
        --v9;
      }
      while ( v9 >= v8 );
    }
    if ( v1 <= 1 )
      goto LABEL_16;
    v17 = (unsigned __int64)(&v3[3].Next[-1].Next + 1);
    v18 = (__int64 **)(*((_QWORD *)&v3[2].Next + 1) + 8LL);
    if ( (unsigned __int64)v18 > v17 )
      goto LABEL_12;
    do
    {
      v29 = **v18;
      v30 = (volatile signed __int64 *)(v29 + 64);
      _m_prefetchw((const void *)(v29 + 64));
      v31 = *(_QWORD *)(v29 + 64);
      if ( (v31 & 0xF) != 0 )
      {
        do
        {
          v32 = _InterlockedCompareExchange64(v30, v31 - 1, v31);
          if ( v31 == v32 )
            break;
          v31 = v32;
        }
        while ( (v32 & 0xF) != 0 );
      }
      v33 = v31;
      v34 = v31 & 0xF;
      v35 = v33 & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v34 > 1 )
        goto LABEL_36;
      if ( v34 )
      {
        ObReferenceObjectExWithTag(v35);
        _m_prefetchw((const void *)v30);
        v40 = *v30;
        while ( (v40 & 0xF) == 0 )
        {
          if ( v35 != (v40 & 0xFFFFFFFFFFFFFFF0uLL) )
            break;
          v41 = v40;
          v40 = _InterlockedCompareExchange64(v30, v40 + 15, v40);
          if ( v41 == v40 )
            goto LABEL_36;
        }
        v43 = v35 - 48;
        ObpTraceObjectDereferenceIfActive(v35 - 48);
        BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v35 - 48), 0xFFFFFFFFFFFFFFF1uLL)
                           - 15;
        if ( BugCheckParameter4 <= 0 )
        {
          if ( *(_QWORD *)(v43 + 8) )
            KeBugCheckEx(
              0x18u,
              ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v35 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v35 - 48) >> 8)],
              v35,
              6uLL,
              *(_QWORD *)(v43 + 8));
          if ( BugCheckParameter4 < 0 )
            KeBugCheckEx(0x18u, 0LL, v35, 5uLL, BugCheckParameter4);
          ObpDeferObjectDeletion(v35 - 48);
        }
LABEL_36:
        if ( v35 )
          goto LABEL_37;
      }
      v45 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v29 + 72));
      v35 = ObFastReferenceObjectLocked(v29 + 64);
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v29 + 72));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v45 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v45);
LABEL_37:
      v36 = *(__int64 **)(v35 + 24);
      _m_prefetchw((const void *)v30);
      v37 = *v30;
      if ( (v35 ^ *v30) >= 0xF )
      {
LABEL_61:
        ObDereferenceObjectDeferDelete((PVOID)v35);
      }
      else
      {
        while ( 1 )
        {
          v38 = v37;
          v37 = _InterlockedCompareExchange64(v30, v37 + 1, v37);
          if ( v38 == v37 )
            break;
          if ( (v35 ^ v37) >= 0xF )
            goto LABEL_61;
        }
      }
      *v18++ = v36;
    }
    while ( (unsigned __int64)v18 <= v17 );
    v1 = v50;
    v3 = ListEntry;
LABEL_12:
    _m_prefetchw((const void *)(v1 - 48));
    v19 = *(_QWORD *)(v1 - 48);
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = v19;
        v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v1 - 48), v19 + 1, v19);
        if ( v20 == v19 )
          break;
        if ( !v19 )
          goto LABEL_79;
      }
      if ( ObpTraceFlags )
      {
        ObpPushStackInfo(v1 - 48);
        v3 = ListEntry;
      }
LABEL_16:
      *((_QWORD *)&v3[1].Next + 1) = MEMORY[0xFFFFF78000000320];
      *((_DWORD *)&v3->Next + 3) = dword_140503750;
      if ( !ExAcquireRundownProtection_0(&RunRef) )
        goto LABEL_47;
      Alignment_low = LOWORD(ListHead.Alignment);
      if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_140503728 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140467610, 0x64u);
        v22 = 0;
      }
      else
      {
        RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
        if ( Alignment_low >= 8 && !Event.Header.SignalState )
          KeSetEvent(&Event, 0, 0);
        v22 = 1;
      }
      ExReleaseRundownProtection_0(&RunRef);
      if ( !v22 )
LABEL_47:
        MmFreeAccessPfnBuffer(ListEntry);
      ListEntry = Pa;
      v3 = Pa;
      if ( Pa )
      {
        v6 = v52;
        v2 = 0;
        continue;
      }
    }
    else
    {
LABEL_79:
      ExFreePoolWithTag(v3, 0);
      v47 = Pa;
      for ( i = Pa; v47; i = v47 )
      {
        v47 = v47->Next;
        ExFreePoolWithTag(i, 0);
      }
    }
    break;
  }
}

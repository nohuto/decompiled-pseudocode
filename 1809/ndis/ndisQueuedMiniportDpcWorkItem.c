/*
 * XREFs of ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ndisTraceDpcEnd @ 0x1C0050E24 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C0050F0C (ndisTraceDpcStart.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C006ED38 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C006EECC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0071E98 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisQueuedMiniportDpcWorkItem(__int64 a1)
{
  unsigned int Number; // edx
  __int64 v3; // rax
  ULONG v4; // ecx
  __int64 v5; // rdi
  char v6; // r15
  char v7; // r15
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rsi
  unsigned int v11; // ebx
  void (__fastcall *v12)(__int64, __int64, __int64 *, _QWORD); // r12
  void (__fastcall *v13)(__int64, _QWORD, __int64, __int64 *, _QWORD); // r13
  char DatapathCyclesMask; // bl
  __int64 v15; // rcx
  __int64 v16; // rsi
  unsigned int v17; // r15d
  char Type_high; // r12
  KIRQL v19; // al
  struct _NDIS_REFCOUNT_BLOCK *v20; // rcx
  KIRQL v21; // r13
  __int64 v22; // rbx
  int v23; // eax
  char *v24; // rdi
  __int64 *v25; // rax
  __int64 v26; // rcx
  LARGE_INTEGER v27; // rax
  KIRQL v28; // al
  ULONG_PTR v29; // r8
  KIRQL v30; // si
  __int64 v31; // rcx
  unsigned __int8 v32; // r10
  unsigned __int8 v33; // dl
  char v34; // al
  int v35; // ebx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // rax
  ULONG_PTR v39; // rbx
  unsigned int v40; // edx
  int v41; // ecx
  struct _KEVENT *v42; // rcx
  char v43; // [rsp+38h] [rbp-79h]
  KIRQL NewIrql; // [rsp+39h] [rbp-78h]
  char v45; // [rsp+3Ah] [rbp-77h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+3Ch] [rbp-75h] BYREF
  __int64 v47; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v48; // [rsp+48h] [rbp-69h]
  ULONG v49; // [rsp+4Ch] [rbp-65h]
  __int64 v50; // [rsp+50h] [rbp-61h]
  __int64 v51; // [rsp+58h] [rbp-59h]
  __int64 Clock; // [rsp+60h] [rbp-51h]
  struct NDIS_PCW_CONTEXT v53; // [rsp+68h] [rbp-49h] BYREF
  __int64 v54; // [rsp+80h] [rbp-31h]
  __int64 v55; // [rsp+88h] [rbp-29h]
  _QWORD WnodeEventItem[6]; // [rsp+90h] [rbp-21h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+C0h] [rbp+Fh] BYREF
  _GROUP_AFFINITY PreviousAffinity; // [rsp+D0h] [rbp+1Fh] BYREF

  PreviousAffinity.Mask = 0LL;
  *(_QWORD *)&PreviousAffinity.Group = 0LL;
  Affinity.Mask = 0LL;
  *(_QWORD *)&Affinity.Group = 0LL;
  Number = KeGetPcr()->Prcb.Number;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_DWORD *)(a1 + 64);
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_BYTE *)(a1 + 68);
  ++ndisWorkitemDpcs;
  v7 = v6 & 2;
  v54 = v3;
  v8 = *(_QWORD *)(v5 + 96);
  v50 = *(_QWORD *)(a1 + 48);
  v51 = *(_QWORD *)(a1 + 56);
  v48 = Number;
  v49 = v4;
  v45 = v7;
  NewIrql = 0;
  if ( Number != v4 )
  {
    ProcNumber = 0;
    KeGetProcessorNumberFromIndex(v4, &ProcNumber);
    Affinity.Group = ProcNumber.Group;
    Affinity.Mask = 1LL << ProcNumber.Number;
    KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
  }
  if ( !v7 )
    NewIrql = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 72));
  *(_DWORD *)(a1 + 68) &= ~1u;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 72));
  v10 = *(_QWORD *)(v5 + 96);
  Clock = 0LL;
  v11 = -1;
  v12 = *(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD))(v5 + 24);
  v13 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *, _QWORD))(v5 + 184);
  v47 = 0LL;
  v53.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(v10 + 40);
  v53.DatapathEventsMask = *(_DWORD *)(v10 + 48);
  v53.DatapathCyclesMask = *(_DWORD *)(v10 + 80);
  v55 = v10;
  v53.CurrentCpu = -1;
  if ( HIBYTE(dword_1C00A2098) )
  {
    v43 = 1;
    ndisTraceDpcStart(v10, 1LL);
    Clock = WmiGetClock(0LL, 0LL, v37);
  }
  else
  {
    v43 = 0;
  }
  if ( *(_BYTE *)(v5 + 4) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) != 1 )
      goto LABEL_35;
    goto LABEL_66;
  }
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
  {
    if ( HIDWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) )
    {
      v11 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
    else
    {
      v11 = ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12) + *(_QWORD *)(v10 + 3320))];
      if ( *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) < v11 )
        v11 = *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1);
    }
  }
  LODWORD(v47) = v11;
  DatapathCyclesMask = v53.DatapathCyclesMask;
  if ( (v53.DatapathCyclesMask & 1) != 0 )
  {
    ndisPcwStartCycleCounter(&v53, 0);
    DatapathCyclesMask = v53.DatapathCyclesMask;
  }
  v15 = *(_QWORD *)(v5 + 8);
  if ( *(_BYTE *)(v5 + 193) == 1 )
    v13(v15, (unsigned int)v50, v51, &v47, 0LL);
  else
    v12(v15, v51, &v47, 0LL);
  if ( (DatapathCyclesMask & 1) != 0 )
    ndisPcwEndCycleCounter(&v53, 0, 0xDuLL);
  if ( (v47 & 0x100000000LL) == 0 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF) != 1 || !*(_BYTE *)(v5 + 4) )
      goto LABEL_35;
LABEL_66:
    KeSetEvent((PRKEVENT)(v5 + 128), 0, 0);
    goto LABEL_35;
  }
  v16 = *(_QWORD *)(v5 + 96);
  v17 = KeGetPcr()->Prcb.Number;
  Type_high = HIBYTE(WPP_MAIN_CB.DeviceQueue.Type);
  if ( (*(_DWORD *)(v16 + 48) & 0x800000) != 0 )
  {
    v36 = *(_QWORD *)(v16 + 40) + ndisPcwPerCpuDataStride * KeGetPcr()->Prcb.Number;
    ++*(_QWORD *)(ndisPcwOffsetToPerCpuData + v36 + 288);
  }
  v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 4472));
  v20 = *(struct _NDIS_REFCOUNT_BLOCK **)(v16 + 4928);
  v21 = v19;
  if ( v20 )
    NdisReferenceWithTag(v20, 0x4Du);
  ++*(_DWORD *)(v16 + 4480);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(13LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v16, *(unsigned int *)(v16 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 4472), v21);
  v22 = *(_QWORD *)(v5 + 216) + 80 * (v17 + ndisMaxNumberOfProcessors * (*(_BYTE *)(v5 + 193) != 0 ? v50 : 0));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v22 + 72));
  if ( (*(_DWORD *)(v22 + 68) & 1) != 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 104), 0xFFFFFFFF);
    ndisDereferenceMiniport(v16, 0x4Du);
  }
  else
  {
    *(_QWORD *)(v22 + 32) = v54;
    *(_QWORD *)(v22 + 48) = v50;
    *(_QWORD *)(v22 + 56) = v51;
    *(_QWORD *)(v22 + 40) = v5;
    *(_DWORD *)(v22 + 64) = v17;
    *(_DWORD *)(v22 + 68) = 1;
    if ( Type_high )
    {
      v23 = 1;
      if ( HIBYTE(word_1C00A209C) )
      {
        memset((char *)WnodeEventItem + 2, 0, 0x2EuLL);
        HIDWORD(WnodeEventItem[5]) = 0x20000;
        LOWORD(WnodeEventItem[0]) = 48;
        WnodeEventItem[1] = qword_1C00A2090;
        *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
        BYTE4(WnodeEventItem[0]) = 24;
        IoWMIWriteEvent(WnodeEventItem);
        v23 = *(_DWORD *)(v22 + 68);
      }
      *(_DWORD *)(v22 + 68) = v23 | 2;
      v24 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)KeGetPcr()->Prcb.Number;
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v24 + 2);
      v25 = (__int64 *)*((_QWORD *)v24 + 1);
      if ( (char *)*v25 != v24 )
        __fastfail(3u);
      *(_QWORD *)v22 = v24;
      *(_QWORD *)(v22 + 8) = v25;
      *v25 = v22;
      *((_QWORD *)v24 + 1) = v22;
      ++*((_DWORD *)v24 + 6);
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v24 + 2);
      KeReleaseSemaphore((PRKSEMAPHORE)v24 + 1, 0, 1, 0);
      HIDWORD(v26) = HIDWORD(WPP_MAIN_CB.Dpc.ProcessorHistory);
      if ( !_InterlockedExchange(
              (volatile __int32 *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 4LL * KeGetPcr()->Prcb.Number),
              1) )
      {
        v27 = *(LARGE_INTEGER *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong;
        if ( !*(_QWORD *)&WPP_MAIN_CB.Dpc.TargetInfoAsUlong )
          v27.QuadPart = -1LL;
        LODWORD(v26) = KeGetPcr()->Prcb.Number;
        KeSetTimer(
          (PKTIMER)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * v26],
          v27,
          (PKDPC)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[16 * (unsigned __int64)(unsigned int)v26 + 8]);
      }
    }
    else
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)v22, CustomPriorityWorkQueue|RealTimeWorkQueue|0x8);
    }
  }
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v22 + 72));
  v10 = v55;
  v7 = v45;
LABEL_35:
  if ( v43 )
  {
    v38 = WmiGetClock(0LL, 0LL, v9);
    ndisTraceDpcEnd(v10, 1LL, v38 - Clock);
  }
  if ( !v7 && NewIrql != 2 )
    KeLowerIrql(NewIrql);
  if ( v48 != v49 )
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(25LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v8);
  v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 4472));
  v29 = *(_QWORD *)(v8 + 4928);
  v30 = v28;
  if ( !v29 )
    goto LABEL_56;
  if ( v29 - 2 <= 1 )
  {
    v29 = 0LL;
  }
  else if ( v29 == 1 )
  {
    ndisBugCheckEx(0x1EuLL, 3uLL, 1uLL, 0LL);
  }
  if ( !v29 )
    goto LABEL_56;
  if ( *(_BYTE *)(v29 + 2) <= 0x4Du )
    ndisBugCheckEx(0x1EuLL, 2uLL, v29, 0x4DuLL);
  if ( *(_BYTE *)(v29 + 1) )
  {
    if ( *(_BYTE *)(v29 + 1) != 1 )
      goto LABEL_56;
    v39 = v29 + 4936;
    v40 = *(_DWORD *)(v29 + 4992);
    v41 = (unsigned __int16)v40 >> 1;
    if ( v40 >> 17 < 0x3FFE && v41 == (v40 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v29 + 4936));
      *(_DWORD *)(v39 + 56) &= 0x10001u;
      goto LABEL_56;
    }
    if ( v41 != 0 || (v40 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v29 + 4936), 0);
      goto LABEL_56;
    }
    goto LABEL_83;
  }
  v31 = *(_QWORD *)(v29 + 8);
  if ( !v31 || (v32 = *(_BYTE *)(v29 + 3), v33 = 0, !v32) )
  {
LABEL_52:
    if ( _bittestandreset((signed __int32 *)(v29 + 24), 0xDu) )
      goto LABEL_56;
LABEL_83:
    ndisBugCheckEx(0x1EuLL, 0LL, v29, 0x4DuLL);
  }
  while ( 1 )
  {
    if ( *(_BYTE *)(v31 + 2LL * v33) == 77 )
    {
      v34 = *(_BYTE *)(v31 + 2LL * v33 + 1);
      if ( v34 )
        break;
    }
    if ( ++v33 >= v32 )
      goto LABEL_52;
  }
  *(_BYTE *)(v31 + 2LL * v33 + 1) = v34 - 1;
LABEL_56:
  v35 = *(_DWORD *)(v8 + 4480) - 1;
  *(_DWORD *)(v8 + 4480) = v35;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(14LL, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v8, *(unsigned int *)(v8 + 4480));
  KeReleaseSpinLock((PKSPIN_LOCK)(v8 + 4472), v30);
  if ( !v35 )
  {
    v42 = *(struct _KEVENT **)(v8 + 1608);
    if ( v42 )
      KeSetEvent(v42, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_q(26LL, &WPP_9a121bb7542c30cb70afea5376c1d156_Traceguids, v8);
}

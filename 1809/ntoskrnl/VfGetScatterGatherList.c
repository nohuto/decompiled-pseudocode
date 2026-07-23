/*
 * XREFs of VfGetScatterGatherList @ 0x14092C360
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfReportIssueWithOptions @ 0x14030B008 (VfReportIssueWithOptions.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14092A3B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x14092A614 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x14092A6A0 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViCheckMdlLength @ 0x14092DDBC (ViCheckMdlLength.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 *     ViHalPreprocessOptions @ 0x14092ED28 (ViHalPreprocessOptions.c)
 *     ViMapDoubleBuffer @ 0x14092F13C (ViMapDoubleBuffer.c)
 *     ViSwap @ 0x14092FA40 (ViSwap.c)
 */

__int64 VfGetScatterGatherList(__int64 a1, __int64 a2, ...)
{
  __int64 v2; // r15
  PMDL v3; // rsi
  int v4; // edi
  _QWORD *v5; // rbx
  __int64 AdapterInformationInternal; // rax
  unsigned int v7; // r12d
  __int64 v8; // rdi
  unsigned int v10; // eax
  unsigned int v11; // ebx
  _QWORD *v12; // rax
  __int64 v13; // r13
  PMDL v14; // rdx
  ULONG v15; // r8d
  ULONG ByteOffset; // ecx
  ULONG ByteCount; // r9d
  int v18; // r10d
  ULONG v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 MapRegisterFile; // rax
  __int64 v23; // r14
  _OWORD *v24; // rax
  __int64 (__fastcall *v25)(); // rax
  int v26; // eax
  unsigned int v27; // r14d
  KSPIN_LOCK *v28; // rsi
  KIRQL v29; // di
  __int64 v30; // r9
  _QWORD *v31; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  char v33; // [rsp+20h] [rbp-58h]
  __int64 v34; // [rsp+50h] [rbp-28h]
  __int64 v35; // [rsp+58h] [rbp-20h] BYREF
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, PMDL, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE); // [rsp+60h] [rbp-18h]
  PMDL MemoryDescriptorList; // [rsp+D0h] [rbp+58h] BYREF
  va_list MemoryDescriptorLista; // [rsp+D0h] [rbp+58h]
  __int64 v41; // [rsp+D8h] [rbp+60h] BYREF
  va_list va1; // [rsp+D8h] [rbp+60h]
  __int64 v43; // [rsp+E0h] [rbp+68h]
  __int64 (__fastcall *v44)(); // [rsp+E8h] [rbp+70h]
  __int64 v45; // [rsp+F0h] [rbp+78h]
  __int64 v46; // [rsp+F8h] [rbp+80h]
  va_list va2; // [rsp+100h] [rbp+88h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v41 = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, __int64 (__fastcall *)());
  v45 = va_arg(va2, _QWORD);
  v46 = va_arg(va2, _QWORD);
  v2 = v41;
  v3 = MemoryDescriptorList;
  v34 = 0LL;
  v4 = a1;
  v5 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, PMDL, __int64, unsigned int, __int64 (__fastcall *)(), __int64, _BYTE))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(v4);
  v7 = v43;
  v8 = AdapterInformationInternal;
  if ( !AdapterInformationInternal )
    goto LABEL_19;
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 164));
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 168));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(v8 + 192) == 3 )
  {
    v10 = ViCheckMdlLength(v3, 0LL, v7);
    if ( v10 )
    {
      v11 = v10;
      ViHalPreprocessOptions(
        byte_1404064E0,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v10,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v11, 0LL, 0LL, byte_1404064E0);
    }
  }
  v12 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
  v2 = v41;
  v5 = v12;
  if ( v12 )
  {
    v12[8] = 0LL;
    v13 = v45;
    v14 = v3;
    *v12 = v45;
    v12[1] = v44;
    v12[10] = v12 + 9;
    v12[9] = v12 + 9;
    v15 = LODWORD(v3->StartVa) + v3->ByteOffset + v3->ByteCount - v2;
    ByteOffset = v2 & 0xFFF;
    ByteCount = v15;
    v18 = 0;
    while ( v15 < v7 )
    {
      v14 = v14->Next;
      if ( !v14 )
        break;
      v19 = ByteCount + 4095;
      ByteCount = v14->ByteCount;
      v20 = ByteOffset + v19;
      ByteOffset = v14->ByteOffset;
      v18 += v20 >> 12;
      v15 += ByteCount;
    }
    if ( v15 + 4096 < ByteOffset + v7 )
    {
      DECREMENT_SCATTER_GATHER_LISTS(v8);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
      return 3221225507LL;
    }
    v5[7] = v8;
    v21 = v18 + ((ByteCount + ByteOffset - v15 + v7 + 4095) >> 12);
    *((_DWORD *)v5 + 12) = v21;
    MapRegisterFile = ViAllocateMapRegisterFile(v8, v21);
    v35 = MapRegisterFile;
    v23 = MapRegisterFile;
    if ( MapRegisterFile )
    {
      *(_BYTE *)(MapRegisterFile + 25) = 1;
      v5[12] = MapRegisterFile;
      v5[2] = v5 + 13;
      v33 = v46;
      v5[3] = v2;
      *((_DWORD *)v5 + 8) = v7;
      if ( (unsigned int)ViMapDoubleBuffer(MapRegisterFile, v3, v33) )
      {
        v24 = (_OWORD *)v5[2];
        v34 = v23;
        v13 = (__int64)v5;
        *v24 = *(_OWORD *)&v3->Next;
        v24[1] = *(_OWORD *)&v3->Process;
        v24[2] = *(_OWORD *)&v3->StartVa;
        ViSwap(&v35, (PMDL *)MemoryDescriptorLista, (__int64 *)va1);
        v2 = v41;
        v25 = ViScatterGatherCallback;
        v3 = MemoryDescriptorList;
        goto LABEL_21;
      }
      ViFreeMapRegisterFile(v8);
    }
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    v5 = 0LL;
  }
  else
  {
LABEL_19:
    v13 = v45;
  }
  v25 = v44;
LABEL_21:
  v26 = RealDmaOperation(a1, a2, v3, v2, v7, v25, v13, v46);
  v27 = v26;
  if ( v8 && v26 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(v8);
    if ( v34 )
      ViFreeMapRegisterFile(v8);
    if ( v5 )
    {
      v28 = (KSPIN_LOCK *)(v8 + 72);
      v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v8 + 72));
      v30 = v5[9];
      v31 = (_QWORD *)v5[10];
      if ( *(_QWORD **)(v30 + 8) != v5 + 9 || (_QWORD *)*v31 != v5 + 9 )
        __fastfail(3u);
      *v31 = v30;
      *(_QWORD *)(v30 + 8) = v31;
      KxReleaseSpinLock(v28);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v29 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v29);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    }
  }
  return v27;
}

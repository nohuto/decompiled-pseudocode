/*
 * XREFs of VfBuildScatterGatherList @ 0x14092B430
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

__int64 VfBuildScatterGatherList(__int64 a1, __int64 a2, ...)
{
  PVOID *v2; // r14
  PMDL v3; // rsi
  int v4; // edi
  PVOID **v5; // rbx
  __int64 v6; // r15
  __int64 AdapterInformationInternal; // rdi
  unsigned int v9; // eax
  unsigned int v10; // ebx
  _QWORD *v11; // rax
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(); // r13
  _QWORD *v15; // rax
  __int64 MapRegisterFile; // rax
  char v17; // cl
  int v18; // ecx
  unsigned int v19; // eax
  PVOID *v20; // rax
  int v21; // eax
  unsigned int v22; // r14d
  KSPIN_LOCK *v23; // rsi
  KIRQL v24; // di
  unsigned int **v25; // r9
  PVOID *v26; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  char v28; // [rsp+28h] [rbp-61h]
  __int64 v29; // [rsp+70h] [rbp-19h] BYREF
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, PMDL, PVOID *, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD); // [rsp+78h] [rbp-11h]
  PMDL MemoryDescriptorList; // [rsp+E8h] [rbp+5Fh] BYREF
  va_list MemoryDescriptorLista; // [rsp+E8h] [rbp+5Fh]
  PVOID *v35; // [rsp+F0h] [rbp+67h] BYREF
  va_list va1; // [rsp+F0h] [rbp+67h]
  __int64 v37; // [rsp+F8h] [rbp+6Fh]
  __int64 (__fastcall *v38)(); // [rsp+100h] [rbp+77h]
  __int64 v39; // [rsp+108h] [rbp+7Fh]
  __int64 v40; // [rsp+110h] [rbp+87h]
  __int64 v41; // [rsp+118h] [rbp+8Fh]
  __int64 v42; // [rsp+120h] [rbp+97h]
  va_list va2; // [rsp+128h] [rbp+9Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(MemoryDescriptorLista, a2);
  MemoryDescriptorList = va_arg(va1, PMDL);
  va_copy(va2, va1);
  v35 = va_arg(va2, PVOID *);
  v37 = va_arg(va2, _QWORD);
  v38 = va_arg(va2, __int64 (__fastcall *)());
  v39 = va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v41 = va_arg(va2, _QWORD);
  v42 = va_arg(va2, _QWORD);
  v2 = v35;
  v3 = MemoryDescriptorList;
  v4 = a1;
  v5 = 0LL;
  v6 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, PMDL, PVOID *, _DWORD, __int64 (__fastcall *)(), __int64, _BYTE, __int64, _DWORD))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(v4);
  if ( !AdapterInformationInternal )
  {
    v12 = v39;
LABEL_14:
    v14 = v38;
    goto LABEL_15;
  }
  VF_ASSERT_IRQL(2u);
  if ( !v3 )
    return 3221225485LL;
  _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 164));
  _InterlockedIncrement((volatile signed __int32 *)(AdapterInformationInternal + 168));
  v3 = MemoryDescriptorList;
  VERIFY_BUFFER_LOCKED((ULONG_PTR)MemoryDescriptorList);
  if ( *(_DWORD *)(AdapterInformationInternal + 192) == 3 )
  {
    v9 = ViCheckMdlLength(v3, 0LL, (unsigned int)v37);
    if ( v9 )
    {
      v10 = v9;
      ViHalPreprocessOptions(
        byte_1404064D8,
        "The provided MDL is not sufficient to satisfy the requested length",
        36LL,
        v9,
        0LL,
        0LL);
      VfReportIssueWithOptions(0xE6u, 0x24uLL, v10, 0LL, 0LL, byte_1404064D8);
    }
  }
  v11 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
  v12 = v39;
  v5 = (PVOID **)v11;
  v2 = v35;
  if ( !v11 )
    goto LABEL_14;
  v13 = (unsigned int)v37;
  v11[8] = 0LL;
  v14 = v38;
  *v11 = v12;
  v11[1] = v14;
  v11[7] = AdapterInformationInternal;
  *((_DWORD *)v11 + 12) = (v13 + 4095 + (unsigned __int64)((unsigned __int16)v2 & 0xFFF)) >> 12;
  v15 = v11 + 9;
  v15[1] = v15;
  *v15 = v15;
  MapRegisterFile = ViAllocateMapRegisterFile(AdapterInformationInternal, *((unsigned int *)v5 + 12));
  v29 = MapRegisterFile;
  v6 = MapRegisterFile;
  if ( !MapRegisterFile )
  {
LABEL_9:
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    v5 = 0LL;
    v6 = 0LL;
    goto LABEL_15;
  }
  v17 = v40;
  *(_BYTE *)(MapRegisterFile + 25) = 1;
  v28 = v17;
  v5[2] = (PVOID *)(v5 + 13);
  v18 = MapRegisterFile;
  v19 = v37;
  v5[12] = (PVOID *)v6;
  v5[3] = v2;
  *((_DWORD *)v5 + 8) = v19;
  if ( !(unsigned int)ViMapDoubleBuffer(v18, v3, v28) )
  {
    ViFreeMapRegisterFile(AdapterInformationInternal);
    goto LABEL_9;
  }
  v20 = v5[2];
  v12 = (__int64)v5;
  v14 = ViScatterGatherCallback;
  *(_OWORD *)v20 = *(_OWORD *)&v3->Next;
  *((_OWORD *)v20 + 1) = *(_OWORD *)&v3->Process;
  *((_OWORD *)v20 + 2) = *(_OWORD *)&v3->StartVa;
  ViSwap(&v29, (PMDL *)MemoryDescriptorLista, (PVOID **)va1);
  v2 = v35;
  v3 = MemoryDescriptorList;
LABEL_15:
  v21 = RealDmaOperation(a1, a2, v3, v2, v37, v14, v12, v40, v41, v42);
  v22 = v21;
  if ( AdapterInformationInternal && v21 < 0 )
  {
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    if ( v6 )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    if ( v5 )
    {
      v23 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
      v24 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
      v25 = (unsigned int **)v5[9];
      v26 = v5[10];
      if ( v25[1] != (unsigned int *)(v5 + 9) || *v26 != v5 + 9 )
        __fastfail(3u);
      *v26 = v25;
      v25[1] = (unsigned int *)v26;
      KxReleaseSpinLock(v23);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v24 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v24);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v5);
    }
  }
  return v22;
}

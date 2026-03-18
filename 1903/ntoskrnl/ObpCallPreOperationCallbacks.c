/*
 * XREFs of ObpCallPreOperationCallbacks @ 0x1405E3D30
 * Callers:
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     ObpPreInterceptHandleDuplicate @ 0x14063E7C8 (ObpPreInterceptHandleDuplicate.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ObpCallPostOperationCallbacks @ 0x14089EF90 (ObpCallPostOperationCallbacks.c)
 */

__int64 __fastcall ObpCallPreOperationCallbacks(struct _EX_RUNDOWN_REF *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // r13
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v8; // r12
  struct _EX_RUNDOWN_REF *v9; // rdi
  struct _KTHREAD *v10; // rax
  ULONG_PTR v11; // rbp
  struct _EX_RUNDOWN_REF *Count; // rbx
  __int64 v13; // rcx
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  void (__fastcall *v16)(_QWORD, __int64); // rax
  struct _KTHREAD *v17; // rax
  __int64 v18; // rcx
  struct _KTHREAD *v19; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v22; // rcx
  _QWORD v23[6]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0LL;
  memset(v23, 0, sizeof(v23));
  CurrentThread = KeGetCurrentThread();
  v8 = a1 + 25;
  v9 = 0LL;
  --CurrentThread->KernelApcDisable;
  ObfReferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
  v10 = KeGetCurrentThread();
  --v10->SpecialApcDisable;
  v11 = (ULONG_PTR)&a1[23];
  ExAcquirePushLockSharedEx((ULONG_PTR)&a1[23], 0LL);
  Count = (struct _EX_RUNDOWN_REF *)a1[25].Count;
  if ( (struct _EX_RUNDOWN_REF *)v8->Count != v8 )
  {
    do
    {
      if ( (HIDWORD(Count[2].Ptr) & 1) != 0
        && (Count[2].Count & *(_DWORD *)a2) != 0
        && ExAcquireRundownProtection_0(Count + 7) )
      {
        ExReleasePushLockEx(v11, 0LL);
        v14 = KeGetCurrentThread();
        v15 = v14->SpecialApcDisable++ == -1;
        if ( v15 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
          KiCheckForKernelApcDelivery(v13);
        if ( v9 )
        {
          ExReleaseRundownProtection_0(v9);
          v9 = 0LL;
        }
        if ( Count[6].Count )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6C46624Fu);
          v6 = PoolWithTag;
          if ( !PoolWithTag )
          {
            ExReleaseRundownProtection_0(Count + 7);
            if ( (_QWORD *)*a3 == a3 )
            {
              KeLeaveCriticalRegion();
              ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
            }
            else
            {
              LODWORD(v23[4]) = -1073741670;
              v23[3] = 0LL;
              *(_QWORD *)((char *)&v23[4] + 4) = 0LL;
              HIDWORD(v23[5]) = 0;
              v23[0] = *(_QWORD *)a2;
              v23[2] = *(_QWORD *)(a2 + 16);
              v23[1] = *(_QWORD *)(a2 + 8);
              ObpCallPostOperationCallbacks(v23, a3);
            }
            return 3221225626LL;
          }
          PoolWithTag[2] = Count;
          PoolWithTag[3] = 0LL;
          v22 = (_QWORD *)a3[1];
          if ( (_QWORD *)*v22 != a3 )
            __fastfail(3u);
          *PoolWithTag = a3;
          PoolWithTag[1] = v22;
          *v22 = PoolWithTag;
          a3[1] = PoolWithTag;
        }
        v16 = (void (__fastcall *)(_QWORD, __int64))Count[5].Count;
        if ( v16 )
        {
          v16(*(_QWORD *)(Count[3].Count + 8), a2);
          if ( Count[6].Count )
            v6[3] = *(_QWORD *)(a2 + 24);
          else
            v9 = Count + 7;
          *(_QWORD *)(a2 + 24) = 0LL;
        }
        v17 = KeGetCurrentThread();
        --v17->SpecialApcDisable;
        ExAcquirePushLockSharedEx(v11, 0LL);
      }
      Count = (struct _EX_RUNDOWN_REF *)Count->Count;
    }
    while ( Count != v8 );
  }
  ExReleasePushLockEx(v11, 0LL);
  v19 = KeGetCurrentThread();
  v15 = v19->SpecialApcDisable++ == -1;
  if ( v15 && ($6EAC78A6FCFADE0A5FA44F358736B38F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v18);
  if ( v9 )
    ExReleaseRundownProtection_0(v9);
  if ( (_QWORD *)*a3 == a3 )
  {
    ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 8), 0x6243624Fu);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}

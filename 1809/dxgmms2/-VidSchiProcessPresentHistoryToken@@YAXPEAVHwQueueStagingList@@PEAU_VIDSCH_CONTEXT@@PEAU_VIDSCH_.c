/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N5@Z @ 0x1C000F820
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00175F4 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C000F368 (VidSchiPropagatePresentHistoryToken.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0015F98 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_SUBMIT.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0016B30 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C0017578 (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017DA4 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0018394 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqx @ 0x1C002BD7C (McTemplateK0ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct _VIDSCH_DEVICE *a3,
        struct VIDSCH_SUBMIT_DATA2 *a4,
        union _ULARGE_INTEGER a5,
        bool a6,
        bool a7)
{
  struct _VIDSCH_DEVICE *v8; // rdi
  _QWORD *v11; // rax
  int v12; // edx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // r14
  __int64 v18; // rdi
  volatile signed __int32 *v19; // rcx
  CRefCountedBuffer *v20; // rcx
  CRefCountedBuffer *v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  char v31; // dl
  __int64 v32; // r9
  int v34; // ecx
  char v35; // cl
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // r13
  __int64 v39; // rcx
  __int64 v40; // rdx
  void (__fastcall *v41)(_QWORD); // rax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // [rsp+58h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v46; // [rsp+78h] [rbp-40h] BYREF
  unsigned int v47; // [rsp+D8h] [rbp+20h]

  v8 = a3;
  if ( (*(_DWORD *)a4 & 0x1000000) != 0 )
  {
    v31 = -1;
    v32 = *((unsigned int *)a4 + 31);
    if ( _BitScanForward((unsigned int *)&v34, *((_DWORD *)a4 + 140) & 0x3FF) )
      v31 = v34;
    v47 = v32;
    v35 = 0;
    if ( v31 != -1 )
      v35 = v31;
    if ( !a3 )
    {
      v36 = *(_QWORD *)((char *)a4 + *((_DWORD *)a4 + 141) * ((8 * *((_DWORD *)a4 + 142) + 191) & 0xFFFFFFF8) + 608);
      if ( v36 )
        v8 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v36 + 8) + 32LL);
      else
        v8 = 0LL;
    }
    v37 = *((_QWORD *)v8 + 4);
    v44 = v32;
    v38 = *(_QWORD *)(v37 + 8 * v32 + 2576);
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v37, v32, v35)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v37, a4) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a4, a5, v8);
    }
    else
    {
      v40 = *(unsigned int *)(v38 + 33272);
      if ( (_DWORD)v40 != -1 )
      {
        v41 = *(void (__fastcall **)(_QWORD))(v37 + 2448);
        if ( v41 )
          v41(*(_QWORD *)(v37 + 2496));
      }
      v42 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v39, v40);
      v42[3] = *((_QWORD *)a4 + 14);
      v42[4] = *((unsigned int *)a4 + 30);
      if ( a6 )
      {
        v42[5] = 0LL;
        v42[6] = *((_QWORD *)a4 + 20);
        v43 = *((_QWORD *)a4 + 21);
      }
      else
      {
        v42[5] = *((_QWORD *)a4 + 20);
        v42[6] = *((_QWORD *)a4 + 21);
        v43 = *((_DWORD *)a4 + 1) & 1;
      }
      v42[7] = v43;
      WdLogEvent5_WdPresentTokenEvent(v42);
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a4 + 13),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a4 + 14),
        0,
        0,
        a6,
        a7,
        *((_QWORD *)a4 + 4),
        *((_QWORD *)a4 + 3),
        (__int64)a4);
      VidSchiUnreferencePrimaryAllocations(
        a1,
        (struct _VIDSCH_GLOBAL *)v37,
        v47,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a4 + 560),
        *((_DWORD *)a4 + 36),
        *((_DWORD *)a4 + 36),
        0,
        1);
      _InterlockedDecrement((volatile signed __int32 *)(v37 + 720));
      _InterlockedDecrement((volatile signed __int32 *)v8 + 317);
      _InterlockedDecrement((volatile signed __int32 *)v8 + v44 + 301);
      VidSchiCheckPendingDeviceCommand(v8);
    }
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v11[3] = *((_QWORD *)a4 + 14);
    v11[4] = *((unsigned int *)a4 + 30);
    v11[5] = *((_QWORD *)a4 + 20);
    v11[6] = *((_QWORD *)a4 + 21);
    WdLogEvent5_WdPresentTokenEvent(v11);
    v14 = *((_QWORD *)a4 + 68);
    v15 = *((_QWORD *)a4 + 3);
    v16 = *((_QWORD *)a4 + 4);
    v17 = *((_QWORD *)a4 + 14);
    v18 = *((_QWORD *)a4 + 13);
    if ( v14 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[67])(
        v14,
        *((_QWORD *)a4 + 13),
        *((_QWORD *)a4 + 14),
        *((_QWORD *)a4 + 69));
    }
    else
    {
      v19 = (volatile signed __int32 *)*((_QWORD *)a4 + 3);
      if ( v16 && v15 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 16), &LockHandle);
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 4));
        v20 = *(CRefCountedBuffer **)(v16 + 8);
        if ( v20 )
          CRefCountedBuffer::RefCountedBufferRelease(v20);
        *(_QWORD *)(v16 + 8) = v15;
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v19 = (volatile signed __int32 *)*((_QWORD *)a4 + 3);
      }
      if ( v19 )
      {
        if ( _InterlockedExchangeAdd(v19 + 1, 0xFFFFFFFF) == 1 )
          ExFreePoolWithTag((PVOID)v19, 0);
        *((_QWORD *)a4 + 3) = 0LL;
      }
      v21 = (CRefCountedBuffer *)*((_QWORD *)a4 + 5);
      if ( v21 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v21);
        *((_QWORD *)a4 + 5) = 0LL;
      }
      v22 = *((_DWORD *)a4 + 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx((_DWORD)v21, v12, v13, v18, v17);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v18, &v46);
      v25 = *(unsigned int *)(v18 + 8);
      if ( (unsigned int)v25 >= 0x800 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v26 + 24) = 3268LL;
        WdLogEvent5_WdAssertion(v26);
        v25 = *(unsigned int *)(v18 + 8);
      }
      *(_QWORD *)(v18 + 8 * v25 + 80) = v17;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) &= ~4u;
      v27 = *(unsigned int *)(v18 + 8);
      v28 = *(unsigned __int8 *)(v27 + v18 + 16464);
      LOBYTE(v28) = (8 * a7) | v28 & 0xF7;
      *(_BYTE *)(v27 + v18 + 16464) = v28;
      *(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) ^= (*(_BYTE *)(*(unsigned int *)(v18 + 8) + v18 + 16464) ^ (16 * v22)) & 0x10;
      v29 = ((unsigned __int16)*(_DWORD *)(v18 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v18 + 8) = v29;
      if ( v29 == *(_DWORD *)(v18 + 12) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28, v27);
        *(_QWORD *)(v30 + 24) = 3284LL;
        WdLogEvent5_WdAssertion(v30);
      }
      KeSetEvent(*(PRKEVENT *)(v18 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&v46);
    }
  }
}

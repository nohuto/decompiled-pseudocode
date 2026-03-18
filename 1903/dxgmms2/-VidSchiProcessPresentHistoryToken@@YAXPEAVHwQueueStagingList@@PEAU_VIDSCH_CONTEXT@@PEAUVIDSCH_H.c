/*
 * XREFs of ?VidSchiProcessPresentHistoryToken@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N6@Z @ 0x1C00130E0
 * Callers:
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E90 (VidSchiSubmitPresentHistoryToken.c)
 *     VidSchiFlushPendingTokenList @ 0x1C00169E8 (VidSchiFlushPendingTokenList.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C0008190 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C0010404 (VidSchiPropagatePresentHistoryToken.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0013444 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C001529C (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C0015F08 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C001696C (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@II_N3@Z @ 0x1C0017324 (-VidSchiUnreferencePrimaryAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0ppqqx @ 0x1C002C458 (McTemplateK0ppqqx.c)
 */

void __fastcall VidSchiProcessPresentHistoryToken(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_CONTEXT *a2,
        struct VIDSCH_HW_QUEUE *a3,
        struct _VIDSCH_DEVICE *a4,
        struct VIDSCH_SUBMIT_DATA2 *a5,
        union _ULARGE_INTEGER a6,
        bool a7,
        bool a8)
{
  struct _VIDSCH_DEVICE *v8; // rdi
  _QWORD *v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // rdi
  CRefCountedBuffer *v20; // rcx
  CRefCountedBuffer *v21; // rcx
  int v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // r12
  bool v30; // zf
  int v31; // ecx
  __int64 v32; // r15
  __int64 v33; // rcx
  __int64 v34; // rdx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  CRefCountedBuffer *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  void (__fastcall *v41)(_QWORD); // rax
  __int64 v42; // [rsp+50h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+58h] [rbp-60h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-48h] BYREF

  v8 = a4;
  if ( (*(_DWORD *)a5 & 0x1000000) != 0 )
  {
    v29 = *((unsigned int *)a5 + 31);
    v30 = !_BitScanForward((unsigned int *)&v31, *((_DWORD *)a5 + 138) & 0x3FF);
    if ( v30 || (_BYTE)v31 == 0xFF )
      LOBYTE(v31) = 0;
    if ( !a4 )
    {
      v40 = *(_QWORD *)((char *)a5 + *((_DWORD *)a5 + 139) * ((8 * *((_DWORD *)a5 + 140) + 191) & 0xFFFFFFF8) + 600);
      if ( v40 )
        v8 = *(struct _VIDSCH_DEVICE **)(*(_QWORD *)(v40 + 8) + 32LL);
      else
        v8 = 0LL;
    }
    v32 = *((_QWORD *)v8 + 4);
    v42 = *(_QWORD *)(v32 + 8 * v29 + 2576);
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v32, v29, (char)v31)
      && VidSchiCheckTokenIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v32, a5) )
    {
      VidSchiSubmitIndependentFlip(a1, a2, a3, a5, a6, v8);
    }
    else
    {
      v34 = *(unsigned int *)(v42 + 33280);
      if ( (_DWORD)v34 != -1 )
      {
        v41 = *(void (__fastcall **)(_QWORD))(v32 + 2448);
        if ( v41 )
          v41(*(_QWORD *)(v32 + 2496));
      }
      v35 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(v33, v34);
      v35[3] = *((_QWORD *)a5 + 14);
      v35[4] = *((unsigned int *)a5 + 30);
      if ( a7 )
      {
        v35[5] = 0LL;
        v35[6] = *((_QWORD *)a5 + 20);
        v36 = *((_QWORD *)a5 + 21);
      }
      else
      {
        v35[5] = *((_QWORD *)a5 + 20);
        v35[6] = *((_QWORD *)a5 + 21);
        v36 = *((_DWORD *)a5 + 1) & 1;
      }
      v35[7] = v36;
      WdLogEvent5_WdPresentTokenEvent(v35);
      VidSchiPropagatePresentHistoryToken(
        *((PKSPIN_LOCK *)a5 + 13),
        *((struct _D3DKMT_PRESENTHISTORYTOKEN **)a5 + 14),
        0,
        0,
        a7,
        a8,
        *((_QWORD *)a5 + 4),
        *((_QWORD *)a5 + 3),
        (__int64)a5);
      VidSchiUnreferencePrimaryAllocations(
        a1,
        (struct _VIDSCH_GLOBAL *)v32,
        v29,
        (struct VIDSCH_SUBMIT_DATA2 *)((char *)a5 + 552),
        *((_DWORD *)a5 + 36),
        *((_DWORD *)a5 + 36),
        0,
        1);
      _InterlockedDecrement((volatile signed __int32 *)(v32 + 720));
      _InterlockedDecrement((volatile signed __int32 *)v8 + 318);
      _InterlockedDecrement((volatile signed __int32 *)v8 + v29 + 302);
      VidSchiCheckPendingDeviceCommand(v8);
    }
  }
  else
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdPresentTokenEvent(a1, a2);
    v12[3] = *((_QWORD *)a5 + 14);
    v12[4] = *((unsigned int *)a5 + 30);
    v12[5] = *((_QWORD *)a5 + 20);
    v12[6] = *((_QWORD *)a5 + 21);
    WdLogEvent5_WdPresentTokenEvent(v12);
    v15 = *((_QWORD *)a5 + 68);
    v16 = *((_QWORD *)a5 + 3);
    v17 = *((_QWORD *)a5 + 4);
    v18 = *((_QWORD *)a5 + 14);
    v19 = *((_QWORD *)a5 + 13);
    if ( v15 )
    {
      ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD))DxgCoreInterface[67])(
        v15,
        *((_QWORD *)a5 + 13),
        *((_QWORD *)a5 + 14),
        *((_QWORD *)a5 + 3));
    }
    else
    {
      v20 = (CRefCountedBuffer *)*((_QWORD *)a5 + 3);
      if ( v17 && v16 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v17 + 16), &v43);
        v37 = *(CRefCountedBuffer **)(v17 + 8);
        if ( v37 )
          CRefCountedBuffer::RefCountedBufferRelease(v37);
        *(_QWORD *)(v17 + 8) = v16;
        _InterlockedIncrement((volatile signed __int32 *)(v16 + 4));
        KeReleaseInStackQueuedSpinLock(&v43);
        v20 = (CRefCountedBuffer *)*((_QWORD *)a5 + 3);
      }
      if ( v20 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v20);
        *((_QWORD *)a5 + 3) = 0LL;
      }
      v21 = (CRefCountedBuffer *)*((_QWORD *)a5 + 5);
      if ( v21 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v21);
        *((_QWORD *)a5 + 5) = 0LL;
      }
      v22 = *((_DWORD *)a5 + 1);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0ppqqx((_DWORD)v21, v13, v14, v19, v18);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v19, &LockHandle);
      v25 = *(unsigned int *)(v19 + 8);
      if ( (unsigned int)v25 >= 0x800 )
      {
        v38 = WdLogNewEntry5_WdAssertion(v24, v23);
        *(_QWORD *)(v38 + 24) = 3303LL;
        WdLogEvent5_WdAssertion(v38);
        v25 = *(unsigned int *)(v19 + 8);
      }
      *(_QWORD *)(v19 + 8 * v25 + 80) = v18;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~1u;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~2u;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) &= ~4u;
      v26 = *(unsigned int *)(v19 + 8);
      v27 = *(unsigned __int8 *)(v26 + v19 + 16464);
      LOBYTE(v27) = (8 * a8) | v27 & 0xF7;
      *(_BYTE *)(v26 + v19 + 16464) = v27;
      *(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) ^= (*(_BYTE *)(*(unsigned int *)(v19 + 8) + v19 + 16464) ^ (16 * v22)) & 0x10;
      v28 = ((unsigned __int16)*(_DWORD *)(v19 + 8) + 1) & 0x7FF;
      *(_DWORD *)(v19 + 8) = v28;
      if ( v28 == *(_DWORD *)(v19 + 12) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v27, v26);
        *(_QWORD *)(v39 + 24) = 3319LL;
        WdLogEvent5_WdAssertion(v39);
      }
      KeSetEvent(*(PRKEVENT *)(v19 + 72), 0, 0);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
}

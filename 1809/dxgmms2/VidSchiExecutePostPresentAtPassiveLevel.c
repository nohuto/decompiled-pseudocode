/*
 * XREFs of VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000BB50 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z @ 0x1C000F1C4 (-VidSchiExecuteNextFlipQueueEntry@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEA_NII@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C0039AB4 (VidSchiCompletePendingFlipOnPlane.c)
 */

void __fastcall VidSchiExecutePostPresentAtPassiveLevel(__int64 a1)
{
  __int64 v1; // r14
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rdx
  unsigned int v16; // eax
  int v17; // r8d
  int v18; // eax
  int v19; // edi
  __int64 v20; // r9
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  char v22; // [rsp+50h] [rbp-30h]
  _BYTE v23[40]; // [rsp+58h] [rbp-28h] BYREF
  int v24; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v25; // [rsp+C8h] [rbp+48h]

  v1 = *(unsigned int *)(a1 + 40);
  v2 = a1 + 24;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = *(_QWORD *)(v3 + 16);
  v6 = *(unsigned int *)(a1 + 44);
  v7 = *(_QWORD *)(a1 + 32);
  v25 = *(_QWORD *)(v3 + 8 * v1 + 2576);
  v8 = *(_QWORD *)(v25 + 8 * v6 + 24);
  v24 = ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[62])(*(_QWORD *)(v5 + 2520), a1);
  if ( v24 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v10, v9);
    v12[5] = v24;
    v12[3] = 281LL;
    v12[4] = 15LL;
    v12[6] = v2;
    v12[7] = *(_QWORD *)(v3 + 16);
    WdLogEvent5_WdCriticalError(v12);
    __debugbreak();
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v23, (unsigned __int64 *)(v3 + 1648), v11, 0);
  v13 = *(_DWORD *)(a1 + 48);
  v21[1] = v21;
  v22 = 0;
  v21[0] = v21;
  v14 = *(_DWORD *)(v8 + 44);
  LOBYTE(v24) = 0;
  if ( v14 != (((_BYTE)v13 + 1) & 0x3F) )
  {
    do
    {
      v15 = 1296LL * v14;
      v16 = *(_DWORD *)(v15 + v8 + 1108);
      if ( v16 > 0xC || (v17 = 4673, !_bittest(&v17, v16)) )
        *(_DWORD *)(v15 + v8 + 1108) = 11;
      v13 = *(_DWORD *)(a1 + 48);
      v14 = ((_BYTE)v14 + 1) & 0x3F;
    }
    while ( v14 != (((_BYTE)v13 + 1) & 0x3F) );
    v14 = *(_DWORD *)(v8 + 44);
  }
  v18 = ((_BYTE)v13 + 1) & 0x3F;
  *(_DWORD *)(v8 + 44) = v18;
  if ( *(_DWORD *)(v8 + 48) == v13 )
    *(_DWORD *)(v8 + 48) = v18;
  v19 = VidSchiCompleteFlipEntry((struct HwQueueStagingList *)v21, v3, v1, v6, v14, v13, 0, 0LL);
  if ( *(_DWORD *)(v25 + 2324) && *(_BYTE *)(v25 + 66420) )
    VidSchiExecuteNextFlipQueueEntry(
      (struct HwQueueStagingList *)v21,
      (struct _VIDSCH_GLOBAL *)v3,
      (bool *)&v24,
      v1,
      v6);
  if ( v7 )
  {
    VidSchiCheckPendingDeviceCommand((_QWORD *)v7);
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 40) + 24LL)
                                + 8LL * *(unsigned int *)(*(_QWORD *)(v7 + 32) + 4LL))
                    + 8 * v1
                    + 88);
    _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(v3 + 8 * v1 + 5792) + 8LL), -v19);
    **(_DWORD **)(v3 + 8 * v1 + 5792) += v19;
    _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 8), -v19);
    *(_DWORD *)v20 += v19;
  }
  if ( (_BYTE)v24 )
    VidSchiCompletePendingFlipOnPlane((unsigned int)v21, v3, v1, 9, v6);
  --*(_DWORD *)(*(_QWORD *)(v3 + 232) + 804LL);
  VidSchiSignalRegisteredEvent(v3, (struct _KEVENT **)(v7 + 136));
  VidSchiSignalRegisteredEvent(v3, (struct _KEVENT **)(v3 + 1592));
  if ( !v22 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v21);
  AcquireSpinLock::Release((AcquireSpinLock *)v23);
}

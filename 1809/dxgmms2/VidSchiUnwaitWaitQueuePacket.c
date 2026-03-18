/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58
 * Callers:
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001288 (-VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0008D60 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0008E90 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001161C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013764 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C001A390 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C00307C0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0008CD0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiFreeQueuePacket @ 0x1C0012140 (VidSchiFreeQueuePacket.c)
 *     VidSchiUnwaitContext @ 0x1C0012350 (VidSchiUnwaitContext.c)
 *     McTemplateK0pp @ 0x1C002BB7C (McTemplateK0pp.c)
 */

int __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // bp
  __int64 v5; // rdx
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rax
  __int64 *v23; // rcx

  v4 = a3;
  v5 = *(_QWORD *)(a2 + 88);
  if ( v5 )
    v7 = *(_QWORD *)(v5 + 96);
  else
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 40LL) + 16LL);
  v8 = *(_QWORD *)(v7 + 24);
  if ( bTracingEnabled )
  {
    if ( v5 )
    {
      v9 = *(_QWORD *)(v5 + 56);
      if ( !v9 || (*(_DWORD *)(v5 + 112) & 0x40) != 0 )
        v9 = v5;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a2 + 96) + 48LL);
      if ( !v9 )
        v9 = *(_QWORD *)(a2 + 96);
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0pp(v9, &EventUnwaitQueuePacket, a3, a2, v9);
  }
  v10 = (_QWORD *)(a2 + 288);
  v11 = *(_QWORD *)(a2 + 288);
  if ( *(_QWORD *)(v11 + 8) != a2 + 288 )
    goto LABEL_26;
  v12 = *(_QWORD **)(a2 + 296);
  if ( (_QWORD *)*v12 != v10 )
    goto LABEL_26;
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  *v10 = 0LL;
  v13 = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a2 + 296) = 0LL;
  v14 = *(_DWORD *)(v13 + 44);
  if ( ((v14 - 2) & 0xFFFFFFFC) == 0 && v14 != 3 )
  {
    v15 = *(_QWORD *)(a2 + 88);
    if ( v15 )
      _InterlockedDecrement((volatile signed __int32 *)(v15 + 792));
    if ( (*(_DWORD *)(a2 + 272) & 8) != 0 )
    {
      --*(_DWORD *)(v8 + 740);
      *(_DWORD *)(a2 + 272) &= ~8u;
    }
  }
  VidSchiReleaseSyncObjectReference(*(char **)(a2 + 280));
  *(_DWORD *)(a2 + 272) = *(_DWORD *)(a2 + 272) ^ (*(_DWORD *)(a2 + 272) ^ (2 * v4)) & 2 | 1;
  if ( (*(_DWORD *)(a2 + 64) & 0x10) != 0 )
  {
    v19 = (_QWORD *)(a2 + 32);
    v20 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v20 + 8) == a2 + 32 )
    {
      v21 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v21 == v19 )
      {
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *v19 = 0LL;
        v22 = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(v22 + 796);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        LODWORD(v18) = VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88));
        return v18;
      }
    }
    goto LABEL_26;
  }
  v18 = *(_QWORD *)(a2 + 88);
  if ( !v18 )
  {
    v18 = *(_QWORD *)(a2 + 96) + 152LL;
    if ( *(_QWORD *)v18 )
      return v18;
    v23 = *(__int64 **)(a1 + 8);
    if ( *v23 == a1 )
    {
      *(_QWORD *)v18 = a1;
      *(_QWORD *)(v18 + 8) = v23;
      *v23 = v18;
      *(_QWORD *)(a1 + 8) = v18;
      *(_BYTE *)(a1 + 16) = 0;
      return v18;
    }
LABEL_26:
    __fastfail(3u);
  }
  LODWORD(v18) = *(_DWORD *)(v18 + 184);
  if ( (v18 & 0x20) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 184LL) &= ~0x20u;
    LODWORD(v18) = VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 23647LL, v16, v17);
    if ( (_BYTE)v18 )
    {
      *(_QWORD *)(v8 + 1144) = MEMORY[0xFFFFF78000000320];
      LODWORD(v18) = KeSetEvent((PRKEVENT)(v8 + 1112), 0, 0);
    }
  }
  return v18;
}

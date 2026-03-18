/*
 * XREFs of VidSchiUnwaitWaitQueuePacket @ 0x1C000E690
 * Callers:
 *     ?VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1C0001288 (-VidSchiCompleteAllWaitsContext@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0009C50 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiUnwaitMonitoredFences @ 0x1C0009DC0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C00110EC (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0012410 (VidSchiSubmitWaitCommand.c)
 *     VidSchiRundownUnorderedWaiterContext @ 0x1C00306C4 (VidSchiRundownUnorderedWaiterContext.c)
 *     VidSchiUnblockUnorderedWaitQueuePacket @ 0x1C0030FF0 (VidSchiUnblockUnorderedWaitQueuePacket.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E44 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0009BC0 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiUnwaitContext @ 0x1C000E554 (VidSchiUnwaitContext.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E874 (VidSchiFreeQueuePacket.c)
 *     McTemplateK0pp @ 0x1C002C258 (McTemplateK0pp.c)
 */

char __fastcall VidSchiUnwaitWaitQueuePacket(__int64 a1, __int64 a2, __int64 a3)
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
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  __int64 *v21; // rcx

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
    v17 = (_QWORD *)(a2 + 32);
    v18 = *(_QWORD *)(a2 + 32);
    if ( *(_QWORD *)(v18 + 8) == a2 + 32 )
    {
      v19 = *(_QWORD **)(a2 + 40);
      if ( (_QWORD *)*v19 == v17 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *v17 = 0LL;
        v20 = *(_QWORD *)(a2 + 88);
        *(_QWORD *)(a2 + 40) = 0LL;
        --*(_DWORD *)(v20 + 796);
        *(_DWORD *)(a2 + 64) &= ~0x10u;
        LOBYTE(v16) = VidSchiFreeQueuePacket(*(_QWORD *)(a2 + 88));
        return v16;
      }
    }
LABEL_26:
    __fastfail(3u);
  }
  v16 = *(_QWORD *)(a2 + 88);
  if ( !v16 )
  {
    v16 = *(_QWORD *)(a2 + 96) + 152LL;
    if ( *(_QWORD *)v16 )
      return v16;
    v21 = *(__int64 **)(a1 + 8);
    if ( *v21 == a1 )
    {
      *(_QWORD *)v16 = a1;
      *(_QWORD *)(v16 + 8) = v21;
      *v21 = v16;
      *(_QWORD *)(a1 + 8) = v16;
      *(_BYTE *)(a1 + 16) = 0;
      return v16;
    }
    goto LABEL_26;
  }
  LODWORD(v16) = *(_DWORD *)(v16 + 184);
  if ( (v16 & 0x20) != 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a2 + 88) + 184LL) &= ~0x20u;
    LOBYTE(v16) = VidSchiUnwaitContext(*(_QWORD *)(a2 + 88), 0x5D14u);
    if ( (_BYTE)v16 )
    {
      *(_QWORD *)(v8 + 1144) = MEMORY[0xFFFFF78000000320];
      LOBYTE(v16) = KeSetEvent((PRKEVENT)(v8 + 1112), 0, 0);
    }
  }
  return v16;
}

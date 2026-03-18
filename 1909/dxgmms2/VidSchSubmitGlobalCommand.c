/*
 * XREFs of VidSchSubmitGlobalCommand @ 0x1C007D2AC
 * Callers:
 *     VidSchSuspendResumeDevice @ 0x1C0010910 (VidSchSuspendResumeDevice.c)
 *     VidSchSwitchFromContext @ 0x1C007D1C0 (VidSchSwitchFromContext.c)
 *     VidSchSuspendAdapter @ 0x1C007E080 (VidSchSuspendAdapter.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B203C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromDevice @ 0x1C00CC440 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00055D0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiSetPriorityContext @ 0x1C00103DC (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007ACF0 (VidSchiAllocateQueuePacket.c)
 */

void __fastcall VidSchSubmitGlobalCommand(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  struct _VIDSCH_CONTEXT *v5; // rbp
  _QWORD *QueuePacket; // rdi
  KPRIORITY PriorityThread; // eax

  v2 = (__int64 *)(a1 + 232);
  if ( *(_DWORD *)(a2 + 40) == 2 )
    v2 = *(__int64 **)(a2 + 48);
  v5 = (struct _VIDSCH_CONTEXT *)*v2;
  QueuePacket = VidSchiAllocateQueuePacket(*v2, 1);
  *(_DWORD *)QueuePacket = 895576406;
  *((_DWORD *)QueuePacket + 12) = 6;
  QueuePacket[7] = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)QueuePacket + 13) = 2;
  QueuePacket[11] = v5;
  QueuePacket[13] = KeGetCurrentThread();
  *((_OWORD *)QueuePacket + 17) = *(_OWORD *)a2;
  *((_OWORD *)QueuePacket + 18) = *(_OWORD *)(a2 + 16);
  *((_OWORD *)QueuePacket + 19) = *(_OWORD *)(a2 + 32);
  *((_OWORD *)QueuePacket + 20) = *(_OWORD *)(a2 + 48);
  *((_OWORD *)QueuePacket + 21) = *(_OWORD *)(a2 + 64);
  *((_OWORD *)QueuePacket + 22) = *(_OWORD *)(a2 + 80);
  *((_OWORD *)QueuePacket + 23) = *(_OWORD *)(a2 + 96);
  *((_OWORD *)QueuePacket + 24) = *(_OWORD *)(a2 + 112);
  QueuePacket[50] = *(_QWORD *)(a2 + 128);
  if ( (*(_DWORD *)(a1 + 1936) & 2) != 0 )
  {
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    VidSchiSetPriorityContext(v5, PriorityThread);
  }
  VidSchiSubmitCommandPacketToQueue((__int64)QueuePacket);
}

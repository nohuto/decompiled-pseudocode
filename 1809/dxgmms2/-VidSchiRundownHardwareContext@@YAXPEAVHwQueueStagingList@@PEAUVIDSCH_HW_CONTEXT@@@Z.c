/*
 * XREFs of ?VidSchiRundownHardwareContext@@YAXPEAVHwQueueStagingList@@PEAUVIDSCH_HW_CONTEXT@@@Z @ 0x1C0035378
 * Callers:
 *     VidSchiMarkDeviceAsError @ 0x1C0001098 (VidSchiMarkDeviceAsError.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiCheckPendingDeviceCommand @ 0x1C00070E0 (VidSchiCheckPendingDeviceCommand.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035430 (-VidSchiRundownHardwarePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_H.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C003560C (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall VidSchiRundownHardwareContext(struct HwQueueStagingList *a1, struct VIDSCH_HW_CONTEXT *a2)
{
  char *v2; // r15
  char *i; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v2 = (char *)a2 + 224;
  for ( i = (char *)*((_QWORD *)a2 + 28); i != v2; i = *(char **)i )
  {
    v6 = i + 128;
    *((_QWORD *)i + 22) = i + 128;
    while ( (_QWORD *)*v6 != v6 )
      VidSchiRundownHardwarePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)(*v6 - 32LL), (struct VIDSCH_HW_QUEUE *)(i - 8));
    VidSchiSetHwQueueState(i - 8, 0LL);
  }
  v7 = *((_QWORD *)a2 + 20);
  if ( *((_QWORD *)a2 + 21) != v7 )
  {
    v8 = *((_QWORD *)a2 + 1);
    v9 = *(_QWORD *)(v8 + 32);
    *((_QWORD *)a2 + 21) = v7;
    VidSchiSignalRegisteredEvent(v9, (struct _KEVENT **)(v8 + 168));
  }
  VidSchiCheckPendingDeviceCommand(*((_QWORD **)a2 + 1));
}

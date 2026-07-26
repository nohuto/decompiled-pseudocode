/*
 * XREFs of ndisTraceDpcStart @ 0x1C007E8E8
 * Callers:
 *     ndisMTimerDpcX @ 0x1C00026B0 (ndisMTimerDpcX.c)
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMWakeUpDpcX @ 0x1C0010F50 (ndisMWakeUpDpcX.c)
 *     ?ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001E7F0 (-ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ndisMOidRequestToRequest @ 0x1C006B2BC (ndisMOidRequestToRequest.c)
 *     ?ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A0414 (-ndisMDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C00A063C (-ndisMDpcX@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisMTimerDpc @ 0x1C00A1350 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C00A1560 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0qq @ 0x1C007D584 (McTemplateK0qq.c)
 */

NTSTATUS __fastcall ndisTraceDpcStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00E8050;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00E8045 & 2) != 0 )
    return McTemplateK0qq(v6, &DpcStart, (const GUID *)(a1 + 4008), (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF, a2);
  return result;
}

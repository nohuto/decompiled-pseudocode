/*
 * XREFs of ndisTraceDpcStart @ 0x1C0050F0C
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006B20 (ndisInterruptDpc.c)
 *     ndisMTimerDpcX @ 0x1C000F540 (ndisMTimerDpcX.c)
 *     ndisMWakeUpDpcX @ 0x1C000F720 (ndisMWakeUpDpcX.c)
 *     ndisMTimerObjectDpc @ 0x1C0011B90 (ndisMTimerObjectDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisMOidRequestToRequest @ 0x1C0045DE0 (ndisMOidRequestToRequest.c)
 *     ndisMDpc @ 0x1C00662FC (ndisMDpc.c)
 *     ndisMDpcX @ 0x1C0066564 (ndisMDpcX.c)
 *     ndisMTimerDpc @ 0x1C00667D0 (ndisMTimerDpc.c)
 *     ndisMWakeUpDpc @ 0x1C0066A40 (ndisMWakeUpDpc.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     McTemplateK0qq @ 0x1C004F3F0 (McTemplateK0qq.c)
 */

NTSTATUS __fastcall ndisTraceDpcStart(__int64 a1, unsigned int a2)
{
  unsigned int v4; // eax
  NTSTATUS result; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  _QWORD WnodeEventItem[8]; // [rsp+30h] [rbp-48h] BYREF

  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  v4 = (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v4);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 21;
  LODWORD(WnodeEventItem[7]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00A2090;
  LOWORD(WnodeEventItem[0]) = 64;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00A2085 & 2) != 0 )
    return McTemplateK0qq(v6, &DpcStart, (const GUID *)(a1 + 4040), (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF, a2);
  return result;
}

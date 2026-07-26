/*
 * XREFs of ndisTraceDpcEnd @ 0x1C0050E24
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
 *     McTemplateK0qqx @ 0x1C004F4DC (McTemplateK0qqx.c)
 */

NTSTATUS __fastcall ndisTraceDpcEnd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 17;
  WnodeEventItem[7] = a3;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00A2090;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00A2085 & 2) != 0 )
    return McTemplateK0qqx(v9, v8, (const GUID *)(a1 + 4040), (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}

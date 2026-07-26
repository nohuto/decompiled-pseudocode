/*
 * XREFs of ndisTraceDpcEnd @ 0x1C007E800
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
 *     McTemplateK0qqx @ 0x1C007D670 (McTemplateK0qqx.c)
 */

NTSTATUS __fastcall ndisTraceDpcEnd(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // eax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  memset(WnodeEventItem, 0, 0x48uLL);
  v6 = (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF;
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  WnodeEventItem[6] = __PAIR64__(a2, v6);
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  BYTE4(WnodeEventItem[0]) = 17;
  WnodeEventItem[7] = a3;
  LODWORD(WnodeEventItem[8]) = KeGetPcr()->Prcb.Number;
  WnodeEventItem[1] = qword_1C00E8050;
  LOWORD(WnodeEventItem[0]) = 72;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00E8045 & 2) != 0 )
    return McTemplateK0qqx(v9, v8, (const GUID *)(a1 + 4008), (*(_QWORD *)(a1 + 4024) >> 24) & 0xFFFFFF, a2, a3);
  return result;
}

/*
 * XREFs of ndisTracePeriodicReceivesEnd @ 0x1C00510A0
 * Callers:
 *     ndisEmptyPeriodicReceivesQueue @ 0x1C006D3EC (ndisEmptyPeriodicReceivesQueue.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006E750 (ndisPeriodicReceivesWorker.c)
 * Callees:
 *     memset @ 0x1C0027180 (memset.c)
 *     McTemplateK0qxq @ 0x1C004F560 (McTemplateK0qxq.c)
 */

NTSTATUS __fastcall ndisTracePeriodicReceivesEnd(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD WnodeEventItem[10]; // [rsp+30h] [rbp-58h] BYREF

  v3 = a3;
  memset(WnodeEventItem, 0, sizeof(WnodeEventItem));
  HIDWORD(WnodeEventItem[5]) = 0x20000;
  BYTE4(WnodeEventItem[0]) = 18;
  *(GUID *)&WnodeEventItem[3] = EtwGuidNdisReceive;
  WnodeEventItem[7] = a2;
  LODWORD(WnodeEventItem[9]) = KeGetPcr()->Prcb.Number;
  v6 = *(_QWORD *)(a1 + 4056) >> 24;
  LOWORD(WnodeEventItem[0]) = 80;
  WnodeEventItem[8] = v3;
  LODWORD(WnodeEventItem[6]) = v6 & 0xFFFFFF;
  WnodeEventItem[1] = qword_1C00A2090;
  result = IoWMIWriteEvent(WnodeEventItem);
  if ( (byte_1C00A2085 & 2) != 0 )
    return McTemplateK0qxq(v9, v8, (const GUID *)(a1 + 4040), (*(_QWORD *)(a1 + 4056) >> 24) & 0xFFFFFF, a2, v3);
  return result;
}

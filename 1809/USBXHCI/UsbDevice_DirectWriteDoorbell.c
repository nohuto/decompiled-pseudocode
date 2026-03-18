/*
 * XREFs of UsbDevice_DirectWriteDoorbell @ 0x1C0028608
 * Callers:
 *     Control_Transfer_MapIntoRing @ 0x1C00273D4 (Control_Transfer_MapIntoRing.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002C518 (Isoch_Stage_MapIntoRing.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C0031FC4 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     McTemplateK0uqq @ 0x1C00034D8 (McTemplateK0uqq.c)
 */

int *__fastcall UsbDevice_DirectWriteDoorbell(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  int *result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( *(_QWORD *)(a1 + 160) )
  {
    v4 = ((_DWORD)a3 << 16) | (unsigned __int8)a2;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) & 2) != 0 )
      McTemplateK0uqq((struct _MCGEN_TRACE_CONTEXT *)a1, a2, a3, *(_BYTE *)(a1 + 135), a2, a3);
    result = *(int **)(a1 + 160);
    *result = v4;
    _InterlockedOr(v6, 0);
  }
  return result;
}

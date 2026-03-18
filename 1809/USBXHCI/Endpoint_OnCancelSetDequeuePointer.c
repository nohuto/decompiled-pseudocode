/*
 * XREFs of Endpoint_OnCancelSetDequeuePointer @ 0x1C0016838
 * Callers:
 *     Endpoint_SM_UpdateTransferRingDequeuePointers @ 0x1C0017F54 (Endpoint_SM_UpdateTransferRingDequeuePointers.c)
 * Callees:
 *     WPP_RECORDER_SF_dddi @ 0x1C0002B4C (WPP_RECORDER_SF_dddi.c)
 *     memset @ 0x1C0006FC0 (memset.c)
 *     Command_SendCommand @ 0x1C0008820 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C001615C (Endpoint_GetDequeuePointer.c)
 *     Endpoint_InitializeTransferRing @ 0x1C001621C (Endpoint_InitializeTransferRing.c)
 *     Endpoint_IsTransferRingEmpty @ 0x1C00162E4 (Endpoint_IsTransferRingEmpty.c)
 *     Endpoint_StreamsOnCancelSetDequeuePointerComplete @ 0x1C0018644 (Endpoint_StreamsOnCancelSetDequeuePointerComplete.c)
 */

__int64 __fastcall Endpoint_OnCancelSetDequeuePointer(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbp
  __int64 v5; // r10
  __int64 v7; // rbx
  unsigned int v8; // r10d
  __int64 v9; // r9
  int v10; // r10d
  __int64 v11; // rdx
  int v12; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(*(_QWORD *)a1 + 144LL);
  if ( *(_BYTE *)(a1 + 37) )
  {
    if ( Endpoint_IsTransferRingEmpty(a1, a2) && (*(_QWORD *)(v5 + 272) & 0x200000LL) == 0 )
      return Endpoint_StreamsOnCancelSetDequeuePointerComplete(a1, a2);
    v7 = 104LL * (a2 - 1) + *(_QWORD *)(a1 + 136) + 56LL;
  }
  else
  {
    v7 = a1 + 160;
  }
  Endpoint_InitializeTransferRing((__int64 *)a1, a2);
  memset((void *)v7, 0, 0x60uLL);
  v8 = *(_DWORD *)(v7 + 36) & 0xFFFF43FF;
  *(_QWORD *)(v7 + 40) = Endpoint_OnCancelSetDequeuePointerCompletion;
  *(_QWORD *)(v7 + 48) = a1;
  *(_DWORD *)(v7 + 36) = v8 | 0x4000;
  *(_QWORD *)(v7 + 24) = Endpoint_GetDequeuePointer(a1, a2);
  *(_DWORD *)(v7 + 36) = v10 ^ (v10 ^ (*(_DWORD *)(a1 + 144) << 16)) & 0x1F0000;
  LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)(a1 + 16) + 135LL);
  *(_BYTE *)(v7 + 39) = v11;
  if ( *(_BYTE *)(a1 + 37) )
    *(_WORD *)(v7 + 34) = a2;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_DWORD *)(v7 + 80) = 0;
  *(_DWORD *)(v7 + 84) = 0;
  *(_QWORD *)(v7 + 88) = 0LL;
  WPP_RECORDER_SF_dddi(*(_QWORD *)(a1 + 80), v11, HIBYTE(*(_DWORD *)(v7 + 36)), v9, v12);
  return Command_SendCommand(v4, v7);
}

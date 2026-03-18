/*
 * XREFs of VidSchiSubmitPreemptionCommand @ 0x1C007CFE8
 * Callers:
 *     VidSchiScheduleCommandToRun @ 0x1C0008280 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSwitchFromSuspendedDevices @ 0x1C0010560 (VidSchiSwitchFromSuspendedDevices.c)
 *     VidSchiResetEngine @ 0x1C002FB6C (VidSchiResetEngine.c)
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 *     VidSchiPreemptEngineNodes @ 0x1C00C9AA0 (VidSchiPreemptEngineNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     VidSchiSendToExecutionQueueWithWait @ 0x1C007D0AC (VidSchiSendToExecutionQueueWithWait.c)
 *     VidSchiAllocateDmaPacket @ 0x1C007D118 (VidSchiAllocateDmaPacket.c)
 */

__int64 __fastcall VidSchiSubmitPreemptionCommand(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  __int64 v4; // rbx
  __int64 DmaPacket; // r14
  __int64 v6; // rax
  void (__fastcall *v8)(_QWORD); // rax

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = *(_QWORD *)(v1 + 104);
  DmaPacket = VidSchiAllocateDmaPacket(a1);
  *(_DWORD *)DmaPacket = 912353622;
  *(_QWORD *)(DmaPacket + 48) = v1;
  v6 = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(DmaPacket + 92) = 0;
  *(_QWORD *)(DmaPacket + 80) = v6;
  *(_DWORD *)(DmaPacket + 72) = 7;
  *(_DWORD *)(DmaPacket + 88) = 3;
  _InterlockedIncrement((volatile signed __int32 *)(v3 + 708));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 2852));
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 1280));
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 776));
  *(_BYTE *)(v3 + 54) = 1;
  if ( *(_DWORD *)(a1 + 11192) != -1 )
  {
    v8 = *(void (__fastcall **)(_QWORD))(v3 + 2432);
    if ( v8 )
      v8(*(_QWORD *)(v3 + 2496));
  }
  *(_BYTE *)(v3 + 54) = 0;
  *(_DWORD *)(DmaPacket + 92) |= 0x400u;
  return VidSchiSendToExecutionQueueWithWait(DmaPacket, 0LL);
}

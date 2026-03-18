/*
 * XREFs of IrqArbBacktrackAllocation @ 0x1C00B67C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x1C001D9DC (WPP_RECORDER_SF_Dq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C001E374 (ProcessorDeleteDeviceIdtAssignment.c)
 *     RtlDeleteRange_0 @ 0x1C00317CD (RtlDeleteRange_0.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C009C654 (IcRemovePossibleReference.c)
 */

NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, unsigned int *a2)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  _QWORD *UserData; // rax
  int v8; // [rsp+20h] [rbp-68h]
  _OWORD v9[2]; // [rsp+40h] [rbp-48h] BYREF
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+8h] BYREF

  memset(v9, 0, sizeof(v9));
  memset(&Iterator, 0, sizeof(Iterator));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      *(_QWORD *)(*((_QWORD *)a2 + 5) + 40LL),
      v4,
      0x12u,
      v8);
  v5 = IrqArbGsivFromIrq(*a2);
  IcRemovePossibleReference(v5, (a2[16] & 2) != 0);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v5, 1, v9) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v5, DWORD1(v9[1]), 1);
  RtlGetFirstRange(*(PRTL_RANGE_LIST *)(a1 + 48), &Iterator, &Range);
  while ( Range )
  {
    if ( *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL) == Range->Owner
      && *((_QWORD *)a2 + 1) == Range->End
      && *(_QWORD *)a2 == Range->Start )
    {
      UserData = Range->UserData;
      if ( *((_DWORD *)UserData + 2) == 2 )
        --*(_DWORD *)(UserData[2] + 28LL);
      return RtlDeleteRange_0(
               *(PRTL_RANGE_LIST *)(a1 + 48),
               *(_QWORD *)a2,
               *((_QWORD *)a2 + 1),
               *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
    }
    RtlGetNextRange(&Iterator, &Range, 1u);
  }
  return RtlDeleteRange_0(
           *(PRTL_RANGE_LIST *)(a1 + 48),
           *(_QWORD *)a2,
           *((_QWORD *)a2 + 1),
           *(PVOID *)(*((_QWORD *)a2 + 4) + 32LL));
}

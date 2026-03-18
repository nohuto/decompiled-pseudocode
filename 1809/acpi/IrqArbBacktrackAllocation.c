/*
 * XREFs of IrqArbBacktrackAllocation @ 0x1C00B2D30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Dq @ 0x1C000EF34 (WPP_RECORDER_SF_Dq.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C000F6BC (ProcessorDeleteDeviceIdtAssignment.c)
 *     RtlDeleteRange_0 @ 0x1C0030B4D (RtlDeleteRange_0.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0091000 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0091218 (IrqArbGsivFromIrq.c)
 *     IcRemovePossibleReference @ 0x1C00939F4 (IcRemovePossibleReference.c)
 */

NTSTATUS __fastcall IrqArbBacktrackAllocation(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // esi
  _QWORD *UserData; // rax
  int v7; // [rsp+20h] [rbp-68h]
  __int128 v8; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+54h] [rbp-34h]
  struct _RANGE_LIST_ITERATOR Iterator; // [rsp+60h] [rbp-28h] BYREF
  PRTL_RANGE Range; // [rsp+90h] [rbp+8h] BYREF

  WPP_RECORDER_SF_Dq((__int64)WPP_GLOBAL_Control->DeviceExtension, (__int64)a2, *((_QWORD *)a2 + 4), 0x12u, v7);
  v4 = IrqArbGsivFromIrq(*a2);
  IcRemovePossibleReference(v4, (a2[16] & 2) != 0);
  if ( (int)ProcessorGetDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v4, 1, &v8) >= 0 )
    ProcessorDeleteDeviceIdtAssignment(*(PVOID *)(*((_QWORD *)a2 + 4) + 32LL), v4, v9, 1);
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

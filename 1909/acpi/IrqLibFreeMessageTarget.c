/*
 * XREFs of IrqLibFreeMessageTarget @ 0x1C00B6070
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C001D974 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C001D99C (IrqLibAcquireArbiterLock.c)
 *     ProcessorDeleteDeviceIdtAssignment @ 0x1C001E374 (ProcessorDeleteDeviceIdtAssignment.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     ProcessorIdtEntryToGsiv @ 0x1C00A13E4 (ProcessorIdtEntryToGsiv.c)
 */

LONG __fastcall IrqLibFreeMessageTarget(PVOID Owner, int a2, __int64 a3)
{
  LONG result; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  _OWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF
  ULONGLONG End; // [rsp+68h] [rbp+20h] BYREF

  memset(v9, 0, sizeof(v9));
  result = KeGetCurrentIrql();
  if ( !(_BYTE)result )
  {
    IrqLibAcquireArbiterLock(1);
    if ( (int)ProcessorIdtEntryToGsiv(a2, a3, v7, &End) >= 0 )
    {
      v8 = End;
      if ( (int)ProcessorGetDeviceIdtAssignment(Owner, End, 0, v9) >= 0 )
      {
        ProcessorDeleteDeviceIdtAssignment(Owner, v8, DWORD1(v9[1]), 0);
        RtlDeleteRange(RangeList, v8, v8, Owner);
      }
    }
    return IrqLibReleaseArbiterLock();
  }
  return result;
}

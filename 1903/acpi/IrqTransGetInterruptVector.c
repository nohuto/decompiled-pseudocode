/*
 * XREFs of IrqTransGetInterruptVector @ 0x1C00B64E0
 * Callers:
 *     <none>
 * Callees:
 *     IrqLibReleaseArbiterLock @ 0x1C001D974 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C001D99C (IrqLibAcquireArbiterLock.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     IrqTranslatepQueryDeviceIrql @ 0x1C0098820 (IrqTranslatepQueryDeviceIrql.c)
 *     ProcessorGetDeviceIdtAssignment @ 0x1C0099A20 (ProcessorGetDeviceIdtAssignment.c)
 *     IrqArbGsivFromIrq @ 0x1C0099C64 (IrqArbGsivFromIrq.c)
 */

__int64 __fastcall IrqTransGetInterruptVector(__int64 a1, __int64 a2, unsigned int a3, int a4, char *a5, _QWORD *a6)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // edi
  unsigned int v10; // esi
  int DeviceIdtAssignment; // ebx
  _OWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF

  v6 = a3;
  memset(v12, 0, sizeof(v12));
  v8 = 0;
  if ( (_DWORD)v6 != a4 )
    return 0LL;
  IrqLibAcquireArbiterLock(0);
  v10 = IrqArbGsivFromIrq(v6);
  DeviceIdtAssignment = ProcessorGetDeviceIdtAssignment(0LL, v10, 0, v12);
  IrqLibReleaseArbiterLock();
  if ( DeviceIdtAssignment >= 0 )
  {
    v8 = DWORD1(v12[1]);
    *a5 = IrqTranslatepQueryDeviceIrql(v10, SDWORD1(v12[1]));
    *a6 = *(_QWORD *)&v12[0];
  }
  return v8;
}

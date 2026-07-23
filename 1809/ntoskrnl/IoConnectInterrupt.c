/*
 * XREFs of IoConnectInterrupt @ 0x14075E090
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     IopConnectInterruptFullySpecified @ 0x14075E104 (IopConnectInterruptFullySpecified.c)
 */

NTSTATUS __stdcall IoConnectInterrupt(
        PKINTERRUPT *InterruptObject,
        PKSERVICE_ROUTINE ServiceRoutine,
        PVOID ServiceContext,
        PKSPIN_LOCK SpinLock,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  _QWORD v12[3]; // [rsp+60h] [rbp-18h] BYREF

  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  v12[1] = 0LL;
  v12[0] = ProcessorEnableMask;
  return IopConnectInterruptFullySpecified(
           (_DWORD)InterruptObject,
           (_DWORD)ServiceRoutine,
           (_DWORD)ServiceContext,
           (_DWORD)SpinLock,
           Vector,
           Irql,
           SynchronizeIrql,
           InterruptMode,
           ShareVector,
           (__int64)v12);
}

/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1400DF570
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1400018C0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x1400DE740 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA20 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBC0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1400DF0B4 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPropagateIrpExtensionEx @ 0x1400DF610 (IoPropagateIrpExtensionEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078F4 (IoMakeAssociatedIrpPriv.c)
 *     IoAsynchronousPageWrite @ 0x140135014 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF248 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1400DF9B8 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 IrpExtension; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6LL);
  if ( !IrpExtension )
    return 3221225626LL;
  v7 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v7 + 1740) & 0x1000) != 0
    && *(_QWORD *)(v7 + 944)
    && *(_QWORD *)(*(_QWORD *)(v7 + 944) + 1336LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *(_QWORD *)(IrpExtension + 16) = v9;
  return 0LL;
}

/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1400DF550
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1400018C0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x1400DE720 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEA00 (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400DEBA0 (IoSetDiskIoAttributionFromThread.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1400DF094 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPropagateIrpExtensionEx @ 0x1400DF5F0 (IoPropagateIrpExtensionEx.c)
 *     IoMakeAssociatedIrpPriv @ 0x1401078D4 (IoMakeAssociatedIrpPriv.c)
 *     IoAsynchronousPageWrite @ 0x140134FF4 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x1400DF228 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1400DF998 (IopAllocateIrpExtension.c)
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

/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x14011A840
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1400018E0 (IoUpdateIrpIoAttributionHandle.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140090844 (IopSetDiskIoAttributionFromProcess.c)
 *     IoPageReadEx @ 0x140094BE0 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x140094EEC (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140095080 (IoSetDiskIoAttributionFromThread.c)
 *     IoPropagateIrpExtensionEx @ 0x140095230 (IoPropagateIrpExtensionEx.c)
 *     IoAsynchronousPageWrite @ 0x14011A258 (IoAsynchronousPageWrite.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011A4A4 (IoMakeAssociatedIrpPriv.c)
 * Callees:
 *     IopReferenceIoAttributionFromProcess @ 0x140090E88 (IopReferenceIoAttributionFromProcess.c)
 *     IopAllocateIrpExtension @ 0x1400953F0 (IopAllocateIrpExtension.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  _WORD *IrpExtension; // rbx
  __int64 v7; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6);
  if ( !IrpExtension )
    return 3221225626LL;
  v7 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v7 + 1788) & 0x1000) != 0
    && *(_QWORD *)(v7 + 952)
    && *(_QWORD *)(*(_QWORD *)(v7 + 952) + 1336LL)
    && (a4 & 1) == 0 )
  {
    IopReferenceIoAttributionFromProcess(v7, 1, &v9);
  }
  *((_QWORD *)IrpExtension + 2) = v9;
  return 0LL;
}

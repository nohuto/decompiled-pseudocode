/*
 * XREFs of IopSetDiskIoAttributionExtension @ 0x1400A94C4
 * Callers:
 *     IoUpdateIrpIoAttributionHandle @ 0x1400018E0 (IoUpdateIrpIoAttributionHandle.c)
 *     IoPageReadEx @ 0x1400A7640 (IoPageReadEx.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     IoSetDiskIoAttributionFromThread @ 0x1400A7AE0 (IoSetDiskIoAttributionFromThread.c)
 *     IoPropagateIrpExtensionEx @ 0x1400A7C90 (IoPropagateIrpExtensionEx.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x1400A953C (IopSetDiskIoAttributionFromProcess.c)
 *     IoMakeAssociatedIrpPriv @ 0x14011BF14 (IoMakeAssociatedIrpPriv.c)
 *     IoAsynchronousPageWrite @ 0x140137438 (IoAsynchronousPageWrite.c)
 * Callees:
 *     IopAllocateIrpExtension @ 0x1400A7E50 (IopAllocateIrpExtension.c)
 *     IopReferenceIoAttributionFromProcess @ 0x1400A9B88 (IopReferenceIoAttributionFromProcess.c)
 */

__int64 __fastcall IopSetDiskIoAttributionExtension(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  _WORD *IrpExtension; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = a2;
  IrpExtension = IopAllocateIrpExtension(a1, 6);
  if ( !IrpExtension )
    return 3221225626LL;
  v8 = *(_QWORD *)(a3 + 544);
  if ( (*(_DWORD *)(v8 + 1788) & 0x1000) != 0 && *(_QWORD *)(v8 + 952) && *(_QWORD *)(*(_QWORD *)(v8 + 952) + 1336LL) )
  {
    LOBYTE(v6) = 1;
    if ( (a4 & 1) == 0 )
      IopReferenceIoAttributionFromProcess(v8, v6, &v10);
  }
  *((_QWORD *)IrpExtension + 2) = v10;
  return 0LL;
}

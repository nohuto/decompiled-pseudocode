/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C001AB0C
 * Callers:
 *     RaCreateDriver @ 0x1C006BF58 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0061570 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0061570 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0061580 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C0061580 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0061590 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0061590 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00615A0 = &StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00615A0 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00615B0 = (__int64)StorExtGetOriginalMdl;
  return result;
}

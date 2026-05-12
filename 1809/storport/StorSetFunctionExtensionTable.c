/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C001E94C
 * Callers:
 *     RaCreateDriver @ 0x1C006E790 (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0061590 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0061590 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C00615A0 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C00615A0 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C00615B0 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C00615B0 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00615C0 = &StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00615C0 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00615D0 = (__int64)StorExtGetOriginalMdl;
  return result;
}

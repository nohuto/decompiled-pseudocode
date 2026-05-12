/*
 * XREFs of StorSetFunctionExtensionTable @ 0x1C001B28C
 * Callers:
 *     RaCreateDriver @ 0x1C006E97C (RaCreateDriver.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *StorSetFunctionExtensionTable())()
{
  __int64 (__fastcall *result)(); // rax

  LODWORD(StorportExtensionTable) = 1;
  *((_QWORD *)&StorportExtensionTable + 1) = StorExtGetMessageInterruptInformation;
  *(_QWORD *)&xmmword_1C0062570 = StorExtPutScatterGatherList;
  *((_QWORD *)&xmmword_1C0062570 + 1) = StorExtBuildScatterGatherList;
  *(_QWORD *)&xmmword_1C0062580 = &StorExtFreePool;
  *((_QWORD *)&xmmword_1C0062580 + 1) = StorExtAllocatePool;
  *(_QWORD *)&xmmword_1C0062590 = StorExtGetSystemAddress;
  *((_QWORD *)&xmmword_1C0062590 + 1) = StorExtAcquireMSISpinLock;
  *(_QWORD *)&xmmword_1C00625A0 = &StorExtReleaseMSISpinLock;
  *((_QWORD *)&xmmword_1C00625A0 + 1) = &StorExtCompleteServiceIrp;
  result = StorExtGetOriginalMdl;
  qword_1C00625B0 = (__int64)StorExtGetOriginalMdl;
  return result;
}

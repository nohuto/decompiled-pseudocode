/*
 * XREFs of ??0RIMLOCKExclusiveIfNeeded@@QEAA@PEAURIMLOCK@@@Z @ 0x1C0052208
 * Callers:
 *     RIMDeviceIoControl @ 0x1C004E580 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00866A4 (RawInputManagerObjectDelete.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0090848 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0090924 (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00948C0 (RIMFreeHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C01138A0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0113970 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 */

RIMLOCKExclusiveIfNeeded *__fastcall RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded(
        RIMLOCKExclusiveIfNeeded *this,
        struct _KTHREAD **a2)
{
  *(_QWORD *)this = 0LL;
  if ( a2[1] != KeGetCurrentThread() )
  {
    *(_QWORD *)this = a2;
    RIMLockExclusive((__int64)a2);
  }
  return this;
}

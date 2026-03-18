/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C006CE74
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0069D40 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 *     RIMSearchHidTLCInfo @ 0x1C006EC1C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0071A30 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0071AD0 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0146D80 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0146E50 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}

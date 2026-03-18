/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0058F14
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0055DE0 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00597C8 (RawInputManagerObjectDelete.c)
 *     RIMSearchHidTLCInfo @ 0x1C005AFD4 (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C005B5F0 (RIMFreeHidTLCInfo.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C005B68C (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0144710 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01447E0 (RIMTransformDimensionFromDigitizer.c)
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

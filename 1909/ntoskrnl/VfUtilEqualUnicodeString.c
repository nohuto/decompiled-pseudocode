/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140964580
 * Callers:
 *     VfXdvDriverCaptureIoCallbacks @ 0x14095FF3C (VfXdvDriverCaptureIoCallbacks.c)
 *     ViFaultsIsAppTarget @ 0x14097A5E8 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}

/*
 * XREFs of VfUtilEqualUnicodeString @ 0x1409260F0
 * Callers:
 *     VfXdvDriverCaptureIoCallbacks @ 0x140921338 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViFaultsIsAppTarget @ 0x140938CC8 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x1401C5BD0 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == *(unsigned __int16 *)a1;
}

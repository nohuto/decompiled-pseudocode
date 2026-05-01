/*
 * XREFs of CempUtilPackageInfoInitialize @ 0x180001834
 * Callers:
 *     CempUtilValidateAndCapturePackageInfoWithFamilyName @ 0x180001724 (CempUtilValidateAndCapturePackageInfoWithFamilyName.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015730 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 */

NTSTATUS __fastcall CempUtilPackageInfoInitialize(
        unsigned __int16 *a1,
        PSID SourceSid,
        __int64 a3,
        int a4,
        unsigned __int16 *a5)
{
  NTSTATUS result; // eax

  memset_0(a5, 0, 0xCCuLL);
  StringCchCopyW(a5, 0x41uLL, a1);
  result = RtlCopySid(0x44u, a5 + 66, SourceSid);
  *((_DWORD *)a5 + 50) = a4;
  return result;
}

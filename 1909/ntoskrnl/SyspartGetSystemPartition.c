/*
 * XREFs of SyspartGetSystemPartition @ 0x14093263C
 * Callers:
 *     CmpMountPreloadedHives @ 0x1407655D4 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406E2DD4 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140741680 (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemSystemPartitionInformation, a1, 0x1000u, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, 0x1000u, a3);
  return result;
}

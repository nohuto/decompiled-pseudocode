/*
 * XREFs of SyspartGetFirmwarePartition @ 0x140714E00
 * Callers:
 *     BiGetSystemPartition @ 0x140714D78 (BiGetSystemPartition.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406BEFC4 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140714E5C (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetFirmwarePartition(void *a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(SystemWatchDogTimerInformation|0x80, a1);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetFirmwareSystemPartition, a1, a2, a3);
  return result;
}

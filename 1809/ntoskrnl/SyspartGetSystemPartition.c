/*
 * XREFs of SyspartGetSystemPartition @ 0x1408F4ED8
 * Callers:
 *     CmpMountPreloadedHives @ 0x140735800 (CmpMountPreloadedHives.c)
 * Callees:
 *     SiGetSystemDeviceName @ 0x1406BEFE4 (SiGetSystemDeviceName.c)
 *     SiQuerySystemInformationString @ 0x140714E7C (SiQuerySystemInformationString.c)
 */

__int64 __fastcall SyspartGetSystemPartition(void *a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax

  result = SiQuerySystemInformationString(MaxSystemInfoClass, a1, 0x1000u, a3);
  if ( (int)(result + 0x80000000) >= 0 && (_DWORD)result != -1073741789 )
    return SiGetSystemDeviceName((__int64 (__fastcall *)(_QWORD, void **))SiGetSystemPartition, a1, 0x1000u, a3);
  return result;
}

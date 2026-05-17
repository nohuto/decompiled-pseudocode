/*
 * XREFs of sub_1801140B8 @ 0x1801140B8
 * Callers:
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x18009C7C0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 */

__int64 __fastcall sub_1801140B8(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // ebx

  if ( a3 < 8 )
    return 3221225485LL;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v4 = ZwDeviceIoControlFile();
    ZwClose();
    return v4;
  }
  return result;
}

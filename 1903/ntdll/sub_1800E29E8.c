/*
 * XREFs of sub_1800E29E8 @ 0x1800E29E8
 * Callers:
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 *     sub_1800585E0 @ 0x1800585E0 (sub_1800585E0.c)
 *     sub_1800E2A9C @ 0x1800E2A9C (sub_1800E2A9C.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x18009C760 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x18009C7A0 (ZwReadFile.c)
 *     sub_1800E319C @ 0x1800E319C (sub_1800E319C.c)
 */

__int64 __fastcall sub_1800E29E8(char *Handle, __int64 a2, void *a3, ULONG a4)
{
  __int64 result; // rax
  NTSTATUS v8; // edx
  int v9; // ecx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( (unsigned __int64)(Handle - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = sub_1800E319C();
    if ( (int)result < 0 )
      return result;
    v8 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, a3, a4, 0LL, 0LL);
    if ( v8 == 259 )
      v8 = ZwWaitForSingleObject(Handle, 0, 0LL);
    v9 = 0;
    if ( (v8 & 0xC0000000) != 0x80000000 )
      v9 = v8;
    if ( v9 >= 0 && a4 != LODWORD(IoStatusBlock.Information) )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v9;
}

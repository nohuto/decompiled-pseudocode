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

__int64 __fastcall sub_1800E29E8(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  int File; // edx
  int v7; // ecx
  int v8; // [rsp+58h] [rbp-10h]

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    result = sub_1800E319C();
    if ( (int)result < 0 )
      return result;
    File = ZwReadFile();
    if ( File == 259 )
      File = ZwWaitForSingleObject();
    v7 = 0;
    if ( (File & 0xC0000000) != 0x80000000 )
      v7 = File;
    if ( v7 >= 0 && a4 != v8 )
      return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}

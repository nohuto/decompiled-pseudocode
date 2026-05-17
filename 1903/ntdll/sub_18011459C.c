/*
 * XREFs of sub_18011459C @ 0x18011459C
 * Callers:
 *     sub_180114534 @ 0x180114534 (sub_180114534.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009C7C0 (ZwDeviceIoControlFile.c)
 */

__int64 __fastcall sub_18011459C(__int64 a1, int *a2)
{
  __int64 result; // rax
  int v4; // eax
  int v5; // [rsp+60h] [rbp-28h]

  result = ZwDeviceIoControlFile();
  if ( (int)result >= 0 )
  {
    v4 = 50;
    if ( v5 == 1 )
      v4 = 100;
    *a2 = v4;
    return 0LL;
  }
  if ( (unsigned int)(result + 0x3FFFFFFF) <= 1 || (_DWORD)result == -1073741808 )
  {
    *a2 = 100;
    return 0LL;
  }
  return result;
}

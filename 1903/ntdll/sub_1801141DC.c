/*
 * XREFs of sub_1801141DC @ 0x1801141DC
 * Callers:
 *     sub_180111230 @ 0x180111230 (sub_180111230.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x18009C7C0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateFile @ 0x18009D180 (ZwCreateFile.c)
 */

__int64 __fastcall sub_1801141DC(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // ebx
  unsigned __int64 v5; // [rsp+E8h] [rbp+2Fh]

  *a2 = 0;
  result = ZwCreateFile();
  if ( (int)result >= 0 )
  {
    v4 = ZwDeviceIoControlFile();
    ZwClose();
    if ( v4 >= 0 )
    {
      if ( v5 <= 0xFFFFFFFF )
      {
        *a2 = v5;
        return 0LL;
      }
      else
      {
        return 3221226539LL;
      }
    }
    else
    {
      return (unsigned int)v4;
    }
  }
  return result;
}

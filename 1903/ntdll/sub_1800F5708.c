/*
 * XREFs of sub_1800F5708 @ 0x1800F5708
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

__int64 sub_1800F5708()
{
  __int64 result; // rax
  char v1; // al
  char v2; // [rsp+20h] [rbp-38h]
  unsigned int v3; // [rsp+24h] [rbp-34h]
  char v4; // [rsp+28h] [rbp-30h]

  result = ZwQuerySystemInformation();
  if ( (int)result >= 0 )
  {
    v1 = byte_1801627E8;
    if ( (v4 & 1) != 0 )
      v1 = 0;
    byte_1801627E8 = v1;
    if ( (v2 & 4) != 0 )
    {
      dword_1801627D8 = 2;
    }
    else
    {
      if ( (v2 & 2) == 0 )
      {
LABEL_9:
        result = v3;
        qword_1801627E0 = v3;
        return result;
      }
      dword_1801627D8 = 3;
    }
    byte_1801669C0 = 1;
    goto LABEL_9;
  }
  return result;
}

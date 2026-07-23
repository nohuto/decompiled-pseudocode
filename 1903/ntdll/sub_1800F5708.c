/*
 * XREFs of sub_1800F5708 @ 0x1800F5708
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x18009CDA0 (ZwQuerySystemInformation.c)
 */

NTSTATUS sub_1800F5708()
{
  NTSTATUS result; // eax
  char v1; // al
  _BYTE SystemInformation[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int32 v3; // [rsp+24h] [rbp-34h]
  char v4; // [rsp+28h] [rbp-30h]

  result = ZwQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    v1 = byte_1801627E8;
    if ( (v4 & 1) != 0 )
      v1 = 0;
    byte_1801627E8 = v1;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      dword_1801627D8 = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
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

/*
 * XREFs of sub_1800FD0D0 @ 0x1800FD0D0
 * Callers:
 *     sub_180008A20 @ 0x180008A20 (sub_180008A20.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 * Callees:
 *     sub_1800090D4 @ 0x1800090D4 (sub_1800090D4.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 */

__int64 __fastcall sub_1800FD0D0(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v6; // [rsp+58h] [rbp+10h] BYREF
  unsigned int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  v6 = -1;
  v8 = 4;
  v7 = 4;
  if ( !a2 || !a1 )
    return 3221225485LL;
  *a2 = 0;
  RtlInitUnicodeString(&DestinationString, L"MachineUILock");
  result = sub_1800090D4(a1, (__int64)&DestinationString, &v8, &v6, &v7);
  if ( (int)result >= 0 )
  {
    if ( v6 == 1 )
    {
      *a2 = 1;
    }
    else if ( v6 )
    {
      return 3221225473LL;
    }
    else
    {
      *a2 = 0;
    }
  }
  return result;
}

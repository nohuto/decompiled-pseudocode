/*
 * XREFs of BiBindEfiEntryToBcdObject @ 0x1408F22D8
 * Callers:
 *     BiBindEfiEntries @ 0x1408F2194 (BiBindEfiEntries.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BiGetKeyName @ 0x140713B4C (BiGetKeyName.c)
 *     BiCreateObject @ 0x1408F0BA0 (BiCreateObject.c)
 */

__int64 __fastcall BiBindEfiEntryToBcdObject(__int64 a1, GUID *a2)
{
  int KeyName; // ebx
  GUID v4; // xmm0
  PCWSTR SourceString; // [rsp+30h] [rbp-40h] BYREF
  void *v7; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v8[2]; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  GUID Guid; // [rsp+58h] [rbp-18h] BYREF

  SourceString = 0LL;
  v7 = 0LL;
  if ( (a2[3].Data1 & 4) != 0 )
  {
    return 0;
  }
  else
  {
    v8[1] = 270532607;
    v8[0] = 1;
    KeyName = BiCreateObject(a1, 0LL, v8, 1LL, &v7);
    if ( KeyName >= 0 )
    {
      KeyName = BiGetKeyName(v7, &SourceString);
      if ( KeyName >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyName = RtlGUIDFromString(&DestinationString, &Guid);
        if ( KeyName >= 0 )
        {
          v4 = Guid;
          a2[3].Data1 |= 4u;
          a2[1] = v4;
        }
      }
      if ( SourceString )
        ExFreePoolWithTag((PVOID)SourceString, 0x4B444342u);
    }
    if ( v7 )
      BcdCloseObject((__int64)v7);
  }
  return (unsigned int)KeyName;
}

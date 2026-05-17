/*
 * XREFs of sub_1800EDA08 @ 0x1800EDA08
 * Callers:
 *     RtlpSetUserPreferredUILanguages @ 0x1800EDBE0 (RtlpSetUserPreferredUILanguages.c)
 * Callees:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwCreateKey @ 0x18009CA80 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 */

__int64 sub_1800EDA08()
{
  int Key; // ebx
  __int64 v1; // rdx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  int v4; // [rsp+50h] [rbp-30h]
  __int64 v5; // [rsp+58h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+68h] [rbp-18h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  __int64 v9; // [rsp+B8h] [rbp+38h] BYREF

  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\Settings");
  v5 = 0LL;
  p_DestinationString = &DestinationString;
  v8 = 0LL;
  v4 = 48;
  v7 = 64;
  Key = ZwCreateKey();
  if ( Key >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
    Key = ZwSetValueKey();
    if ( Key >= 0 && (int)sub_180009204(0x2000000u, v1, (__int64)&v9) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Control Panel\\Desktop\\MuiCached");
      v5 = v9;
      p_DestinationString = &DestinationString;
      v4 = 48;
      v7 = 64;
      v8 = 0LL;
      Key = ZwCreateKey();
      if ( Key >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"MachinePreferredUILanguages");
        Key = ZwSetValueKey();
      }
    }
  }
  if ( v9 )
    ZwClose();
  return (unsigned int)Key;
}

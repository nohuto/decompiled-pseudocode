/*
 * XREFs of ndisNDKHandleWmiChangeRequest @ 0x1C0119D6C
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C001136C (ndisQuerySetMiniport.c)
 *     NdisWriteConfiguration @ 0x1C002A780 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C002B170 (NdisOpenConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C002BAE0 (NdisCloseConfiguration.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisNDKHandleWmiChangeRequest(__int64 a1, char a2)
{
  void *v2; // r8
  unsigned int SetMiniport; // eax
  bool v6; // zf
  const WCHAR *v7; // rdx
  unsigned int v8; // ecx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  int Status; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v15[32]; // [rsp+70h] [rbp-90h] BYREF

  v2 = *(void **)(a1 + 4000);
  memset(&ParameterValue, 0, sizeof(ParameterValue));
  v10 = a2;
  Keyword.Buffer = L"*NetworkDirect";
  *(_QWORD *)&Keyword.Length = 1966108LL;
  NdisOpenConfiguration(&Status, &ConfigurationHandle, v2);
  SetMiniport = Status;
  v6 = Status == 0;
  if ( Status >= 0 )
  {
    ParameterValue.ParameterType = NdisParameterString;
    v7 = (const WCHAR *)L"1";
    if ( !a2 )
      v7 = L"0";
    RtlInitUnicodeString((PUNICODE_STRING)&ParameterValue.ParameterData, v7);
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    NdisCloseConfiguration(ConfigurationHandle);
    SetMiniport = Status;
    v6 = Status == 0;
    if ( Status >= 0 )
    {
      memset(v15, 0, 0xF8uLL);
      LODWORD(v15[11]) |= 8u;
      LODWORD(v15[1]) = 0;
      v15[13] = &ndisIntReqWmi;
      LODWORD(v15[6]) = 1;
      v15[5] = &v10;
      v15[0] = 0x100EC0196LL;
      LODWORD(v15[4]) = -66846207;
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (__int64)v15, 0, 0LL);
      v6 = SetMiniport == 0;
    }
  }
  if ( v6 )
    return SetMiniport;
  if ( SetMiniport == 259 )
    return SetMiniport;
  if ( SetMiniport == -2147483643 )
    return SetMiniport;
  v8 = -1073741823;
  switch ( SetMiniport )
  {
    case 0xC0000001:
    case 0xC000009A:
    case 0xC00000BB:
      return SetMiniport;
    case 0xC0010016:
      return (unsigned int)-1073741789;
    case 0xC0010014:
      return (unsigned int)-1073741306;
    case 0xC0010015:
      return (unsigned int)-1073741811;
  }
  return v8;
}

/*
 * XREFs of RtlpUpdateDynamicTimeZones @ 0x140735FB4
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x140735864 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14018107C (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401B8930 (ZwEnumerateKey.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C68AC (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1405C8774 (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x1406C3500 (RtlWriteRegistryValue.c)
 */

char __fastcall RtlpUpdateDynamicTimeZones(__int16 a1)
{
  char v2; // bl
  ULONG v4; // edi
  ULONG i; // edx
  HANDLE v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD Buf2[12]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD Buf1[12]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE KeyInformation[12]; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int16 v16; // [rsp+16Ch] [rbp+6Ch]
  char v17; // [rsp+170h] [rbp+70h] BYREF

  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 292;
  LODWORD(v12[4]) = 50331648;
  v12[3] = Buf2;
  v12[2] = L"TZI";
  if ( (int)RtlpGetRegistryHandle(3, L"Time Zones", 0, &KeyHandle) < 0 )
    return 0;
  v4 = 0;
  v2 = 1;
  for ( i = 0; ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x110u, &ResultLength) >= 0; i = v4 )
  {
    ObjectAttributes.Length = 48;
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
    DestinationString.MaximumLength = v16;
    DestinationString.Length = v16;
    ObjectAttributes.RootDirectory = KeyHandle;
    DestinationString.Buffer = (wchar_t *)&v17;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&v6, 0x2000000u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Dynamic DST");
      ObjectAttributes.RootDirectory = v6;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes) >= 0 )
      {
        memset(Buf2, 0, 0x2CuLL);
        Buf2[0] = -44;
        if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)v6, (__int64)v12, 0LL) >= 0
          && (int)RtlpFindRegTziForCurrentYear(Buf1, (const WCHAR *)Handle, a1) >= 0
          && memcmp(Buf1, Buf2, 0x2CuLL) )
        {
          RtlWriteRegistryValue(0x40000000u, (PCWSTR)v6, L"TZI", 3u, Buf1, 0x2Cu);
        }
        ZwClose(Handle);
      }
      ZwClose(v6);
    }
    ++v4;
  }
  ZwClose(KeyHandle);
  return v2;
}

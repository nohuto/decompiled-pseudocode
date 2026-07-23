/*
 * XREFs of RtlpUpdateDynamicTimeZones @ 0x140764B10
 * Callers:
 *     ExpRefreshTimeZoneInformation @ 0x1407643E8 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     RtlpFindRegTziForCurrentYear @ 0x14018D95C (RtlpFindRegTziForCurrentYear.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401C1290 (ZwEnumerateKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlpQueryRegistryValues @ 0x1405C1D18 (RtlpQueryRegistryValues.c)
 *     RtlpGetRegistryHandle @ 0x1405C38F8 (RtlpGetRegistryHandle.c)
 *     RtlWriteRegistryValue @ 0x1406E41C0 (RtlWriteRegistryValue.c)
 */

char __fastcall RtlpUpdateDynamicTimeZones(__int16 a1)
{
  char v2; // bl
  ULONG v4; // edi
  ULONG i; // edx
  HANDLE v6; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v12[14]; // [rsp+90h] [rbp-70h] BYREF
  _DWORD Buf2[12]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD Buf1[12]; // [rsp+130h] [rbp+30h] BYREF
  _WORD KeyInformation[136]; // [rsp+160h] [rbp+60h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  memset(Buf2, 0, 0x2CuLL);
  memset(Buf1, 0, 0x2CuLL);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 292;
  v12[2] = L"TZI";
  LODWORD(v12[4]) = 50331648;
  v12[3] = Buf2;
  if ( (int)RtlpGetRegistryHandle(3, L"Time Zones", 0, &KeyHandle) < 0 )
    return 0;
  v4 = 0;
  v2 = 1;
  for ( i = 0; ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x110u, &ResultLength) >= 0; i = v4 )
  {
    *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
    DestinationString.MaximumLength = KeyInformation[6];
    DestinationString.Length = KeyInformation[6];
    ObjectAttributes.RootDirectory = KeyHandle;
    DestinationString.Buffer = &KeyInformation[8];
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
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
        if ( (int)RtlpQueryRegistryValues(0x40000000u, (const WCHAR *)v6, (__int64)v12, 0LL) >= 0
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

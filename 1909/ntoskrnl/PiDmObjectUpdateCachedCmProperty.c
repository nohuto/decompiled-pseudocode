/*
 * XREFs of PiDmObjectUpdateCachedCmProperty @ 0x1405BE668
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1405BDF50 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _CmMapCmObjectTypeToPnpObjectType @ 0x1405BE758 (_CmMapCmObjectTypeToPnpObjectType.c)
 *     PiDmObjectUpdateCachedObjectProperty @ 0x1405BF410 (PiDmObjectUpdateCachedObjectProperty.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 */

void __fastcall PiDmObjectUpdateCachedCmProperty(
        int a1,
        int a2,
        __int64 a3,
        int a4,
        int a5,
        PCWSTR SourceString,
        unsigned int a7)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // ecx
  int v11; // r8d
  SIZE_T NumberOfBytes; // [rsp+38h] [rbp-40h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  GUID Guid; // [rsp+50h] [rbp-28h] BYREF

  if ( a1 == 1 )
  {
    *(_QWORD *)&Guid.Data1 = 0LL;
    *(_QWORD *)Guid.Data4 = 0LL;
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    if ( a4 == 9 )
    {
      if ( a7 )
      {
        if ( a5 == 1 && a7 >= 2 )
        {
          RtlInitUnicodeString(&DestinationString, SourceString);
          if ( RtlGUIDFromString(&DestinationString, &Guid) >= 0 )
          {
            LODWORD(NumberOfBytes) = 16;
            v8 = CmMapCmObjectTypeToPnpObjectType(1LL);
            PiDmObjectUpdateCachedObjectProperty(
              v8,
              a2,
              v9,
              0,
              (__int64)&DEVPKEY_Device_ClassGuid,
              13,
              &Guid,
              NumberOfBytes);
          }
        }
      }
      else
      {
        LODWORD(NumberOfBytes) = 0;
        v10 = CmMapCmObjectTypeToPnpObjectType(1LL);
        PiDmObjectUpdateCachedObjectProperty(v10, a2, v11, 0, (__int64)&DEVPKEY_Device_ClassGuid, 0, 0LL, NumberOfBytes);
      }
    }
  }
}

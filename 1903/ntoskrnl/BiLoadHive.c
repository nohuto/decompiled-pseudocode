/*
 * XREFs of BiLoadHive @ 0x14073F16C
 * Callers:
 *     BiAddStoreFromFile @ 0x14073B514 (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x1401C2110 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x1401C2130 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x1401C38F0 (ZwUnloadKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     BiLogMessage @ 0x14073E4B4 (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x14073F0A0 (BiOpenKeyNonBcd.c)
 *     BiReleasePrivilege @ 0x14073F36C (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x14073F3BC (BiAcquirePrivilege.c)
 *     BiDoesHiveExist @ 0x14073F584 (BiDoesHiveExist.c)
 */

__int64 __fastcall BiLoadHive(PCWSTR SourceString, __int64 a2, HANDLE *a3)
{
  unsigned int i; // esi
  HANDLE v6; // rdi
  int v7; // eax
  NTSTATUS v8; // ebx
  int v9; // eax
  __int64 v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-D8h]
  __int64 v13; // [rsp+28h] [rbp-D0h]
  __int64 v14; // [rsp+30h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-B8h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+60h] [rbp-98h] BYREF
  OBJECT_ATTRIBUTES FileObjectAttributes; // [rsp+90h] [rbp-68h] BYREF

  memset(&FileObjectAttributes, 0, sizeof(FileObjectAttributes));
  memset(&KeyObjectAttributes, 0, sizeof(KeyObjectAttributes));
  v14 = 0LL;
  *(_QWORD *)&v17.Length = 0LL;
  v17.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    Handle = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 0xF003Fu, &Handle);
      v8 = v7;
      if ( v7 < 0 )
      {
        BiLogMessage(4LL, L"Failed open key %ws. Status: %x", L"\\Registry\\Machine", (unsigned int)v7);
        v6 = Handle;
      }
      else
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        KeyObjectAttributes.Length = 48;
        v6 = Handle;
        KeyObjectAttributes.RootDirectory = Handle;
        KeyObjectAttributes.Attributes = 576;
        KeyObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
        RtlInitUnicodeString(&v17, (PCWSTR)(a2 + 12));
        FileObjectAttributes.Length = 48;
        FileObjectAttributes.RootDirectory = 0LL;
        FileObjectAttributes.Attributes = 576;
        FileObjectAttributes.ObjectName = &v17;
        *(_OWORD *)&FileObjectAttributes.SecurityDescriptor = 0LL;
        v9 = BiAcquirePrivilege(18LL, &v14);
        v8 = v9;
        if ( v9 < 0 )
        {
          BiLogMessage(
            4LL,
            L"Failed to acquire permissions to load hive. Status: %x",
            L"\\Registry\\Machine",
            (unsigned int)v9);
        }
        else
        {
          v8 = ZwLoadKey2(&KeyObjectAttributes, &FileObjectAttributes, 0x1780u);
          if ( v8 < 0 )
            v8 = ZwLoadKey2(&KeyObjectAttributes, &FileObjectAttributes, 0x1380u);
          if ( v8 < 0 )
            v8 = ZwLoadKey(&KeyObjectAttributes, &FileObjectAttributes);
          BiReleasePrivilege(&v14);
          if ( v8 < 0 )
          {
            v11 = 2LL;
            if ( v8 != -1073741790 )
              v11 = 4LL;
            LODWORD(v13) = v8;
            BiLogMessage(
              v11,
              L"Failed load key %ws. Flags: 0x%x File: %s Status: %x",
              SourceString,
              576LL,
              a2 + 12,
              v13,
              v14);
          }
          else
          {
            v8 = ZwOpenKey(a3, 0x20019u, &KeyObjectAttributes);
            if ( v8 < 0 )
            {
              BiAcquirePrivilege(17LL, &v14);
              ZwUnloadKey(&KeyObjectAttributes);
              BiReleasePrivilege(&v14);
              LODWORD(v12) = v8;
              BiLogMessage(4LL, L"Failed open newly loaded key %ws. Flags: 0x%x Status: %x", SourceString, 576LL, v12);
            }
          }
        }
      }
    }
    else
    {
      v8 = -1073741809;
    }
    if ( v6 )
      ZwClose(v6);
    if ( v8 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
  }
  return (unsigned int)v8;
}

/*
 * XREFs of BiLoadHive @ 0x140712584
 * Callers:
 *     BiAddStoreFromFile @ 0x1407122BC (BiAddStoreFromFile.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwLoadKey @ 0x1401BA310 (ZwLoadKey.c)
 *     ZwLoadKey2 @ 0x1401BA330 (ZwLoadKey2.c)
 *     ZwUnloadKey @ 0x1401BBAF0 (ZwUnloadKey.c)
 *     BiReleasePrivilege @ 0x140712744 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140712794 (BiAcquirePrivilege.c)
 *     BiLogMessage @ 0x140715354 (BiLogMessage.c)
 *     BiOpenKeyNonBcd @ 0x140715E78 (BiOpenKeyNonBcd.c)
 *     BiDoesHiveExist @ 0x140715F30 (BiDoesHiveExist.c)
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
  HANDLE Handle; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v15[8]; // [rsp+38h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+40h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES FileObjectAttributes; // [rsp+70h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-58h] BYREF
  UNICODE_STRING v19; // [rsp+B0h] [rbp-48h] BYREF

  for ( i = 0; ; ++i )
  {
    v6 = 0LL;
    Handle = 0LL;
    if ( (unsigned __int8)BiDoesHiveExist(a2) )
    {
      v7 = BiOpenKeyNonBcd(0LL, L"\\Registry\\Machine", 983103LL, &Handle);
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
        RtlInitUnicodeString(&v19, (PCWSTR)(a2 + 12));
        FileObjectAttributes.Length = 48;
        FileObjectAttributes.RootDirectory = 0LL;
        FileObjectAttributes.Attributes = 576;
        FileObjectAttributes.ObjectName = &v19;
        *(_OWORD *)&FileObjectAttributes.SecurityDescriptor = 0LL;
        v9 = BiAcquirePrivilege(18LL, v15);
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
          BiReleasePrivilege(v15);
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
              v13);
          }
          else
          {
            v8 = ZwOpenKey(a3, 0x20019u, &KeyObjectAttributes);
            if ( v8 < 0 )
            {
              BiAcquirePrivilege(17LL, v15);
              ZwUnloadKey(&KeyObjectAttributes);
              BiReleasePrivilege(v15);
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

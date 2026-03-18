/*
 * XREFs of ?GrepDwmCreateComposedEvent@@YAJPEAUDwmState@@@Z @ 0x1C00DC460
 * Callers:
 *     GreDwmStartup @ 0x1C00DAF94 (GreDwmStartup.c)
 * Callees:
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x1C00DC2DC (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DF460 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

NTSTATUS __fastcall GrepDwmCreateComposedEvent(wchar_t *a1)
{
  unsigned int v2; // edi
  int v3; // ebx
  unsigned __int16 *v4; // rsi
  unsigned __int64 v5; // r14
  wchar_t *v6; // rsi
  NTSTATUS result; // eax
  void *v8; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-9h] BYREF
  void *EventHandle; // [rsp+C0h] [rbp+67h] BYREF
  void *DirectoryHandle; // [rsp+C8h] [rbp+6Fh] BYREF
  unsigned __int16 *v13; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v14; // [rsp+D8h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DirectoryHandle = 0LL;
  EventHandle = 0LL;
  v2 = ++*(_DWORD *)(gpGdiSharedMemory + 1573020LL);
  v3 = RtlStringCchPrintfExW(a1 + 96, 0x44uLL, &v13, &v14, 0x1000u, L"\\Sessions\\%ld\\BaseNamedObjects", gSessionId);
  if ( v3 < 0
    || (RtlInitUnicodeString(&DestinationString, a1 + 96),
        ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = &DestinationString,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v3 = ZwOpenDirectoryObject(&DirectoryHandle, 0x2000Fu, &ObjectAttributes),
        v3 < 0) )
  {
    v8 = EventHandle;
LABEL_8:
    if ( v8 )
      ObCloseHandle(v8, 0);
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v3;
  }
  else
  {
    v4 = v13;
    v5 = v14;
    *v13 = 92;
    v6 = v4 + 1;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &gComposeEventCompiledSd;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    while ( 1 )
    {
      result = RtlStringCchPrintfW(v6, v5 - 1, L"DwmComposedEvent_%x", v2);
      if ( result < 0 )
        break;
      RtlInitUnicodeString(&DestinationString, v6);
      result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
      v3 = result;
      if ( result != -1073741771 )
      {
        if ( result < 0 )
          return result;
        *(_DWORD *)(gpGdiSharedMemory + 1573020LL) = v2;
        v8 = 0LL;
        *((_QWORD *)a1 + 41) = EventHandle;
        EventHandle = 0LL;
        goto LABEL_8;
      }
      ++v2;
    }
  }
  return result;
}

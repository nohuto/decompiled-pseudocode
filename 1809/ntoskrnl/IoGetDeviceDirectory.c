/*
 * XREFs of IoGetDeviceDirectory @ 0x140825BF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058C238 (RtlStringFromGUIDEx.c)
 *     PnpGetObjectProperty @ 0x14059AEC8 (PnpGetObjectProperty.c)
 *     ExUuidCreate @ 0x1406072C0 (ExUuidCreate.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     _PnpSetObjectProperty @ 0x1406E68C4 (_PnpSetObjectProperty.c)
 *     PiGetStateRootPath @ 0x14070F3E0 (PiGetStateRootPath.c)
 *     PnpConcatenateUnicodeStrings @ 0x140710ADC (PnpConcatenateUnicodeStrings.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14082609C (PiBuildAndOpenDeviceDirectoryPath.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, __int64 *a5)
{
  void *v7; // rsi
  void *v8; // r12
  __int64 v11; // r14
  NTSTATUS StateRootPath; // ebx
  int ObjectProperty; // eax
  unsigned __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rax
  unsigned __int16 v17; // cx
  int v18; // eax
  unsigned __int16 Length; // r8
  int v20; // edx
  wchar_t v21; // ax
  wchar_t *Buffer; // rdi
  int v23; // eax
  __int64 v24; // rax
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  __int64 v27; // [rsp+70h] [rbp-49h] BYREF
  __int64 v28; // [rsp+78h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-39h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-19h] BYREF
  UNICODE_STRING v32; // [rsp+B8h] [rbp-1h] BYREF
  GUID SourceString; // [rsp+C8h] [rbp+Fh] BYREF

  v27 = 0LL;
  LODWORD(v26) = 0;
  *(_QWORD *)&SourceString.Data1 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&GuidString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v32, 0LL);
  if ( !a1
    || a3
    || a4
    || !a5
    || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0
    || !*(_WORD *)(v11 + 40)
    || !*(_QWORD *)(v11 + 48) )
  {
    StateRootPath = -1073741811;
    goto LABEL_47;
  }
  StateRootPath = a2 != 0 ? 0xC000000D : 0;
  if ( !a2 )
  {
    StateRootPath = PiGetStateRootPath(
                      L"DriverState",
                      L"\\SystemRoot\\System32\\DriverState",
                      LocationTypeFileSystem,
                      &DestinationString);
    if ( StateRootPath >= 0 )
    {
      ObjectProperty = PnpGetObjectProperty(
                         0x6F697050u,
                         0x4EuLL,
                         *(_QWORD *)(v11 + 48),
                         1,
                         0LL,
                         0LL,
                         (__int64)&DEVPKEY_Device_StateDirectoryId,
                         (__int64)&v28,
                         (PVOID *)&SourceString,
                         &v26,
                         0);
      v8 = *(void **)&SourceString.Data1;
      StateRootPath = ObjectProperty;
      if ( ObjectProperty >= 0 )
      {
        if ( (_DWORD)v28 == 18 && (unsigned int)v26 >= 2 )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( *(_WORD *)(*(_QWORD *)&SourceString.Data1 + 2 * v14) );
          v15 = 0;
          if ( v14 )
          {
            v16 = 0LL;
            do
            {
              v17 = *(_WORD *)(*(_QWORD *)&SourceString.Data1 + 2 * v16);
              if ( v17 > 0x7Fu || (byte_14035D610[v17] & 1) == 0 )
                goto LABEL_26;
              v16 = ++v15;
            }
            while ( v15 < v14 );
          }
        }
        else
        {
          StateRootPath = -1073741275;
        }
        if ( StateRootPath >= 0 )
        {
          StateRootPath = RtlInitUnicodeStringEx(&v32, *(PCWSTR *)&SourceString.Data1);
          if ( StateRootPath < 0 )
            goto LABEL_47;
          v18 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
LABEL_43:
          StateRootPath = v18;
          if ( v18 >= 0 )
          {
            v7 = 0LL;
            *a5 = v27;
            goto LABEL_47;
          }
          goto LABEL_45;
        }
      }
      if ( StateRootPath != -1073741275 )
        goto LABEL_47;
LABEL_26:
      StateRootPath = PnpConcatenateUnicodeStrings(&UnicodeString, (PCUNICODE_STRING)(v11 + 40));
      if ( StateRootPath >= 0 )
      {
        Length = UnicodeString.Length;
        v20 = 0;
        if ( (UnicodeString.Length & 0xFFFE) != 0 )
        {
          while ( 1 )
          {
            v21 = UnicodeString.Buffer[v20];
            if ( v21 > 0x7Fu )
              break;
            if ( (byte_14035D610[v21] & 1) == 0 )
            {
              UnicodeString.Buffer[v20] = (byte_14035D610[v21] & 1) + 35;
              Length = UnicodeString.Length;
            }
            if ( ++v20 >= (unsigned int)(Length >> 1) )
              goto LABEL_34;
          }
          StateRootPath = -1073741811;
        }
LABEL_34:
        if ( StateRootPath >= 0 )
        {
          Buffer = UnicodeString.Buffer;
          v23 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
          StateRootPath = v23;
          if ( v23 == -1073741766 )
          {
            StateRootPath = ExUuidCreate(&SourceString);
            if ( StateRootPath < 0 )
              goto LABEL_45;
            StateRootPath = RtlStringFromGUIDEx(&SourceString, &GuidString, 1u);
            if ( StateRootPath < 0 )
              goto LABEL_45;
            Buffer = GuidString.Buffer;
            v23 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
            StateRootPath = v23;
          }
          if ( v23 >= 0 )
          {
            v24 = -1LL;
            do
              ++v24;
            while ( Buffer[v24] );
            v18 = PnpSetObjectProperty(
                    *(__int64 *)&PiPnpRtlCtx,
                    *(_QWORD *)(v11 + 48),
                    1u,
                    0LL,
                    0LL,
                    (__int64)&DEVPKEY_Device_StateDirectoryId,
                    18,
                    (__int64)Buffer,
                    2 * (int)v24 + 2,
                    0);
            goto LABEL_43;
          }
LABEL_45:
          v7 = (void *)v27;
        }
      }
    }
  }
LABEL_47:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x6F697050u);
  if ( v7 )
    ZwClose(v7);
  return (unsigned int)StateRootPath;
}

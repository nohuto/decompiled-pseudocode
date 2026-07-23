/*
 * XREFs of IoGetDeviceDirectory @ 0x14085E550
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x1405BC608 (PnpGetObjectProperty.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     ExUuidCreate @ 0x140689DE0 (ExUuidCreate.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     _PnpSetObjectProperty @ 0x1407083D4 (_PnpSetObjectProperty.c)
 *     PnpConcatenateUnicodeStrings @ 0x140733C48 (PnpConcatenateUnicodeStrings.c)
 *     PiGetStateRootPath @ 0x14073C9DC (PiGetStateRootPath.c)
 *     PiBuildAndOpenDeviceDirectoryPath @ 0x14085EA0C (PiBuildAndOpenDeviceDirectoryPath.c)
 */

__int64 __fastcall IoGetDeviceDirectory(__int64 a1, int a2, int a3, __int64 a4, __int64 *a5)
{
  void *v6; // rdi
  WCHAR *v7; // r12
  __int64 v11; // rsi
  NTSTATUS StateRootPath; // ebx
  int ObjectProperty; // eax
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rax
  WCHAR v18; // cx
  int v19; // eax
  unsigned __int16 Length; // r8
  int v21; // edx
  wchar_t v22; // ax
  wchar_t *Buffer; // rdi
  int v24; // eax
  __int64 v26; // [rsp+68h] [rbp-51h] BYREF
  __int64 v27; // [rsp+70h] [rbp-49h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-41h] BYREF
  __int64 v29; // [rsp+88h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+A0h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+B0h] [rbp-9h] BYREF
  UNICODE_STRING v33; // [rsp+B8h] [rbp-1h] BYREF
  UUID Uuid; // [rsp+C8h] [rbp+Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v6 = 0LL;
  v27 = 0LL;
  LODWORD(v26) = 0;
  v7 = 0LL;
  SourceString = 0LL;
  *(_QWORD *)&GuidString.Length = 0LL;
  GuidString.Buffer = 0LL;
  *(_QWORD *)&Uuid.Data1 = 0LL;
  *(_QWORD *)Uuid.Data4 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  *(_QWORD *)&v33.Length = 0LL;
  v33.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&GuidString, 0LL);
  RtlInitUnicodeString(&UnicodeString, 0LL);
  RtlInitUnicodeString(&v33, 0LL);
  if ( !a1
    || a3
    || a4
    || !a5
    || (v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL)) == 0
    || !*(_WORD *)(v11 + 40)
    || !*(_QWORD *)(v11 + 48)
    || a2 )
  {
    StateRootPath = -1073741811;
    goto LABEL_46;
  }
  StateRootPath = PiGetStateRootPath(
                    L"DriverState",
                    L"\\SystemRoot\\System32\\DriverState",
                    LocationTypeFileSystem,
                    &DestinationString);
  if ( StateRootPath < 0 )
    goto LABEL_46;
  ObjectProperty = PnpGetObjectProperty(
                     0x6F697050u,
                     0x4EuLL,
                     *(_QWORD *)(v11 + 48),
                     1,
                     0LL,
                     0LL,
                     (__int64)&DEVPKEY_Device_StateDirectoryId,
                     (__int64)&v29,
                     (PVOID *)&SourceString,
                     &v26,
                     0);
  v7 = (WCHAR *)SourceString;
  v14 = -1LL;
  StateRootPath = ObjectProperty;
  if ( ObjectProperty >= 0 )
  {
    if ( (_DWORD)v29 == 18 && (unsigned int)v26 >= 2 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( SourceString[v15] );
      v16 = 0;
      if ( v15 )
      {
        v17 = 0LL;
        do
        {
          v18 = SourceString[v17];
          if ( v18 > 0x7Fu || (byte_14037CAE0[v18] & 1) == 0 )
            goto LABEL_26;
          v17 = ++v16;
        }
        while ( v16 < v15 );
      }
    }
    else
    {
      StateRootPath = -1073741275;
    }
    if ( StateRootPath >= 0 )
    {
      StateRootPath = RtlInitUnicodeStringEx(&v33, SourceString);
      if ( StateRootPath < 0 )
        goto LABEL_46;
      v19 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
LABEL_42:
      StateRootPath = v19;
      if ( v19 >= 0 )
      {
        v6 = 0LL;
        *a5 = v27;
        goto LABEL_46;
      }
      goto LABEL_44;
    }
  }
  if ( StateRootPath != -1073741275 )
    goto LABEL_46;
LABEL_26:
  StateRootPath = PnpConcatenateUnicodeStrings(&UnicodeString, (PCUNICODE_STRING)(v11 + 40));
  if ( StateRootPath >= 0 )
  {
    Length = UnicodeString.Length;
    v21 = 0;
    if ( (UnicodeString.Length & 0xFFFE) != 0 )
    {
      while ( 1 )
      {
        v22 = UnicodeString.Buffer[v21];
        if ( v22 > 0x7Fu )
          break;
        if ( (byte_14037CAE0[v22] & 1) == 0 )
        {
          UnicodeString.Buffer[v21] = (byte_14037CAE0[v22] & 1) + 35;
          Length = UnicodeString.Length;
        }
        if ( ++v21 >= (unsigned int)(Length >> 1) )
          goto LABEL_34;
      }
      StateRootPath = -1073741811;
    }
LABEL_34:
    if ( StateRootPath >= 0 )
    {
      Buffer = UnicodeString.Buffer;
      v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
      StateRootPath = v24;
      if ( v24 == -1073741766 )
      {
        StateRootPath = ExUuidCreate(&Uuid);
        if ( StateRootPath < 0 )
          goto LABEL_44;
        StateRootPath = RtlStringFromGUIDEx(&Uuid, &GuidString, 1u);
        if ( StateRootPath < 0 )
          goto LABEL_44;
        Buffer = GuidString.Buffer;
        v24 = PiBuildAndOpenDeviceDirectoryPath(&DestinationString, (__int64)&v27);
        StateRootPath = v24;
      }
      if ( v24 >= 0 )
      {
        do
          ++v14;
        while ( Buffer[v14] );
        v19 = PnpSetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(v11 + 48),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_StateDirectoryId,
                18,
                (__int64)Buffer,
                2 * (int)v14 + 2,
                0);
        goto LABEL_42;
      }
LABEL_44:
      v6 = (void *)v27;
    }
  }
LABEL_46:
  RtlFreeAnsiString(&DestinationString);
  RtlFreeAnsiString(&GuidString);
  RtlFreeAnsiString(&UnicodeString);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6F697050u);
  if ( v6 )
    ZwClose(v6);
  return (unsigned int)StateRootPath;
}

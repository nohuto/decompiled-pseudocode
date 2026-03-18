/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C00BA434
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C004FED4 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00B63D8 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rdx
  ULONG64 v5; // r8
  int v6; // edi
  ULONG64 v7; // rsi
  ULONG64 v8; // rcx
  _BYTE **v9; // rax
  int v10; // eax
  size_t *v11; // r8
  size_t *v12; // rcx
  int v14; // [rsp+30h] [rbp-2C8h]
  void *KeyHandle; // [rsp+40h] [rbp-2B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-2B0h] BYREF
  ULONG ResultLength; // [rsp+58h] [rbp-2A0h] BYREF
  size_t *v18; // [rsp+60h] [rbp-298h]
  __int64 v19; // [rsp+68h] [rbp-290h]
  ULONG64 v20; // [rsp+70h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-280h] BYREF
  char KeyValueInformation[4]; // [rsp+B0h] [rbp-248h] BYREF
  int v23; // [rsp+B4h] [rbp-244h]
  int v24; // [rsp+B8h] [rbp-240h]
  unsigned int v25; // [rsp+BCh] [rbp-23Ch]
  WCHAR SourceString[264]; // [rsp+D0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    (size_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v19 = 0LL;
  v20 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1);
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  v5 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v6 = *(_DWORD *)v5;
  v14 = *(_DWORD *)v5;
  LODWORD(v19) = *(_DWORD *)v5;
  v7 = *(_QWORD *)(v5 + 8);
  v20 = v7;
  LOBYTE(ProcessPeb) = 1;
  if ( (v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = v7 + (unsigned __int16)v6 + 2LL;
  v9 = (_BYTE **)MmUserProbeAddress;
  if ( v8 >= MmUserProbeAddress || (unsigned __int16)v6 > HIWORD(v14) )
    goto LABEL_9;
  if ( (v6 & 1) != 0 )
    goto LABEL_10;
  if ( v8 <= v7 )
  {
LABEL_9:
    if ( (v6 & 1) == 0 )
    {
LABEL_11:
      **v9 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, ProcessPeb, v5);
    v9 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_12:
  v10 = (unsigned __int16)v6;
  v11 = (size_t *)(v7 + (unsigned __int16)v6);
  v18 = v11;
  while ( v10 )
  {
    v12 = (size_t *)((char *)v11 - 2);
    if ( *((_WORD *)v11 - 1) == 92 )
      break;
    v11 = (size_t *)((char *)v11 - 2);
    v18 = v12;
    v10 -= 2;
  }
  if ( (int)RtlStringCchCatW(SourceString, 260LL, v11) >= 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v23 == 4
        && v24 == 4 )
      {
        v0 = v25;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}

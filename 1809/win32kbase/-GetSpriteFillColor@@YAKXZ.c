/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C00A9084
 * Callers:
 *     xxxInitProcessInfo @ 0x1C009B0FC (xxxInitProcessInfo.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0013C98 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RtlStringCchCatW @ 0x1C00A9314 (RtlStringCchCatW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  __int64 CurrentProcess; // rax
  size_t ProcessPeb; // rdx
  ULONG64 v4; // r8
  int v5; // edi
  ULONG64 v6; // rsi
  ULONG64 v7; // rcx
  _BYTE **v8; // rax
  int v9; // eax
  const wchar_t *v10; // r8
  const wchar_t *v11; // rcx
  int v13; // [rsp+30h] [rbp-2C8h]
  void *KeyHandle; // [rsp+40h] [rbp-2B8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-2B0h] BYREF
  const wchar_t *v16; // [rsp+50h] [rbp-2A8h]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-2A0h] BYREF
  int v18; // [rsp+70h] [rbp-288h]
  ULONG64 v19; // [rsp+78h] [rbp-280h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-278h] BYREF
  char KeyValueInformation[4]; // [rsp+B0h] [rbp-248h] BYREF
  int v22; // [rsp+B4h] [rbp-244h]
  int v23; // [rsp+B8h] [rbp-240h]
  unsigned int v24; // [rsp+BCh] [rbp-23Ch]
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    pszDest,
    0x104uLL,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  CurrentProcess = PsGetCurrentProcess(v1);
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  v4 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v4 >= MmUserProbeAddress )
    v4 = MmUserProbeAddress;
  v5 = *(_DWORD *)v4;
  v13 = *(_DWORD *)v4;
  v18 = *(_DWORD *)v4;
  v6 = *(_QWORD *)(v4 + 8);
  v19 = v6;
  LOBYTE(ProcessPeb) = 1;
  if ( (v6 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = v6 + (unsigned __int16)v5 + 2LL;
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 >= MmUserProbeAddress || (unsigned __int16)v5 > HIWORD(v13) )
    goto LABEL_9;
  if ( (v5 & 1) != 0 )
    goto LABEL_10;
  if ( v7 <= v6 )
  {
LABEL_9:
    if ( (v5 & 1) == 0 )
    {
LABEL_11:
      **v8 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, ProcessPeb, v4);
    v8 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_12:
  v9 = (unsigned __int16)v5;
  v10 = (const wchar_t *)(v6 + (unsigned __int16)v5);
  v16 = v10;
  while ( v9 )
  {
    v11 = v10 - 1;
    if ( *(v10 - 1) == 92 )
      break;
    --v10;
    v16 = v11;
    v9 -= 2;
  }
  if ( RtlStringCchCatW(pszDest, ProcessPeb, v10) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, pszDest);
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
        && v22 == 4
        && v23 == 4 )
      {
        v0 = v24;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}

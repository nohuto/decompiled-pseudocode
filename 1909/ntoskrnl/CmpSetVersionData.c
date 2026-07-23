/*
 * XREFs of CmpSetVersionData @ 0x140762F6C
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140762500 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 *     RtlInitAnsiString @ 0x1400EA030 (RtlInitAnsiString.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     sprintf_s @ 0x1401A65D0 (sprintf_s.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwCreateKey @ 0x1401C0FF0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1401C1850 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x1401C2690 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsWow64IsMachineSupported @ 0x1405C9DE0 (PsWow64IsMachineSupported.c)
 *     RtlAnsiStringToUnicodeString @ 0x14063FB50 (RtlAnsiStringToUnicodeString.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14076351C (CmpHiveRootSecurityDescriptor.c)
 */

void CmpSetVersionData()
{
  wchar_t **v0; // rdi
  ULONG v1; // edx
  void *v2; // rsi
  __int16 v3; // cx
  const WCHAR *v4; // rdx
  NTSTATUS v5; // ebx
  HANDLE v6; // rax
  NTSTATUS v7; // ebx
  NTSTATUS v8; // ebx
  ULONG v9; // edx
  __int64 HostSilo; // rax
  PVOID *ServerSiloGlobals; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  __int64 Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING v14; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _STRING SourceString; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v20[256]; // [rsp+148h] [rbp+40h] BYREF

  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v0 = &VersionDataKeys;
  v2 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    do
    {
      v3 = *((_WORD *)v0 + 8);
      if ( v3 == -31132 || (unsigned int)PsWow64IsMachineSupported(v3) )
      {
        RtlInitUnicodeString(&DestinationString, *v0);
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = v2;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        if ( ZwCreateKey(&KeyHandle, 4u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL) < 0 )
          goto LABEL_28;
        v4 = v0[1];
        if ( v4 )
        {
          RtlInitUnicodeString(&DestinationString, v4);
          ObjectAttributes.RootDirectory = KeyHandle;
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.SecurityDescriptor = v2;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          v5 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
          ZwClose(KeyHandle);
          if ( v5 < 0 )
            goto LABEL_28;
          v6 = Handle;
          KeyHandle = Handle;
        }
        else
        {
          v6 = KeyHandle;
        }
        ObjectAttributes.RootDirectory = v6;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpWindowsNtString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v2;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v7 = ZwCreateKey(&Handle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(KeyHandle);
        if ( v7 < 0 )
          goto LABEL_28;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&CmpCurrentVersionString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v2;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        v8 = ZwCreateKey(&KeyHandle, 2u, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
        ZwClose(Handle);
        if ( v8 < 0 )
          goto LABEL_28;
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpCurrentVersionString,
          0,
          1u,
          CmVersionString.Buffer,
          CmVersionString.Length + 2);
        LODWORD(Data) = 10;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
        LODWORD(Data) = 0;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
        LODWORD(Data) = 0;
        sprintf_s(DstBuf, 0x80uLL, "%u", 18363 - (KernelVersionBump != 1));
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v14.Length = 0x1000000;
        v14.Buffer = (wchar_t *)v20;
        if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) >= 0 )
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentBuildNumberString, 0, 1u, v14.Buffer, v14.Length + 2);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&v14.Length = 0x1000000;
        v14.Buffer = (wchar_t *)v20;
        if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, v14.Buffer, v14.Length + 2);
          if ( CmCSDVersionString.Length )
          {
            ZwSetValueKey(
              KeyHandle,
              (PUNICODE_STRING)&CmpCsdVersionString,
              0,
              1u,
              CmCSDVersionString.Buffer,
              CmCSDVersionString.Length + 2);
            if ( CmCSDVersionString.Buffer )
              ExFreePoolWithTag(CmCSDVersionString.Buffer, v9);
            RtlInitUnicodeString(&CmCSDVersionString, 0LL);
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
          }
        }
        if ( CmNtSpBuildNumber )
        {
          sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
          RtlInitAnsiString(&SourceString, DstBuf);
          *(_DWORD *)&v14.Length = 0x1000000;
          v14.Buffer = (wchar_t *)v20;
          if ( RtlAnsiStringToUnicodeString(&v14, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, v14.Buffer, v14.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
        }
        HostSilo = PsGetHostSilo();
        ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(HostSilo);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpSystemRootString,
          0,
          1u,
          ServerSiloGlobals[132],
          *((unsigned __int16 *)ServerSiloGlobals + 524) + 2);
        ZwClose(KeyHandle);
      }
      v0 += 3;
    }
    while ( *v0 );
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePoolWithTag(CmCSDVersionString.Buffer, v1);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_28:
  ExFreePoolWithTag(v2, 0);
}

/*
 * XREFs of NtEnableLastKnownGood @ 0x1406990D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwDeleteFile @ 0x1401C1A90 (ZwDeleteFile.c)
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1405C37DC (_PnpCtxGetCachedContextBaseKey.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140698EAC (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

NTSTATUS NtEnableLastKnownGood(void)
{
  NTSTATUS CachedContextBaseKey; // ebx
  char v1; // bl
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-89h] BYREF
  OBJECT_ATTRIBUTES v4; // [rsp+30h] [rbp-79h] BYREF
  UNICODE_STRING SourceString; // [rsp+60h] [rbp-49h] BYREF
  UNICODE_STRING v6; // [rsp+70h] [rbp-39h] BYREF
  PVOID P; // [rsp+80h] [rbp-29h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  UNICODE_STRING v9; // [rsp+98h] [rbp-11h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  HANDLE KeyHandle; // [rsp+110h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE v13; // [rsp+120h] [rbp+77h] BYREF
  void *v14; // [rsp+128h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&SourceString.Length = 0LL;
  SourceString.Buffer = 0LL;
  *(_QWORD *)&v9.Length = 0LL;
  v9.Buffer = 0LL;
  *(_QWORD *)&v6.Length = 0LL;
  v6.Buffer = 0LL;
  memset(&v4, 0, sizeof(v4));
  KeyHandle = 0LL;
  Handle = 0LL;
  v13 = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
  {
    CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, 4, (__int64)&v14);
    if ( CachedContextBaseKey >= 0 )
    {
      *(&ObjectAttributes.Length + 1) = 0;
      memset(&ObjectAttributes.Attributes + 1, 0, 20);
      KeyHandle = 0LL;
      ValueName.Buffer = (wchar_t *)L"Control\\Pnp";
      ObjectAttributes.RootDirectory = v14;
      ObjectAttributes.ObjectName = &ValueName;
      *(_DWORD *)&ValueName.Length = 1572886;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      CachedContextBaseKey = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
      if ( CachedContextBaseKey >= 0 )
      {
        v1 = 0;
        if ( (int)IopGetRegistryValue(KeyHandle) < 0 )
          goto LABEL_25;
        if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) == 4 )
          v1 = *((_BYTE *)P + *((unsigned int *)P + 2));
        ExFreePoolWithTag(P, 0);
        if ( v1 )
        {
          *(_DWORD *)&ValueName.Length = 1441812;
          ValueName.Buffer = L"DisableLKG";
          CachedContextBaseKey = ZwDeleteValueKey(KeyHandle, &ValueName);
          if ( CachedContextBaseKey >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood");
            v4.RootDirectory = 0LL;
            v4.ObjectName = &DestinationString;
            v4.Length = 48;
            v4.Attributes = 576;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&Handle, 0xF003Fu, &v4) >= 0 )
              ZwDeleteKey(Handle);
            RtlInitUnicodeString(&v9, L"\\Registry\\Machine\\System\\LastKnownGoodRecovery\\LastGood.Tmp");
            v4.RootDirectory = 0LL;
            v4.ObjectName = &v9;
            v4.Length = 48;
            v4.Attributes = 576;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            if ( ZwOpenKey(&v13, 0xF003Fu, &v4) >= 0 )
              ZwDeleteKey(v13);
            RtlInitUnicodeString(&SourceString, L"\\SystemRoot\\LastGood");
            IopFileUtilWalkDirectoryTreeBottomUp(&SourceString);
            v4.RootDirectory = 0LL;
            v4.ObjectName = &SourceString;
            v4.Length = 48;
            v4.Attributes = 64;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            ZwDeleteFile(&v4);
            RtlInitUnicodeString(&v6, L"\\SystemRoot\\LastGood.Tmp");
            IopFileUtilWalkDirectoryTreeBottomUp(&v6);
            v4.RootDirectory = 0LL;
            v4.ObjectName = &v6;
            v4.Length = 48;
            *(_OWORD *)&v4.SecurityDescriptor = 0LL;
            v4.Attributes = 64;
            ZwDeleteFile(&v4);
            CachedContextBaseKey = 0;
          }
        }
        else
        {
LABEL_25:
          CachedContextBaseKey = -1073741823;
        }
      }
    }
  }
  else
  {
    CachedContextBaseKey = -1073741727;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v13 )
    ZwClose(v13);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return CachedContextBaseKey;
}

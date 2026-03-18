/*
 * XREFs of CmpOpenSystemDriverHiveContext @ 0x140A11A10
 * Callers:
 *     CmGetSystemDriverList @ 0x140A11BA0 (CmGetSystemDriverList.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     RtlAppendUnicodeStringToString @ 0x1400E7910 (RtlAppendUnicodeStringToString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x1405FE0E0 (CmObReferenceObjectByHandle.c)
 *     RtlCreateUnicodeString @ 0x140667B10 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall CmpOpenSystemDriverHiveContext(PCUNICODE_STRING Source, __int64 a2)
{
  __int16 v4; // ax
  void *v5; // rdi
  int appended; // ebx
  __int64 v7; // r8
  UNICODE_STRING Destination; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v12; // [rsp+B0h] [rbp+40h] BYREF

  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v4 = Source->Length + 4;
  v12 = 0LL;
  v5 = 0LL;
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(CmRegistryMachineName.Length + v4);
  KeyHandle = 0LL;
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                    PagedPool,
                                    (unsigned __int16)(CmRegistryMachineName.Length + v4),
                                    0x20204D43u);
  if ( Destination.Buffer )
  {
    appended = RtlAppendUnicodeStringToString(&Destination, &CmRegistryMachineName);
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeToString(&Destination, L"\\");
      if ( appended >= 0 )
      {
        appended = RtlAppendUnicodeStringToString(&Destination, Source);
        if ( appended >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = &Destination;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          appended = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
          if ( appended >= 0 )
          {
            appended = CmObReferenceObjectByHandle(KeyHandle, 1u, v7, 0, &v12, 0LL);
            if ( appended >= 0 )
            {
              if ( RtlCreateUnicodeString((PUNICODE_STRING)(a2 + 16), Source->Buffer) )
              {
                *(_QWORD *)(a2 + 32) = KeyHandle;
                *(_QWORD *)(a2 + 40) = v12;
                KeyHandle = 0LL;
                goto LABEL_9;
              }
              appended = -1073741801;
            }
            v5 = (void *)v12;
          }
        }
      }
    }
  }
  else
  {
    appended = -1073741801;
  }
LABEL_9:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v5 )
    ObfDereferenceObjectWithTag(v5, 0x746C6644u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)appended;
}

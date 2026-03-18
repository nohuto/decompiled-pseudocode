/*
 * XREFs of EmInitSystem @ 0x1409F94D0
 * Callers:
 *     Phase1InitializationIoReady @ 0x1409FE82C (Phase1InitializationIoReady.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401C0190 (ZwReadFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x1401C0330 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1401C0390 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x1401C0470 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x1401C0B70 (ZwCreateFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlAppendStringToString @ 0x14071B640 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x140757020 (EmpProviderRegister.c)
 *     EmpCacheBiosDate @ 0x1409F9810 (EmpCacheBiosDate.c)
 *     EmpParseInfDatabase @ 0x1409F9A64 (EmpParseInfDatabase.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // r14
  WCHAR *v5; // rdi
  int v6; // ebx
  NTSTATUS Key; // eax
  ULONG v8; // r15d
  ULONG v9; // r13d
  ULONG i; // edx
  __int64 v12; // rax
  __int64 v13; // rcx
  ULONG v14; // r12d
  PVOID v15; // rax
  PVOID v16; // rsi
  void *v17; // rcx
  ULONG ResultLength[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  STRING Destination; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-58h] BYREF
  __int64 FileInformation; // [rsp+E0h] [rbp-28h] BYREF
  SIZE_T NumberOfBytes; // [rsp+E8h] [rbp-20h]
  __int64 v27; // [rsp+F0h] [rbp-18h]
  char v28; // [rsp+F8h] [rbp-10h] BYREF

  FileInformation = 0LL;
  NumberOfBytes = 0LL;
  v27 = 0LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *(_QWORD *)&DestinationString.Length = 0LL;
  PoolWithTag = 0LL;
  DestinationString.Buffer = 0LL;
  v5 = 0LL;
  KeyHandle = (HANDLE)-1LL;
  Handle = (HANDLE)-1LL;
  if ( !a1 )
  {
    dword_1404634A8 |= 0x80000000;
    EmpRuleUpdateWorker.WorkerRoutine = (void (__fastcall *)(void *))EmpRuleUpdateWorkerThread;
    EmpParseLock = 0LL;
    EmpDatabaseLock = 0LL;
    EmpEvaluationQueueLock = 0LL;
    EmpPagingLock = 0LL;
    EmpEntryListHead = 0LL;
    EmpCallbackListHead = 0LL;
    EmpRuleListHead = 0LL;
    EmpTargetRuleListHead = 0LL;
    EmpRuleUpdateQueue = 0LL;
    EmpWorkerBusy = 0;
    EmpRuleUpdateWorker.Parameter = 0LL;
    EmpRuleUpdateWorker.List.Flink = 0LL;
    v12 = *(_QWORD *)(a2 + 240);
    EmpStringTable = 0LL;
    EmpNumberOfEntryTypes = 0;
    EmpNumberOfCallbacks = 0;
    v13 = *(_QWORD *)(v12 + 24);
    EmpNumberOfRules = 0;
    EmpNumberOfStrings = 0;
    EmpNumberOfTargetRules = 0;
    if ( v13 )
    {
      if ( *(_DWORD *)(v12 + 32) )
      {
        v6 = ((__int64 (*)(void))EmpParseInfDatabase)();
        if ( v6 < 0 )
          goto LABEL_11;
      }
    }
    EmpCacheBiosDate();
    HalRegisterErrataCallbacks();
    v6 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&BuiltinCallbackReg, 6u, &EmBuiltinProviderHandle);
    if ( v6 < 0 )
      goto LABEL_11;
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  if ( a1 != 1 )
    goto LABEL_10;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Errata\\Dynamic");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v6 < 0 )
    goto LABEL_11;
  ResultLength[0] = 0;
  Key = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, ResultLength);
  v6 = Key;
  if ( Key == -1073741789 || Key == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x74694D45u);
    if ( !PoolWithTag )
      goto LABEL_29;
    v6 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, ResultLength[0], ResultLength);
    if ( v6 < 0 )
      goto LABEL_11;
    v8 = PoolWithTag[10] + 16;
    v5 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v8, 0x74694D45u);
    if ( !v5 )
    {
LABEL_29:
      v6 = -1073741670;
      goto LABEL_11;
    }
    v9 = 0;
    for ( i = 0; ; i = v9 )
    {
      v6 = ZwEnumerateValueKey(KeyHandle, i, KeyValuePartialInformation, v5, v8, ResultLength);
      if ( v6 == -2147483622 )
        break;
      if ( v6 < 0 )
        goto LABEL_11;
      *(_DWORD *)&Destination.Length = 0x1000000;
      Destination.Buffer = &v28;
      RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\inf\\");
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      *((_BYTE *)v5 + *((unsigned int *)v5 + 2) + 12) = 0;
      RtlInitUnicodeString(&DestinationString, v5 + 6);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v6 = ZwCreateFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x20u, 0LL, 0);
      if ( v6 < 0 )
        goto LABEL_11;
      v6 = ZwQueryInformationFile(Handle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
      if ( v6 < 0 )
      {
        ZwClose(Handle);
        goto LABEL_11;
      }
      if ( HIDWORD(NumberOfBytes) )
      {
        ZwClose(Handle);
        goto LABEL_27;
      }
      v14 = NumberOfBytes;
      v15 = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x74694D45u);
      v16 = v15;
      if ( !v15 )
      {
        ZwClose(Handle);
        goto LABEL_29;
      }
      v6 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v15, v14, 0LL, 0LL);
      ZwClose(Handle);
      v17 = v16;
      if ( v6 < 0 )
        goto LABEL_39;
      v6 = EmpParseInfDatabase(v16, v14);
      if ( v6 < 0 )
      {
        v17 = v16;
LABEL_39:
        ExFreePoolWithTag(v17, 0x74694D45u);
        goto LABEL_11;
      }
      ++v9;
    }
    goto LABEL_10;
  }
  if ( !Key )
LABEL_27:
    v6 = -1073741823;
LABEL_11:
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74694D45u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x74694D45u);
  return (unsigned int)v6;
}

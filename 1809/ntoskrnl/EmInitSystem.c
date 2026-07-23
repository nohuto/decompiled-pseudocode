/*
 * XREFs of EmInitSystem @ 0x1409BE7E0
 * Callers:
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x1409C5788 (Phase1InitializationIoReady.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwEnumerateValueKey @ 0x1401B8550 (ZwEnumerateValueKey.c)
 *     ZwQueryKey @ 0x1401B85B0 (ZwQueryKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     ZwCreateFile @ 0x1401B8D90 (ZwCreateFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAppendStringToString @ 0x1406CC680 (RtlAppendStringToString.c)
 *     EmpProviderRegister @ 0x14072DCE0 (EmpProviderRegister.c)
 *     EmpCacheBiosDate @ 0x1409BEAE4 (EmpCacheBiosDate.c)
 *     EmpParseInfDatabase @ 0x1409BED1C (EmpParseInfDatabase.c)
 */

__int64 __fastcall EmInitSystem(int a1, __int64 a2)
{
  _DWORD *PoolWithTag; // rsi
  WCHAR *v3; // rdi
  int v4; // ebx
  NTSTATUS Key; // eax
  ULONG v6; // r15d
  ULONG v7; // r13d
  NTSTATUS i; // eax
  __int64 v10; // rax
  __int64 v11; // rcx
  ULONG v12; // r12d
  PVOID v13; // rax
  PVOID v14; // r14
  void *v15; // rcx
  ULONG ResultLength[2]; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp-98h] BYREF
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-88h] BYREF
  STRING Destination; // [rsp+90h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+E0h] [rbp-28h] BYREF
  ULONG NumberOfBytes; // [rsp+E8h] [rbp-20h]
  int NumberOfBytes_4; // [rsp+ECh] [rbp-1Ch]
  char v26; // [rsp+F8h] [rbp-10h] BYREF

  KeyHandle = (HANDLE)-1LL;
  PoolWithTag = 0LL;
  Handle = (HANDLE)-1LL;
  v3 = 0LL;
  if ( !a1 )
  {
    dword_140438928 |= 0x80000000;
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
    v10 = *(_QWORD *)(a2 + 240);
    EmpStringTable = 0LL;
    EmpNumberOfEntryTypes = 0;
    EmpNumberOfCallbacks = 0;
    v11 = *(_QWORD *)(v10 + 24);
    EmpNumberOfRules = 0;
    EmpNumberOfStrings = 0;
    EmpNumberOfTargetRules = 0;
    if ( v11 )
    {
      if ( *(_DWORD *)(v10 + 32) )
      {
        v4 = ((__int64 (*)(void))EmpParseInfDatabase)();
        if ( v4 < 0 )
          goto LABEL_11;
      }
    }
    EmpCacheBiosDate();
    HalRegisterErrataCallbacks();
    v4 = EmpProviderRegister(0LL, 0LL, 0, (__int64)&BuiltinCallbackReg, 6u, &EmBuiltinProviderHandle);
    if ( v4 < 0 )
      goto LABEL_11;
LABEL_10:
    v4 = 0;
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
  v4 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v4 < 0 )
    goto LABEL_11;
  ResultLength[0] = 0;
  Key = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, ResultLength);
  v4 = Key;
  if ( Key == -1073741789 || Key == -2147483643 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ResultLength[0], 0x74694D45u);
    if ( !PoolWithTag )
      goto LABEL_29;
    v4 = ZwQueryKey(KeyHandle, KeyFullInformation, PoolWithTag, ResultLength[0], ResultLength);
    if ( v4 < 0 )
      goto LABEL_11;
    v6 = PoolWithTag[10] + 16;
    v3 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v6, 0x74694D45u);
    if ( !v3 )
    {
LABEL_29:
      v4 = -1073741670;
      goto LABEL_11;
    }
    v7 = 0;
    for ( i = ZwEnumerateValueKey(KeyHandle, 0, KeyValuePartialInformation, v3, v6, ResultLength);
          ;
          i = ZwEnumerateValueKey(KeyHandle, v7, KeyValuePartialInformation, v3, v6, ResultLength) )
    {
      v4 = i;
      if ( i == -2147483622 )
        break;
      if ( i < 0 )
        goto LABEL_11;
      *(_DWORD *)&Destination.Length = 0x1000000;
      Destination.Buffer = &v26;
      RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\inf\\");
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      *((_BYTE *)v3 + *((unsigned int *)v3 + 2) + 12) = 0;
      RtlInitUnicodeString(&DestinationString, v3 + 6);
      RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&Destination;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v4 = ZwCreateFile(&Handle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x20u, 0LL, 0);
      if ( v4 < 0 )
        goto LABEL_11;
      v4 = ZwQueryInformationFile(Handle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
      if ( v4 < 0 )
      {
        ZwClose(Handle);
        goto LABEL_11;
      }
      if ( NumberOfBytes_4 )
      {
        ZwClose(Handle);
        goto LABEL_27;
      }
      v12 = NumberOfBytes;
      v13 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x74694D45u);
      v14 = v13;
      if ( !v13 )
      {
        ZwClose(Handle);
        goto LABEL_29;
      }
      v4 = ZwReadFile(Handle, 0LL, 0LL, 0LL, &IoStatusBlock, v13, v12, 0LL, 0LL);
      ZwClose(Handle);
      v15 = v14;
      if ( v4 < 0 )
        goto LABEL_39;
      v4 = EmpParseInfDatabase(v14, v12);
      if ( v4 < 0 )
      {
        v15 = v14;
LABEL_39:
        ExFreePoolWithTag(v15, 0x74694D45u);
        goto LABEL_11;
      }
      ++v7;
    }
    goto LABEL_10;
  }
  if ( !Key )
LABEL_27:
    v4 = -1073741823;
LABEL_11:
  if ( KeyHandle != (HANDLE)-1LL )
    ZwClose(KeyHandle);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74694D45u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74694D45u);
  return (unsigned int)v4;
}

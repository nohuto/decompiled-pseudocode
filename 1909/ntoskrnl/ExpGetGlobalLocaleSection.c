/*
 * XREFs of ExpGetGlobalLocaleSection @ 0x1406D35B8
 * Callers:
 *     NtInitializeNlsFiles @ 0x1406D3450 (NtInitializeNlsFiles.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     RtlStringCchCatW @ 0x140154958 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     ZwOpenFile @ 0x1401C12B0 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpGetGlobalLocaleSection(_QWORD *a1)
{
  PVOID v2; // rdi
  int v3; // r15d
  NTSTATUS result; // eax
  HANDLE v5; // rax
  NTSTATUS v6; // ebx
  struct _KTHREAD *CurrentThread; // r14
  PVOID v8; // rbx
  PVOID v9; // rbx
  char v10; // si
  const wchar_t *v11; // r8
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  wchar_t v14; // ax
  wchar_t *v15; // rax
  NTSTATUS v16; // eax
  HANDLE v17; // rcx
  HANDLE FileHandle; // [rsp+48h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-88h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-78h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+C0h] [rbp-48h] BYREF
  int v27; // [rsp+C4h] [rbp-44h]
  int v28; // [rsp+C8h] [rbp-40h]
  int v29; // [rsp+CCh] [rbp-3Ch]
  wchar_t pszDest[264]; // [rsp+D8h] [rbp-30h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v2 = NlsLocaleSectionPointer;
  IoStatusBlock.Pointer = 0LL;
  v3 = 0;
  IoStatusBlock.Information = 0LL;
  FileHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( (unsigned __int64)NlsLocaleSectionPointer > 1 )
  {
    ObfReferenceObject(NlsLocaleSectionPointer);
LABEL_3:
    *a1 = v2;
    return 0;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"ln";
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&NlsTableVersionKeyName,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v27 == 4
      && v28 == 4 )
    {
      v3 = v29;
      v11 = 0LL;
      if ( v29 == 5243136 )
        v11 = L"loc2008.nls";
      if ( v11 )
      {
        v12 = 260LL;
        v13 = pszDest;
        do
        {
          if ( v12 == -2147483386 )
            break;
          v14 = *(wchar_t *)((char *)v13 + (char *)L"\\SystemRoot\\System32\\" - (char *)pszDest);
          if ( !v14 )
            break;
          *v13++ = v14;
          --v12;
        }
        while ( v12 );
        v15 = v13 - 1;
        if ( v12 )
          v15 = v13;
        *v15 = 0;
        if ( v12 && RtlStringCchCatW(pszDest, 0x104uLL, v11) >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, pszDest);
          ObjectAttributes.ObjectName = &DestinationString;
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v16 = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
          v17 = FileHandle;
          if ( v16 < 0 )
            v17 = 0LL;
          FileHandle = v17;
        }
      }
    }
    ZwClose(KeyHandle);
  }
  v5 = FileHandle;
  if ( FileHandle )
  {
LABEL_11:
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, v5);
    ZwClose(FileHandle);
    if ( v6 < 0 )
      return v6;
    v6 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
    v2 = Object;
    ZwClose(SectionHandle);
    if ( v6 < 0 )
      return v6;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&NlsSectionLock, 0LL);
    v8 = NlsLocaleSectionPointer;
    if ( NlsLocaleSectionPointer == (PVOID)1 )
    {
      v9 = Object;
      NlsTableVersion = v3;
      ObfReferenceObject(Object);
      NlsLocaleSectionPointer = v9;
    }
    else if ( NlsLocaleSectionPointer )
    {
      ObfDereferenceObject(Object);
      v2 = v8;
      ObfReferenceObject(v8);
    }
    v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&NlsSectionLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&NlsSectionLock);
    KeAbPostRelease((ULONG_PTR)&NlsSectionLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_3;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L">@";
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100000u, &ObjectAttributes, &IoStatusBlock, 1u, 0);
  if ( result >= 0 )
  {
    v5 = FileHandle;
    v3 = 263424;
    goto LABEL_11;
  }
  return result;
}

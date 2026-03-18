/*
 * XREFs of CMFSystemThreadRoutine @ 0x1409167B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     RtlStringCchPrintfW @ 0x140087CC8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 *     ZwReadFile @ 0x1401C0190 (ZwReadFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C05D0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C0610 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwCreateEvent @ 0x1401C09D0 (ZwCreateEvent.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     CMFCreateSecurityDescriptor @ 0x140915890 (CMFCreateSecurityDescriptor.c)
 *     CMFGetFileSizeEx @ 0x140916198 (CMFGetFileSizeEx.c)
 *     CMFGetLargePageSectionSize @ 0x140916214 (CMFGetLargePageSectionSize.c)
 *     CMFReadCompressedSegment @ 0x1409162CC (CMFReadCompressedSegment.c)
 */

void __fastcall CMFSystemThreadRoutine(int *StartContext)
{
  PVOID v2; // r12
  PVOID v3; // r13
  __int64 *PoolWithTag; // r15
  int v5; // eax
  char *v6; // rax
  const wchar_t *v7; // r8
  ULONG Length; // r14d
  int v9; // ebx
  __int64 *v10; // r12
  NTSTATUS v11; // eax
  bool v12; // sf
  int v13; // ebx
  ULONG_PTR LowPart; // r14
  LARGE_INTEGER *p_MaximumSize; // r12
  int v16; // eax
  HANDLE v17; // r12
  int v18; // eax
  NTSTATUS v19; // eax
  _QWORD *v20; // rax
  struct _KEVENT *v21; // rcx
  ULONG Buffer; // [rsp+30h] [rbp-D8h]
  char v23; // [rsp+58h] [rbp-B0h]
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A8h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-A0h] BYREF
  void *v26; // [rsp+70h] [rbp-98h]
  HANDLE FileHandle; // [rsp+78h] [rbp-90h] BYREF
  HANDLE v28; // [rsp+80h] [rbp-88h]
  HANDLE EventHandle; // [rsp+88h] [rbp-80h] BYREF
  HANDLE SectionHandle; // [rsp+90h] [rbp-78h] BYREF
  PVOID Object; // [rsp+98h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR ViewSize; // [rsp+D8h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+E0h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v37; // [rsp+100h] [rbp-8h] BYREF
  wchar_t pszDest[264]; // [rsp+108h] [rbp+0h] BYREF

  v33 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  MaximumSize.QuadPart = 0LL;
  v37 = 0LL;
  v2 = 0LL;
  EventHandle = 0LL;
  v3 = 0LL;
  FileHandle = 0LL;
  PoolWithTag = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v23 = 0;
  v26 = 0LL;
  Object = 0LL;
  if ( !StartContext )
    return;
  v5 = StartContext[12];
  if ( v5 == 16 )
  {
    v6 = "RESCDIR";
    v7 = L"%s\\rc%04u\\rescache.dir";
LABEL_10:
    v28 = v6;
    Length = 8;
    v10 = &v37;
    v11 = RtlStringCchPrintfW(pszDest, 0x104uLL, v7, L"\\SystemRoot\\Rescache", StartContext[1]);
LABEL_11:
    v9 = v11;
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
LABEL_14:
      v2 = 0LL;
      goto LABEL_61;
    }
    RtlInitUnicodeString(&DestinationString, pszDest);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 7u, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
    {
      FileHandle = 0LL;
      goto LABEL_14;
    }
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v9 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
    if ( (v9 & 0xC0000000) == 0xC0000000 )
      goto LABEL_14;
    v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, v10, Length, &MaximumSize, 0LL);
    if ( v9 < 0 )
      goto LABEL_14;
    v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
    v12 = v9 < 0;
    if ( v9 )
    {
      v2 = 0LL;
      goto LABEL_19;
    }
    if ( *v10 != *(_QWORD *)v28 )
    {
      v9 = -1073700864;
      v2 = 0LL;
      goto LABEL_61;
    }
    v13 = StartContext[12];
    if ( v13 == 32 && *((_DWORD *)PoolWithTag + 19) )
    {
      StartContext[6] |= 4u;
      v23 = 1;
      *((_BYTE *)StartContext + 12) = 1;
    }
    LowPart = 0LL;
    p_MaximumSize = 0LL;
    v28 = FileHandle;
    if ( *((_BYTE *)StartContext + 12) )
    {
      v28 = 0LL;
      MaximumSize.QuadPart = 0LL;
      if ( v13 == 16 || v13 == 256 )
      {
        v9 = CMFGetFileSizeEx(FileHandle, &MaximumSize);
        if ( (v9 & 0xC0000000) == 0xC0000000 )
          goto LABEL_14;
        LowPart = MaximumSize.LowPart;
        v13 = StartContext[12];
      }
      else
      {
        LowPart = *((unsigned int *)PoolWithTag + 8);
        MaximumSize.LowPart = *((_DWORD *)PoolWithTag + 8);
      }
      if ( (int)CMFGetLargePageSectionSize((__int64 *)&MaximumSize, (__int64)&v33) < 0 || *StartContext >= 0 )
      {
        *StartContext &= ~0x80000000;
        p_MaximumSize = &MaximumSize;
        ViewSize = LowPart;
      }
      else
      {
        p_MaximumSize = (LARGE_INTEGER *)&v33;
        ViewSize = (unsigned int)v33;
      }
    }
    if ( v13 == 256
      || (v16 = CMFCreateSecurityDescriptor(&Object, 0LL), v3 = Object, v9 = v16, (v16 & 0xC0000000) != 0xC0000000) )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      Buffer = *StartContext;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = v3;
      v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, p_MaximumSize, 4u, Buffer, v28);
      if ( v9 >= 0 )
      {
LABEL_43:
        v19 = ObReferenceObjectByHandle(SectionHandle, 0xF001Fu, MmSectionObjectType, 0, &Object, 0LL);
        v2 = Object;
        v9 = v19;
        if ( (v19 & 0xC0000000) == 0xC0000000 )
        {
          v2 = 0LL;
          goto LABEL_61;
        }
        if ( *((_BYTE *)StartContext + 12) )
        {
          BaseAddress = 0LL;
          MaximumSize.QuadPart = 0LL;
          v9 = ZwMapViewOfSection(
                 SectionHandle,
                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                 &BaseAddress,
                 0LL,
                 0LL,
                 &MaximumSize,
                 &ViewSize,
                 ViewUnmap,
                 0x400000u,
                 4u);
          if ( (v9 & 0xC0000000) == 0xC0000000 )
          {
            BaseAddress = 0LL;
            goto LABEL_61;
          }
          if ( v23 )
          {
            *((_DWORD *)PoolWithTag + 19) = 0;
            v9 = CMFReadCompressedSegment(FileHandle, (unsigned __int64)BaseAddress, LowPart, PoolWithTag);
            if ( v9 < 0 )
              goto LABEL_61;
          }
          else
          {
            MaximumSize.QuadPart = 0LL;
            v9 = ZwReadFile(FileHandle, EventHandle, 0LL, 0LL, &IoStatusBlock, BaseAddress, LowPart, &MaximumSize, 0LL);
            if ( v9 < 0 )
              goto LABEL_61;
            v9 = ZwWaitForSingleObject(EventHandle, 0, 0LL);
            v12 = v9 < 0;
            if ( v9 )
            {
LABEL_19:
              if ( !v12 )
                v9 = -1073741823;
              goto LABEL_61;
            }
          }
          ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
          BaseAddress = 0LL;
        }
        v20 = (_QWORD *)*((_QWORD *)StartContext + 5);
        if ( v20 )
        {
          *v20 = v2;
          v2 = 0LL;
          if ( StartContext[12] == 16 && CMFCacheIndex == 10000 )
          {
            CMFFlagsCache |= StartContext[6] & 0xF;
            CMFCacheIndex = StartContext[1];
          }
        }
        goto LABEL_61;
      }
      v17 = v28;
      while ( *((_BYTE *)StartContext + 12) )
      {
        v18 = *StartContext;
        if ( *StartContext >= 0 )
          break;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        *StartContext = v18 & 0x7FFFFFFF;
        ViewSize = LowPart;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = v3;
        v9 = ZwCreateSection(&SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, v18 & 0x7FFFFFFF, v17);
        if ( v9 >= 0 )
          goto LABEL_43;
      }
      SectionHandle = 0LL;
    }
    v2 = v26;
    goto LABEL_61;
  }
  if ( v5 != 32 )
  {
    if ( v5 != 256 )
    {
      v9 = -1073741811;
      goto LABEL_61;
    }
    v6 = "RESCHIT";
    v7 = L"%s\\rc%04u\\rescache.hit";
    goto LABEL_10;
  }
  Length = 4192;
  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x1060uLL, 0x636D6650u);
  if ( PoolWithTag )
  {
    v28 = "RESCSEG";
    v10 = PoolWithTag;
    v11 = RtlStringCchPrintfW(
            pszDest,
            0x104uLL,
            L"%s\\rc%04u\\segment%u.cmf",
            L"\\SystemRoot\\Rescache",
            StartContext[1],
            StartContext[7]);
    goto LABEL_11;
  }
  v9 = -1073741801;
LABEL_61:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  v21 = (struct _KEVENT *)*((_QWORD *)StartContext + 2);
  StartContext[9] = v9;
  if ( v21 )
    KeSetEvent(v21, 1, 0);
}

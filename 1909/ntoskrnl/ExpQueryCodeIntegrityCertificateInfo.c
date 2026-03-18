/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x14090900C
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C1150 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C1190 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1401C1590 (ZwCreateSection.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x1406507C0 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140855770 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(void *a1, int a2)
{
  PVOID v4; // rsi
  HANDLE FileHandle; // r14
  unsigned int v6; // r12d
  NTSTATUS v7; // edi
  NTSTATUS v8; // eax
  LARGE_INTEGER v9; // rbx
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER FileSize; // [rsp+58h] [rbp-11h] BYREF
  PVOID Object; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileSize.QuadPart = 0LL;
  v4 = 0LL;
  Handle = 0LL;
  FileHandle = 0LL;
  SectionHandle = 0LL;
  BaseAddress = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v6 = 2;
    }
    else
    {
      if ( a2 != 2 )
      {
        v7 = -1073741811;
        goto LABEL_22;
      }
      v6 = 3;
    }
  }
  else
  {
    v6 = 1;
  }
  v7 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v7 >= 0 )
  {
    FileHandle = Handle;
    v8 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v7 = -1073741757;
      }
      else
      {
        v7 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v7 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v7 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v7 >= 0 )
          {
            v9 = FileSize;
            ViewSize = FileSize.QuadPart;
            v7 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   &ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v7 < 0 )
            {
              BaseAddress = 0LL;
              goto LABEL_24;
            }
            if ( qword_140436448 )
              v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140436448)(
                     v6,
                     BaseAddress,
                     (LARGE_INTEGER)v9.QuadPart);
            else
              v7 = -1073741637;
          }
          else
          {
            SectionHandle = 0LL;
          }
        }
      }
    }
    else
    {
      v4 = 0LL;
    }
  }
LABEL_22:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_24:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}

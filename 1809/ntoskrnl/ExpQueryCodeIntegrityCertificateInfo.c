/*
 * XREFs of ExpQueryCodeIntegrityCertificateInfo @ 0x1408CCFAC
 * Callers:
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401B87F0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401B8830 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1401B8C30 (ZwCreateSection.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x14061C4A0 (FsRtlGetFileSize.c)
 *     IoConvertFileHandleToKernelHandle @ 0x14081D200 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall ExpQueryCodeIntegrityCertificateInfo(void *a1, int a2)
{
  PVOID v2; // rsi
  HANDLE FileHandle; // r14
  unsigned int v4; // r12d
  NTSTATUS v5; // edi
  NTSTATUS v6; // eax
  LARGE_INTEGER v7; // rbx
  HANDLE Handle; // [rsp+50h] [rbp-19h] BYREF
  PVOID Object; // [rsp+58h] [rbp-11h] BYREF
  LARGE_INTEGER FileSize; // [rsp+60h] [rbp-9h] BYREF
  ULONG_PTR ViewSize; // [rsp+68h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  HANDLE SectionHandle; // [rsp+E8h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v2 = 0LL;
  SectionHandle = 0LL;
  FileHandle = 0LL;
  BaseAddress = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      v4 = 2;
    }
    else
    {
      if ( a2 != 2 )
      {
        v5 = -1073741811;
        goto LABEL_23;
      }
      v4 = 3;
    }
  }
  else
  {
    v4 = 1;
  }
  v5 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v5 >= 0 )
  {
    FileHandle = Handle;
    v6 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v2 = Object;
    v5 = v6;
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v5 = -1073741757;
      }
      else
      {
        v5 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v5 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v5 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v5 >= 0 )
          {
            v7 = FileSize;
            ViewSize = FileSize.QuadPart;
            v5 = ZwMapViewOfSection(
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
            if ( v5 < 0 )
            {
              BaseAddress = 0LL;
              goto LABEL_25;
            }
            if ( qword_14040EE08 )
            {
              v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_14040EE08)(
                     v4,
                     BaseAddress,
                     (LARGE_INTEGER)v7.QuadPart);
              if ( v5 >= 0 )
                v5 = 0;
            }
            else
            {
              v5 = -1073741637;
            }
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
      v2 = 0LL;
    }
  }
LABEL_23:
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
LABEL_25:
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v2 )
    ObfDereferenceObject(v2);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v5;
}

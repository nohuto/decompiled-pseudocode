/*
 * XREFs of ExpQueryElamCertInfo @ 0x1409097E4
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C05D0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C0610 (ZwUnmapViewOfSection.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
 *     FsRtlGetFileSize @ 0x14068A6A0 (FsRtlGetFileSize.c)
 *     SeRegisterElamCertResources @ 0x140764638 (SeRegisterElamCertResources.c)
 *     IoConvertFileHandleToKernelHandle @ 0x140856070 (IoConvertFileHandleToKernelHandle.c)
 */

__int64 __fastcall ExpQueryElamCertInfo(void *a1)
{
  void *v2; // r15
  int v3; // esi
  HANDLE FileHandle; // r12
  PVOID v5; // r14
  LARGE_INTEGER v6; // rbx
  PVOID PoolWithQuotaTag; // rax
  __int64 v8; // rdx
  LARGE_INTEGER FileSize; // [rsp+58h] [rbp-90h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-88h] BYREF
  PVOID Object; // [rsp+68h] [rbp-80h] BYREF
  ULONG_PTR ViewSize[3]; // [rsp+70h] [rbp-78h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-60h] BYREF
  PVOID BaseAddress; // [rsp+F8h] [rbp+10h] BYREF
  HANDLE SectionHandle; // [rsp+100h] [rbp+18h] BYREF
  PVOID v17; // [rsp+108h] [rbp+20h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  FileSize.QuadPart = 0LL;
  v17 = 0LL;
  SectionHandle = 0LL;
  v2 = 0LL;
  BaseAddress = 0LL;
  v3 = IoConvertFileHandleToKernelHandle(a1, KeGetCurrentThread()->PreviousMode, 1u, 0, &Handle);
  if ( v3 >= 0 )
  {
    FileHandle = Handle;
    v3 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v5 = Object;
    v17 = Object;
    if ( v3 >= 0 )
    {
      if ( *((_BYTE *)Object + 78) || *((_BYTE *)Object + 75) )
      {
        v3 = -1073741757;
      }
      else
      {
        v3 = FsRtlGetFileSize((PFILE_OBJECT)Object, &FileSize);
        if ( v3 >= 0 )
        {
          ObjectAttributes.Length = 48;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 576;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v3 = ZwCreateSection(&SectionHandle, 4u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle);
          if ( v3 >= 0 )
          {
            v6 = FileSize;
            ViewSize[0] = FileSize.QuadPart;
            v3 = ZwMapViewOfSection(
                   SectionHandle,
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   &BaseAddress,
                   0LL,
                   0LL,
                   0LL,
                   ViewSize,
                   ViewShare,
                   0,
                   2u);
            if ( v3 >= 0 )
            {
              if ( qword_1404364C8 )
                v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404364C8)(
                       0LL,
                       BaseAddress,
                       (LARGE_INTEGER)v6.QuadPart);
              else
                v3 = -1073741637;
              if ( v3 >= 0 )
              {
                PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v6.QuadPart, 0x4D414C45u);
                v2 = PoolWithQuotaTag;
                ViewSize[2] = (ULONG_PTR)PoolWithQuotaTag;
                if ( PoolWithQuotaTag )
                {
                  memmove(PoolWithQuotaTag, BaseAddress, v6.QuadPart);
                  if ( qword_1404364C8 )
                    v3 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_1404364C8)(
                           0LL,
                           v2,
                           (LARGE_INTEGER)v6.QuadPart);
                  else
                    v3 = -1073741637;
                  if ( v3 >= 0 )
                  {
                    v3 = SeRegisterElamCertResources((unsigned __int64)v2, v8, 1);
                    if ( v3 >= 0 )
                      v3 = 0;
                  }
                }
                else
                {
                  v3 = -1073741670;
                }
              }
            }
            else
            {
              BaseAddress = 0LL;
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
      v5 = 0LL;
    }
  }
  else
  {
    FileHandle = 0LL;
    v5 = v17;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4D414C45u);
  if ( BaseAddress )
    ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  if ( SectionHandle )
    ZwClose(SectionHandle);
  if ( v5 )
    ObfDereferenceObject(v5);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}

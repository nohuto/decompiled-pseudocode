/*
 * XREFs of IopIsNotNativeDriverImage @ 0x14085411C
 * Callers:
 *     IopCheckIfNotNativeDriver @ 0x140853A7C (IopCheckIfNotNativeDriver.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwMapViewOfSection @ 0x1401C05D0 (ZwMapViewOfSection.c)
 *     ZwUnmapViewOfSection @ 0x1401C0610 (ZwUnmapViewOfSection.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     ZwCreateSection @ 0x1401C0A10 (ZwCreateSection.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

bool __fastcall IopIsNotNativeDriverImage(UNICODE_STRING *a1)
{
  bool v2; // di
  PIMAGE_NT_HEADERS v4; // rax
  HANDLE FileHandle; // [rsp+58h] [rbp-A0h] BYREF
  PVOID BaseAddress; // [rsp+60h] [rbp-98h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-88h] BYREF
  ULONG_PTR ViewSize; // [rsp+A0h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-50h] BYREF
  _BYTE v11[48]; // [rsp+B8h] [rbp-40h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v2 = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  memset(v11, 0, sizeof(v11));
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x20u, &ObjectAttributes, &IoStatusBlock, 5u, 0) < 0 )
    return 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwCreateSection(&SectionHandle, 8u, &ObjectAttributes, 0LL, 2u, 0x8000000u, FileHandle) < 0 )
  {
LABEL_4:
    ZwClose(FileHandle);
    return 0;
  }
  BaseAddress = 0LL;
  ViewSize = 0LL;
  KiStackAttachProcess(PsInitialSystemProcess, 0, (__int64)v11);
  if ( ZwMapViewOfSection(
         SectionHandle,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         0LL,
         &ViewSize,
         ViewShare,
         0,
         2u) < 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
    ZwClose(SectionHandle);
    goto LABEL_4;
  }
  v4 = RtlImageNtHeader(BaseAddress);
  if ( v4 )
    v2 = v4->FileHeader.Machine != 0x8664;
  ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
  KiUnstackDetachProcess((struct _KTHREAD *)v11, 0);
  ZwClose(SectionHandle);
  ZwClose(FileHandle);
  return v2;
}

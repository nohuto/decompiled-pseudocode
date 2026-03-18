/*
 * XREFs of VhdiInitializeBootDisk @ 0x140A3F040
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401C01B0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401C0730 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IoGetConfigurationInformation @ 0x14073B230 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14075DCB0 (RtlCreateUnicodeStringFromAsciiz.c)
 *     VhdiGetPartitionNumber @ 0x140A3EE10 (VhdiGetPartitionNumber.c)
 *     VhdiGetVolumeNumber @ 0x140A3EEAC (VhdiGetVolumeNumber.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140A3F880 (VhdiQueryVolumeVhdFilePath.c)
 */

__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v6; // r12
  const void *v7; // r13
  int *v9; // rdi
  char v10; // r15
  unsigned int v11; // r14d
  ULONG DiskCount; // eax
  int inited; // ebx
  ULONG_PTR VolumeVhdFilePath; // rax
  ULONG OutputBufferLength; // esi
  int *OutputBuffer; // rax
  int v17; // ecx
  bool v18; // zf
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v20; // [rsp+58h] [rbp-A8h] BYREF
  ULONG v21; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v22; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v20 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v6 = *(_QWORD **)a2;
  v7 = *(const void **)(a2 + 8);
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !v7 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  v22 = *(_DWORD **)(a2 + 24);
  if ( !v22 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSZ *)(a1 + 184)) )
    return 3221225473LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  v21 = DiskCount;
  if ( !DiskCount )
    goto LABEL_39;
  while ( 1 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v11);
    if ( inited < 0 )
      goto LABEL_35;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_35;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( Handle )
    {
      ZwClose(Handle);
      Handle = 0LL;
    }
    inited = ZwOpenFile(&Handle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
    if ( inited < 0 )
      goto LABEL_35;
    VolumeVhdFilePath = VhdiQueryVolumeVhdFilePath(Handle);
    if ( !VolumeVhdFilePath )
      break;
    ExFreeHeapPool(VolumeVhdFilePath);
LABEL_35:
    if ( ++v11 >= v21 )
      goto LABEL_38;
  }
  if ( v9 )
    ExFreeHeapPool((ULONG_PTR)v9);
  for ( OutputBufferLength = 4096; ; OutputBufferLength *= 2 )
  {
    OutputBuffer = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, OutputBufferLength, 0x42646856u);
    v9 = OutputBuffer;
    if ( !OutputBuffer )
      break;
    inited = ZwDeviceIoControlFile(
               Handle,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x70050u,
               0LL,
               0,
               OutputBuffer,
               OutputBufferLength);
    if ( inited != -1073741789 )
      goto LABEL_25;
    ExFreeHeapPool((ULONG_PTR)v9);
  }
  inited = -1073741801;
LABEL_25:
  if ( inited < 0 )
    goto LABEL_35;
  v17 = *(_DWORD *)v6;
  if ( *v9 == *(_DWORD *)v6 )
  {
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_34;
      v18 = RtlCompareMemory(v9 + 2, v7, 0x10uLL) == 16;
    }
    else
    {
      v18 = RtlCompareMemory(v9 + 2, v7, 4uLL) == 4;
    }
    if ( v18 )
    {
      inited = VhdiGetPartitionNumber(v9, v6, &v20);
      if ( inited >= 0 )
        v10 = 1;
    }
  }
LABEL_34:
  if ( !v10 )
    goto LABEL_35;
  inited = VhdiGetVolumeNumber((__int64)Handle, v11, v20, v22);
LABEL_38:
  if ( !v10 )
LABEL_39:
    inited = -1073741810;
  if ( v9 )
    ExFreeHeapPool((ULONG_PTR)v9);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}

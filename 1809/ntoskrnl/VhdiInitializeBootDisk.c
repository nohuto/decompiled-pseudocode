/*
 * XREFs of VhdiInitializeBootDisk @ 0x1409FA480
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1401B83D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenFile @ 0x1401B8950 (ZwOpenFile.c)
 *     RtlCompareMemory @ 0x1401C5D30 (RtlCompareMemory.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IoGetConfigurationInformation @ 0x1407107C0 (IoGetConfigurationInformation.c)
 *     RtlCreateUnicodeStringFromAsciiz @ 0x14073370C (RtlCreateUnicodeStringFromAsciiz.c)
 *     VhdiGetPartitionNumber @ 0x1409FA28C (VhdiGetPartitionNumber.c)
 *     VhdiGetVolumeNumber @ 0x1409FA328 (VhdiGetVolumeNumber.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1409FAC84 (VhdiQueryVolumeVhdFilePath.c)
 */

__int64 __fastcall VhdiInitializeBootDisk(__int64 a1, __int64 a2, UNICODE_STRING *a3)
{
  _QWORD *v3; // r12
  const void *v4; // r13
  _DWORD *OutputBuffer; // rdi
  char v7; // r15
  unsigned int v8; // esi
  int inited; // ebx
  void *VolumeVhdFilePath; // rax
  ULONG OutputBufferLength; // r14d
  SIZE_T i; // rdx
  int v13; // ecx
  bool v14; // zf
  HANDLE Handle; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  ULONG DiskCount; // [rsp+5Ch] [rbp-A4h]
  _DWORD *v18; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-78h] BYREF
  wchar_t pszDest[64]; // [rsp+C0h] [rbp-40h] BYREF

  v16 = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !a3 )
    return 3221225485LL;
  v3 = *(_QWORD **)a2;
  v4 = *(const void **)(a2 + 8);
  if ( !*(_QWORD *)a2 )
    return 3221225485LL;
  if ( !v4 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a2 + 16) )
    return 3221225485LL;
  v18 = *(_DWORD **)(a2 + 24);
  if ( !v18 )
    return 3221225485LL;
  if ( !RtlCreateUnicodeStringFromAsciiz(a3, *(PCSZ *)(a1 + 184)) )
    return 3221225473LL;
  OutputBuffer = 0LL;
  v7 = 0;
  v8 = 0;
  DiskCount = IoGetConfigurationInformation()->DiskCount;
  Handle = 0LL;
  if ( !DiskCount )
    goto LABEL_39;
  while ( 1 )
  {
    inited = RtlStringCbPrintfW(pszDest, 0x80uLL, L"\\Device\\Harddisk%d\\Partition0", v8);
    if ( inited < 0 )
      goto LABEL_35;
    inited = RtlInitUnicodeStringEx(&DestinationString, pszDest);
    if ( inited < 0 )
      goto LABEL_35;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
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
    VolumeVhdFilePath = (void *)VhdiQueryVolumeVhdFilePath(Handle);
    if ( !VolumeVhdFilePath )
      break;
    ExFreePoolWithTag(VolumeVhdFilePath, 0x42646856u);
LABEL_35:
    if ( ++v8 >= DiskCount )
      goto LABEL_38;
  }
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0);
  OutputBufferLength = 4096;
  for ( i = 4096LL; ; i = OutputBufferLength )
  {
    OutputBuffer = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x42646856u);
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
    ExFreePoolWithTag(OutputBuffer, 0);
    OutputBufferLength *= 2;
  }
  inited = -1073741801;
LABEL_25:
  if ( inited < 0 )
    goto LABEL_35;
  v13 = *(_DWORD *)v3;
  if ( *OutputBuffer == *(_DWORD *)v3 )
  {
    if ( v13 )
    {
      if ( v13 != 1 )
        goto LABEL_34;
      v14 = RtlCompareMemory(OutputBuffer + 2, v4, 0x10uLL) == 16;
    }
    else
    {
      v14 = RtlCompareMemory(OutputBuffer + 2, v4, 4uLL) == 4;
    }
    if ( v14 )
    {
      inited = VhdiGetPartitionNumber(OutputBuffer, v3, &v16);
      if ( inited >= 0 )
        v7 = 1;
    }
  }
LABEL_34:
  if ( !v7 )
    goto LABEL_35;
  inited = VhdiGetVolumeNumber((__int64)Handle, v8, v16, v18);
LABEL_38:
  if ( !v7 )
LABEL_39:
    inited = -1073741810;
  if ( OutputBuffer )
    ExFreePoolWithTag(OutputBuffer, 0x42646856u);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)inited;
}

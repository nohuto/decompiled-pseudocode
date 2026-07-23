/*
 * XREFs of EtwpFinalizeHeader @ 0x14069B5BC
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x1408BF2D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x140014A4C (EtwpQueryMaximumFileSize.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x14008A4E0 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401B8C10 (ZwQueryVolumeInformationFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpIsWow64Logger @ 0x14069BD10 (EtwpIsWow64Logger.c)
 *     EtwpAddDebugInfoEvents @ 0x1406FF3A0 (EtwpAddDebugInfoEvents.c)
 *     EtwpAddBinaryInfoEvents @ 0x1408BF15C (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r14
  ULONG Length; // esi
  char v8; // r12
  LARGE_INTEGER *Buffer; // rdi
  NTSTATUS v10; // ebp
  int v11; // edx
  unsigned int HighPart; // eax
  NTSTATUS v13; // eax
  NTSTATUS result; // eax
  unsigned __int64 MaximumFileSize; // rax
  unsigned __int64 v16; // r8
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-88h] BYREF
  unsigned __int64 FileInformation; // [rsp+58h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+70h] [rbp-68h] BYREF
  char FsInformation[20]; // [rsp+80h] [rbp-58h] BYREF
  int v22; // [rsp+94h] [rbp-44h]

  v3 = (_QWORD *)(a1 + 112);
  if ( (_QWORD *)*v3 == v3 && *(_QWORD *)(a1 + 1024) == a1 + 1024 && !*(_DWORD *)(a1 + 136) )
  {
    v8 = 0;
    result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
    if ( result < 0 )
      return result;
    Length = -v22 & (v22 + 383);
  }
  else
  {
    Length = *(_DWORD *)(a1 + 4);
    v8 = 1;
  }
  Buffer = (LARGE_INTEGER *)ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
  if ( !Buffer )
    return -1073741801;
  ByteOffset.QuadPart = 0LL;
  v10 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
  if ( v10 >= 0 )
  {
    if ( !a3 )
    {
      Buffer[17].HighPart = *(_DWORD *)(a1 + 264);
      Buffer[14].HighPart = EtwpQueryUsedProcessorCount(a1);
      Buffer[19].LowPart += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise(Buffer + 15);
      if ( (unsigned __int8)EtwpIsWow64Logger(a1) )
        Buffer[46].HighPart += v11;
      else
        Buffer[47].HighPart += v11;
    }
    if ( v8 )
    {
      HighPart = Buffer->HighPart;
      if ( HighPart < Length && HighPart >= 0x178 )
      {
        Buffer[6].LowPart = HighPart;
        if ( (_QWORD *)*v3 != v3 || *(_DWORD *)(a1 + 136) )
          EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, Length, (_DWORD)Buffer + 88, 3);
        if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
          EtwpAddBinaryInfoEvents(a1, Buffer, Length, 2LL);
      }
    }
    v13 = ZwWriteFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    v10 = v13;
    if ( !a3 && v13 >= 0 && (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
    {
      MaximumFileSize = EtwpQueryMaximumFileSize(a1);
      if ( v16 < MaximumFileSize )
      {
        FileInformation = v16;
        v10 = ZwSetInformationFile(a2, &v20, &FileInformation, 8u, FileEndOfFileInformation);
      }
    }
  }
  ExFreePoolWithTag(Buffer, 0);
  return v10;
}

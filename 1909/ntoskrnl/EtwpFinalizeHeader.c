/*
 * XREFs of EtwpFinalizeHeader @ 0x1406AD96C
 * Callers:
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 *     EtwpCreateLogFile @ 0x1406ADF64 (EtwpCreateLogFile.c)
 *     EtwpBufferingModeFlush @ 0x1408FA5F4 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 *     KeQuerySystemTimePrecise @ 0x140082440 (KeQuerySystemTimePrecise.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401C0D10 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401C1570 (ZwQueryVolumeInformationFile.c)
 *     EtwpAddLastDroppedEvent @ 0x140331B00 (EtwpAddLastDroppedEvent.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpAddDebugInfoEvents @ 0x1406ADCC0 (EtwpAddDebugInfoEvents.c)
 *     EtwpIsWow64Logger @ 0x1406AEE98 (EtwpIsWow64Logger.c)
 *     EtwpAddBinaryInfoEvents @ 0x1408FA478 (EtwpAddBinaryInfoEvents.c)
 */

NTSTATUS __fastcall EtwpFinalizeHeader(__int64 a1, void *a2, char a3)
{
  _QWORD *v3; // r13
  bool v6; // r12
  NTSTATUS result; // eax
  ULONG Length; // r15d
  ULONG v9; // esi
  char *Buffer; // rdi
  NTSTATUS v11; // r14d
  LARGE_INTEGER v12; // rax
  unsigned int v13; // r15d
  bool v14; // zf
  int v15; // r12d
  ULONG v16; // ecx
  ULONG v17; // eax
  HANDLE v18; // rsi
  NTSTATUS v19; // eax
  int v20; // edx
  int v21; // ecx
  __int64 v22; // r8
  unsigned __int64 v23; // r8
  int v25; // [rsp+54h] [rbp-45h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-41h] BYREF
  int v27; // [rsp+60h] [rbp-39h]
  HANDLE FileHandle; // [rsp+68h] [rbp-31h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-29h] BYREF
  unsigned __int64 FileInformation; // [rsp+80h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK v31; // [rsp+88h] [rbp-11h] BYREF
  _QWORD FsInformation[2]; // [rsp+98h] [rbp-1h] BYREF
  __int64 v33; // [rsp+A8h] [rbp+Fh]

  v3 = (_QWORD *)(a1 + 112);
  FileHandle = a2;
  FsInformation[0] = 0LL;
  FsInformation[1] = 0LL;
  v33 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v6 = (_QWORD *)*v3 != v3 || *(_QWORD *)(a1 + 1024) != a1 + 1024 || *(_DWORD *)(a1 + 136) || *(_QWORD *)(a1 + 1288);
  result = ZwQueryVolumeInformationFile(a2, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
  if ( result >= 0 )
  {
    v27 = HIDWORD(v33);
    Length = ~(HIDWORD(v33) - 1) & (HIDWORD(v33) + 383);
    v25 = ~(HIDWORD(v33) - 1);
    v9 = Length;
    if ( v6 )
      v9 = *(_DWORD *)(a1 + 4);
    Buffer = (char *)ExAllocatePoolWithTag(PagedPool, (v9 + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    if ( !Buffer )
      return -1073741801;
    ByteOffset.QuadPart = 0LL;
    v11 = ZwReadFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v11 < 0 )
      goto LABEL_25;
    v12.QuadPart = Length;
    ByteOffset.QuadPart = Length;
    if ( !a3 )
    {
      *((_DWORD *)Buffer + 35) = *(_DWORD *)(a1 + 264);
      *((_DWORD *)Buffer + 29) = EtwpQueryUsedProcessorCount(a1);
      *((_DWORD *)Buffer + 38) += *(_DWORD *)(a1 + 256);
      KeQuerySystemTimePrecise((__int64 *)Buffer + 15);
      if ( (unsigned __int8)EtwpIsWow64Logger(a1, *(unsigned int *)(a1 + 268)) )
        *((_DWORD *)Buffer + 93) += v20;
      else
        *((_DWORD *)Buffer + 95) += v20;
      v12 = ByteOffset;
    }
    v13 = *((_DWORD *)Buffer + 1);
    if ( v13 <= v12.LowPart )
    {
      v15 = v25;
    }
    else
    {
      v14 = !v6;
      v15 = v25;
      if ( !v14 )
      {
        v16 = *((_DWORD *)Buffer + 1);
        if ( v13 >= v9 )
          v16 = v9;
        v11 = ZwReadFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                &Buffer[v12.QuadPart],
                v25 & (v16 - v12.LowPart + v27 - 1),
                &ByteOffset,
                0LL);
        if ( v11 < 0 )
          goto LABEL_25;
        if ( v13 < v9 && v13 >= 0x178 )
        {
          *((_DWORD *)Buffer + 12) = v13;
          if ( *(_QWORD *)(a1 + 1288) )
            EtwpAddLastDroppedEvent(a1);
          if ( (_QWORD *)*v3 != v3 || *(_DWORD *)(a1 + 136) )
            EtwpAddDebugInfoEvents(a1, (_DWORD)Buffer, v9, (_DWORD)Buffer + 88, 3);
          if ( *(_QWORD *)(a1 + 1024) != a1 + 1024 )
            EtwpAddBinaryInfoEvents(a1, Buffer, v9, 2LL);
        }
      }
    }
    ByteOffset.QuadPart = 0LL;
    v17 = *((_DWORD *)Buffer + 12);
    if ( v17 >= v9 )
      v17 = v9;
    v18 = FileHandle;
    v19 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v15 & (v17 + v27 - 1), &ByteOffset, 0LL);
    v11 = v19;
    if ( !a3 && v19 >= 0 )
    {
      v21 = *(_DWORD *)(a1 + 12);
      if ( (v21 & 0x20) != 0 )
      {
        v22 = *(unsigned int *)(a1 + 264);
        v31.Pointer = 0LL;
        v31.Information = 0LL;
        v23 = *(unsigned int *)(a1 + 4) * v22;
        if ( v23 < *(unsigned int *)(a1 + 308) * ((-(__int64)((v21 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
        {
          FileInformation = v23;
          v11 = ZwSetInformationFile(v18, &v31, &FileInformation, 8u, FileEndOfFileInformation);
        }
      }
    }
LABEL_25:
    ExFreePoolWithTag(Buffer, 0);
    return v11;
  }
  return result;
}

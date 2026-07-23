/*
 * XREFs of EtwpUpdateFileHeader @ 0x14069AFDC
 * Callers:
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpQueryMaximumFileSize @ 0x140014A4C (EtwpQueryMaximumFileSize.c)
 *     EtwpResetBufferHeader @ 0x140015524 (EtwpResetBufferHeader.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpInitializeBufferHeader @ 0x1400DD35C (EtwpInitializeBufferHeader.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401B8C10 (ZwQueryVolumeInformationFile.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x14069B7E8 (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x14069BD10 (EtwpIsWow64Logger.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  NTSTATUS result; // eax
  int v5; // r13d
  ULONG Length; // r12d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v9; // ebx
  void *v10; // rcx
  char v11; // dl
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 MaximumFileSize; // rax
  void *v16; // rcx
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v19; // [rsp+70h] [rbp-11h] BYREF
  _BYTE FileInformation[8]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+7h]
  _BYTE FsInformation[20]; // [rsp+98h] [rbp+17h] BYREF
  int v23; // [rsp+ACh] [rbp+2Bh]

  result = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 816),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
  if ( result >= 0 )
  {
    v5 = v23 - 1;
    if ( a2 )
    {
      Length = ~v5 & (v23 + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      if ( (v5 & Length) != 0 )
        return -1073741306;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL, 0x50777445u);
    Buffer = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return -1073741801;
    if ( !a2 )
    {
      EtwpInitializeBufferHeader((__int16 *)a1, PoolWithTag);
      EtwpResetBufferHeader(Buffer, 4);
      EtwpAddLogHeader(a1, Buffer);
      v9 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v9 >= 0 )
      {
        if ( (*(_DWORD *)(a1 + 12) & 0x20) != 0 )
        {
          MaximumFileSize = EtwpQueryMaximumFileSize(a1);
          v16 = *(void **)(a1 + 816);
          ByteOffset.QuadPart = MaximumFileSize;
          v9 = ZwSetInformationFile(v16, &v19, &ByteOffset, 8u, FileEndOfFileInformation);
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a1 + 264) = 1;
          *(_DWORD *)(a1 + 220) = 1;
          *(_QWORD *)(a1 + 232) = Length;
        }
      }
      goto LABEL_11;
    }
    v10 = *(void **)(a1 + 816);
    ByteOffset.QuadPart = 0LL;
    v9 = ZwReadFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &ByteOffset, 0LL);
    if ( v9 >= 0 )
    {
      if ( (*(_DWORD *)(Buffer + 136) & 0x4000402) != 0 )
      {
        v9 = -1073741811;
        *(_DWORD *)(a1 + 60) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 2;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1) != 0 ? 4 : 8) )
        {
          v12 = *(unsigned int *)(Buffer + 104);
          LODWORD(v13) = *(_DWORD *)(Buffer + 140);
          if ( (v5 & (unsigned int)v12) != 0 )
          {
            v9 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v12 - 1024) > 0xFFFC00 )
            {
              v9 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_11;
            }
            if ( (*(_DWORD *)(a1 + 832) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v12 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v11 & 0x20) != 0 )
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_11;
                }
                v9 = ZwQueryInformationFile(
                       *(HANDLE *)(a1 + 816),
                       &IoStatusBlock,
                       FileInformation,
                       0x18u,
                       FileStandardInformation);
                if ( v9 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_11;
                }
                v14 = EtwpQueryMaximumFileSize(a1);
                if ( v14 > 0 && v21 >= v14 )
                {
                  v9 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_11;
                }
                v13 = v21 / v12;
              }
              if ( (_DWORD)v13 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v9 = ZwWriteFile(
                         *(HANDLE *)(a1 + 816),
                         0LL,
                         0LL,
                         0LL,
                         &IoStatusBlock,
                         (PVOID)Buffer,
                         Length,
                         &ByteOffset,
                         0LL);
                  if ( v9 >= 0 )
                  {
                    *(_DWORD *)(a1 + 264) = v13;
                    *(_DWORD *)(a1 + 220) = v13;
                    *(_DWORD *)(a1 + 4) = v12;
                    *(_QWORD *)(a1 + 232) = (unsigned int)(v12 * v13);
                  }
                }
                else
                {
                  v9 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 10;
                }
              }
              else
              {
                v9 = -1073741811;
                *(_DWORD *)(a1 + 60) = 9;
              }
              goto LABEL_11;
            }
            v9 = -1073741306;
            *(_DWORD *)(a1 + 60) = 5;
          }
        }
        else
        {
          v9 = -1073741811;
          *(_DWORD *)(a1 + 60) = 3;
        }
      }
    }
LABEL_11:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v9;
  }
  return result;
}

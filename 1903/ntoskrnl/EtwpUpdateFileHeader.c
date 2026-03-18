/*
 * XREFs of EtwpUpdateFileHeader @ 0x1406B8B08
 * Callers:
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140003A68 (EtwpResetBufferHeader.c)
 *     EtwpQueryUsedProcessorCount @ 0x140003AC0 (EtwpQueryUsedProcessorCount.c)
 *     EtwpInitializeBufferHeader @ 0x140108BA8 (EtwpInitializeBufferHeader.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401C0190 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1401C09F0 (ZwQueryVolumeInformationFile.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x1406B91F0 (EtwpAddLogHeader.c)
 *     EtwpIsWow64Logger @ 0x1406B97A8 (EtwpIsWow64Logger.c)
 */

NTSTATUS __fastcall EtwpUpdateFileHeader(__int64 a1, char a2)
{
  void *v4; // rcx
  NTSTATUS result; // eax
  int v6; // r13d
  ULONG Length; // r12d
  _DWORD *PoolWithTag; // rax
  __int64 Buffer; // rsi
  NTSTATUS v10; // ebx
  int v11; // eax
  void *v12; // rcx
  __int64 v13; // rdx
  char v14; // dl
  __int64 v15; // r15
  __int64 v16; // r14
  signed __int64 v17; // rcx
  LARGE_INTEGER FileInformation; // [rsp+58h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK v20; // [rsp+70h] [rbp-11h] BYREF
  _QWORD FsInformation[2]; // [rsp+80h] [rbp-1h] BYREF
  __int64 v22; // [rsp+90h] [rbp+Fh]
  __int64 v23; // [rsp+98h] [rbp+17h] BYREF
  signed __int64 v24; // [rsp+A0h] [rbp+1Fh]
  __int64 v25; // [rsp+A8h] [rbp+27h]

  v23 = 0LL;
  v24 = 0LL;
  v4 = *(void **)(a1 + 816);
  v25 = 0LL;
  FsInformation[0] = 0LL;
  FsInformation[1] = 0LL;
  v22 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  result = ZwQueryVolumeInformationFile(v4, &IoStatusBlock, FsInformation, 0x18u, FileFsSizeInformation);
  if ( result >= 0 )
  {
    v6 = HIDWORD(v22) - 1;
    if ( a2 )
    {
      Length = ~v6 & (HIDWORD(v22) + 383);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 4);
      if ( (v6 & Length) != 0 )
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
      v10 = ZwWriteFile(*(HANDLE *)(a1 + 816), 0LL, 0LL, 0LL, &IoStatusBlock, (PVOID)Buffer, Length, 0LL, 0LL);
      if ( v10 >= 0 )
      {
        v11 = *(_DWORD *)(a1 + 12);
        if ( (v11 & 0x20) != 0 )
        {
          v20.Pointer = 0LL;
          v20.Information = 0LL;
          FileInformation.QuadPart = *(unsigned int *)(a1 + 308)
                                   * ((-(__int64)((v11 & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
          v10 = ZwSetInformationFile(*(HANDLE *)(a1 + 816), &v20, &FileInformation, 8u, FileEndOfFileInformation);
        }
        if ( v10 >= 0 )
        {
          *(_DWORD *)(a1 + 264) = 1;
          *(_DWORD *)(a1 + 220) = 1;
          *(_QWORD *)(a1 + 232) = Length;
        }
      }
      goto LABEL_11;
    }
    v12 = *(void **)(a1 + 816);
    FileInformation.QuadPart = 0LL;
    v10 = ZwReadFile(v12, 0LL, 0LL, 0LL, &IoStatusBlock, PoolWithTag, Length, &FileInformation, 0LL);
    if ( v10 >= 0 )
    {
      v13 = *(unsigned int *)(Buffer + 136);
      if ( (v13 & 0x4000402) != 0 )
      {
        v10 = -1073741811;
        *(_DWORD *)(a1 + 60) = 1;
      }
      else
      {
        if ( *(_BYTE *)(Buffer + 108) != 10 || *(_BYTE *)(Buffer + 109) )
        {
          v10 = -1073741811;
          *(_DWORD *)(a1 + 60) = 2;
          goto LABEL_11;
        }
        if ( *(_DWORD *)(Buffer + 148) == ((unsigned __int8)EtwpIsWow64Logger(a1, v13) != 0 ? 4 : 8) )
        {
          v15 = *(unsigned int *)(Buffer + 104);
          LODWORD(v16) = *(_DWORD *)(Buffer + 140);
          if ( (v6 & (unsigned int)v15) != 0 )
          {
            v10 = -1073741306;
          }
          else
          {
            if ( (unsigned int)(v15 - 1024) > 0xFFFC00 )
            {
              v10 = -1073741811;
              *(_DWORD *)(a1 + 60) = 4;
              goto LABEL_11;
            }
            if ( (*(_DWORD *)(a1 + 832) & 2) == 0 || *(_DWORD *)(a1 + 4) == (_DWORD)v15 )
            {
              if ( !*(_QWORD *)(Buffer + 120) )
              {
                if ( (v14 & 0x20) != 0 )
                {
                  v10 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 6;
                  goto LABEL_11;
                }
                v10 = ZwQueryInformationFile(
                        *(HANDLE *)(a1 + 816),
                        &IoStatusBlock,
                        &v23,
                        0x18u,
                        FileStandardInformation);
                if ( v10 < 0 )
                {
                  *(_DWORD *)(a1 + 60) = 7;
                  goto LABEL_11;
                }
                v17 = *(unsigned int *)(a1 + 308)
                    * ((-(__int64)((*(_DWORD *)(a1 + 12) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000);
                if ( v17 && v24 >= v17 )
                {
                  v10 = -1073741432;
                  *(_DWORD *)(a1 + 60) = 8;
                  goto LABEL_11;
                }
                v16 = v24 / v15;
              }
              if ( (_DWORD)v16 )
              {
                if ( *(_DWORD *)(Buffer + 116) == (unsigned int)EtwpQueryUsedProcessorCount(a1) )
                {
                  *(_QWORD *)(Buffer + 120) = 0LL;
                  v10 = ZwWriteFile(
                          *(HANDLE *)(a1 + 816),
                          0LL,
                          0LL,
                          0LL,
                          &IoStatusBlock,
                          (PVOID)Buffer,
                          Length,
                          &FileInformation,
                          0LL);
                  if ( v10 >= 0 )
                  {
                    *(_DWORD *)(a1 + 264) = v16;
                    *(_DWORD *)(a1 + 220) = v16;
                    *(_DWORD *)(a1 + 4) = v15;
                    *(_QWORD *)(a1 + 232) = (unsigned int)(v15 * v16);
                  }
                }
                else
                {
                  v10 = -1073741811;
                  *(_DWORD *)(a1 + 60) = 10;
                }
              }
              else
              {
                v10 = -1073741811;
                *(_DWORD *)(a1 + 60) = 9;
              }
              goto LABEL_11;
            }
            v10 = -1073741306;
            *(_DWORD *)(a1 + 60) = 5;
          }
        }
        else
        {
          v10 = -1073741811;
          *(_DWORD *)(a1 + 60) = 3;
        }
      }
    }
LABEL_11:
    ExFreePoolWithTag((PVOID)Buffer, 0);
    return v10;
  }
  return result;
}

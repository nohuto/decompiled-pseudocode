/*
 * XREFs of BiIssueGetDriveLayoutIoctl @ 0x140740CF8
 * Callers:
 *     BiGetDriveLayoutInformation @ 0x140740C2C (BiGetDriveLayoutInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1401C0D30 (ZwDeviceIoControlFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiIssueGetDriveLayoutIoctl(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // ebp
  unsigned int *v5; // rsi
  _DWORD *OutputBuffer; // rax
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  int v9; // ebx
  ULONG v11; // ebp
  SIZE_T i; // rdx
  unsigned int *PoolWithTag; // rax
  NTSTATUS v14; // eax
  unsigned int v15; // ebp
  _DWORD *v16; // rax
  _QWORD *v17; // rdx
  _DWORD *v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock.Pointer = 0LL;
  OutputBufferLength = 18480;
  IoStatusBlock.Information = 0LL;
  v5 = 0LL;
  OutputBuffer = ExAllocatePoolWithTag(PagedPool, 0x4830uLL, 0x4B444342u);
  v7 = OutputBuffer;
  if ( OutputBuffer )
  {
    while ( 1 )
    {
      v8 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      v9 = v8;
      if ( v8 != -1073741789 )
        break;
      ExFreePoolWithTag(v7, 0x4B444342u);
      OutputBufferLength += 9216;
      OutputBuffer = ExAllocatePoolWithTag(PagedPool, OutputBufferLength, 0x4B444342u);
      v7 = OutputBuffer;
      if ( !OutputBuffer )
        goto LABEL_11;
    }
    if ( v8 >= 0 )
    {
LABEL_4:
      *a2 = v7;
      goto LABEL_5;
    }
    v11 = 2056;
    for ( i = 2056LL; ; i = v11 )
    {
      PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, i, 0x4B444342u);
      v5 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v9 = -1073741670;
        goto LABEL_14;
      }
      v14 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x7400Cu, 0LL, 0, PoolWithTag, v11);
      v9 = v14;
      if ( v14 != -1073741789 )
        break;
      ExFreePoolWithTag(v5, 0x4B444342u);
      v11 += 2048;
    }
    if ( v14 >= 0 )
    {
      ExFreePoolWithTag(v7, 0x4B444342u);
      v15 = 144 * *v5 + 48;
      v16 = ExAllocatePoolWithTag(PagedPool, v15, 0x4B444342u);
      v7 = v16;
      if ( v16 )
      {
        memset(v16, 0, v15);
        *v7 = 0;
        v17 = v5 + 2;
        v18 = v7 + 12;
        v7[1] = *v5;
        v19 = 0;
        for ( v7[2] = v5[1]; v19 < *v5; *(v18 - 27) = *((_DWORD *)v17 - 4) )
        {
          *v18 = 0;
          ++v19;
          v20 = *v17;
          v17 += 4;
          *((_QWORD *)v18 + 1) = v20;
          v18 += 36;
          *((_QWORD *)v18 - 16) = *(v17 - 3);
          *(v18 - 30) = *((_DWORD *)v17 - 3);
          *((_BYTE *)v18 - 116) = *((_BYTE *)v17 - 5);
          *((_BYTE *)v18 - 112) = *((_BYTE *)v17 - 8);
          *((_BYTE *)v18 - 111) = *((_BYTE *)v17 - 7);
          *((_BYTE *)v18 - 110) = *((_BYTE *)v17 - 6);
        }
        goto LABEL_4;
      }
LABEL_11:
      v9 = -1073741670;
    }
LABEL_5:
    if ( v5 )
      ExFreePoolWithTag(v5, 0x4B444342u);
    if ( v9 < 0 )
    {
LABEL_14:
      if ( v7 )
        ExFreePoolWithTag(v7, 0x4B444342u);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v9;
}

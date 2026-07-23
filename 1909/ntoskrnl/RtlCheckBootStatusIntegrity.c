/*
 * XREFs of RtlCheckBootStatusIntegrity @ 0x1408D3438
 * Callers:
 *     PopBootStatCheckIntegrity @ 0x1408B3E20 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     ZwReadFile @ 0x1401C0D10 (ZwReadFile.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlBootStatusItemInfo @ 0x140743D30 (RtlBootStatusItemInfo.c)
 */

NTSTATUS __cdecl RtlCheckBootStatusIntegrity(HANDLE FileHandle, PBOOLEAN Verified)
{
  char v4; // r14
  NTSTATUS v5; // ebx
  PVOID Buffer; // rsi
  __int64 v7; // rcx
  _BYTE *v8; // rax
  int v10; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B0h] [rbp+40h] BYREF
  int v14; // [rsp+B8h] [rbp+48h] BYREF

  ByteOffset.QuadPart = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  v4 = 0;
  v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &NumberOfBytes, 4u, &ByteOffset, 0LL);
  if ( v5 >= 0 )
  {
    v5 = RtlBootStatusItemInfo(0xFu, &v10, &v14);
    if ( v5 >= 0 )
    {
      if ( (unsigned int)NumberOfBytes < v14 + v10 || (unsigned int)NumberOfBytes > 0x800 )
      {
        *Verified = 0;
      }
      else
      {
        Buffer = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x66647362u);
        if ( Buffer )
        {
          v5 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, NumberOfBytes, &ByteOffset, 0LL);
          if ( v5 >= 0 )
          {
            v7 = (unsigned int)NumberOfBytes;
            if ( IoStatusBlock.Information == (unsigned int)NumberOfBytes )
            {
              if ( (_DWORD)NumberOfBytes )
              {
                v8 = Buffer;
                do
                {
                  v4 += *v8++;
                  --v7;
                }
                while ( v7 );
              }
              *Verified = v4 == 0;
            }
            else
            {
              *Verified = 0;
            }
          }
          ExFreePoolWithTag(Buffer, 0);
        }
        else
        {
          return -1073741801;
        }
      }
    }
  }
  return v5;
}

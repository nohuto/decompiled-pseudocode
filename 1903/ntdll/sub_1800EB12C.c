/*
 * XREFs of sub_1800EB12C @ 0x1800EB12C
 * Callers:
 *     RtlGetSetBootStatusData @ 0x1800EAC40 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x18009C7A0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x18009C7E0 (ZwWriteFile.c)
 *     sub_1800EA8E8 @ 0x1800EA8E8 (sub_1800EA8E8.c)
 *     sub_1800EB25C @ 0x1800EB25C (sub_1800EB25C.c)
 */

int __fastcall sub_1800EB12C(HANDLE FileHandle, char a2, unsigned int a3, void *a4, ULONG a5, _DWORD *a6)
{
  int result; // eax
  __int64 v11; // rdi
  NTSTATUS v12; // ebx
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  ULONG Length; // [rsp+50h] [rbp-20h] BYREF
  unsigned int Buffer; // [rsp+54h] [rbp-1Ch] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF

  ByteOffset.QuadPart = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    result = sub_1800EA8E8(a3, &ByteOffset, &Length);
    if ( result >= 0 )
    {
      ByteOffset.HighPart = 0;
      v11 = Length;
      if ( Length + (unsigned __int64)ByteOffset.LowPart <= Buffer )
      {
        if ( a5 >= Length )
        {
          if ( a2 )
          {
            v12 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
          }
          else
          {
            v13 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
            LOBYTE(v14) = 1;
            v12 = v13;
            ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))sub_1800EB25C)(
              v14,
              a4,
              (LARGE_INTEGER)ByteOffset.QuadPart,
              v11);
          }
          if ( v12 >= 0 )
          {
            if ( a6 )
              *a6 = IoStatusBlock.Information;
          }
          return v12;
        }
        else
        {
          return -1073741789;
        }
      }
      else
      {
        return -1073741735;
      }
    }
  }
  return result;
}

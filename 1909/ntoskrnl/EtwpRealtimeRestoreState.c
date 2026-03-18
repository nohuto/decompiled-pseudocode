/*
 * XREFs of EtwpRealtimeRestoreState @ 0x140781794
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1406AD46C (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x140003B44 (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401C0D10 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401C0D50 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1401C0E70 (ZwQueryInformationFile.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreState(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  int UsedProcessorCount; // eax
  void *v5; // rcx
  __int128 v6; // xmm0
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-39h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-29h] BYREF
  __int64 FileInformation; // [rsp+68h] [rbp-21h] BYREF
  __int64 v10; // [rsp+70h] [rbp-19h]
  __int64 v11; // [rsp+78h] [rbp-11h]
  _OWORD Buffer[5]; // [rsp+80h] [rbp-9h] BYREF

  FileInformation = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  memset(Buffer, 0, 0x48uLL);
  result = ZwQueryInformationFile(
             *(HANDLE *)(a1 + 376),
             &IoStatusBlock,
             &FileInformation,
             0x18u,
             FileStandardInformation);
  if ( result >= 0 )
  {
    if ( !v10 )
      return 0;
    if ( v10 < 72 )
      return -1073741566;
    v3 = *(void **)(a1 + 376);
    ByteOffset.QuadPart = 0LL;
    result = ZwReadFile(v3, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
    if ( result >= 0 )
    {
      result = IoStatusBlock.Status;
      if ( IoStatusBlock.Status >= 0 )
      {
        if ( IoStatusBlock.Information != 72 )
          return -1073741807;
        if ( LODWORD(Buffer[0]) == 1933995090 && DWORD2(Buffer[0]) == 1 )
        {
          UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
          if ( HIDWORD(Buffer[0]) == UsedProcessorCount
            && LODWORD(Buffer[2])
            && *((__int64 *)&Buffer[2] + 1) <= *((__int64 *)&Buffer[3] + 1)
            && *(__int64 *)&Buffer[3] <= *((__int64 *)&Buffer[3] + 1)
            && *(_QWORD *)&Buffer[3] != *((_QWORD *)&Buffer[2] + 1)
            && *((_QWORD *)&Buffer[3] + 1) >= 0x48uLL
            && *((__int64 *)&Buffer[3] + 1) <= *(_QWORD *)(a1 + 432)
            && v10 >= *((__int64 *)&Buffer[3] + 1) )
          {
            v5 = *(void **)(a1 + 376);
            LODWORD(Buffer[0]) = 0;
            result = ZwWriteFile(v5, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
            if ( result < 0 )
              return result;
            v6 = Buffer[1];
            *(_DWORD *)(a1 + 440) = Buffer[2];
            *(_QWORD *)(a1 + 408) = *((_QWORD *)&Buffer[2] + 1);
            *(_QWORD *)(a1 + 400) = *(_QWORD *)&Buffer[3];
            *(_QWORD *)(a1 + 416) = *((_QWORD *)&Buffer[3] + 1);
            *(_QWORD *)(a1 + 424) = *(_QWORD *)&Buffer[4];
            *(_OWORD *)(a1 + 448) = v6;
            return 0;
          }
        }
        return -1073741566;
      }
    }
  }
  return result;
}

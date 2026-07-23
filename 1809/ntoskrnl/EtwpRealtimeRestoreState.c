/*
 * XREFs of EtwpRealtimeRestoreState @ 0x14075AB44
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwReadFile @ 0x1401B83B0 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwQueryInformationFile @ 0x1401B8510 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall EtwpRealtimeRestoreState(__int64 a1)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  int UsedProcessorCount; // eax
  void *v5; // rcx
  __int128 v6; // xmm0
  LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-31h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-19h] BYREF
  __int128 v10; // [rsp+80h] [rbp-9h]
  int v11; // [rsp+90h] [rbp+7h]
  signed __int64 v12; // [rsp+98h] [rbp+Fh]
  signed __int64 v13; // [rsp+A0h] [rbp+17h]
  signed __int64 v14; // [rsp+A8h] [rbp+1Fh]
  __int64 v15; // [rsp+B0h] [rbp+27h]
  _BYTE FileInformation[8]; // [rsp+C0h] [rbp+37h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+3Fh]

  result = ZwQueryInformationFile(
             *(HANDLE *)(a1 + 376),
             &IoStatusBlock,
             FileInformation,
             0x18u,
             FileStandardInformation);
  if ( result >= 0 )
  {
    if ( !v17 )
      return 0;
    if ( v17 < 72 )
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
        if ( Buffer[0] == 1933995090 && Buffer[2] == 1 )
        {
          UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
          if ( Buffer[3] == UsedProcessorCount
            && v11
            && v12 <= v14
            && v13 <= v14
            && v13 != v12
            && (unsigned __int64)v14 >= 0x48
            && v14 <= *(_QWORD *)(a1 + 432)
            && v17 >= v14 )
          {
            v5 = *(void **)(a1 + 376);
            Buffer[0] = 0;
            result = ZwWriteFile(v5, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
            if ( result < 0 )
              return result;
            v6 = v10;
            *(_DWORD *)(a1 + 440) = v11;
            *(_QWORD *)(a1 + 408) = v12;
            *(_QWORD *)(a1 + 400) = v13;
            *(_QWORD *)(a1 + 416) = v14;
            *(_QWORD *)(a1 + 424) = v15;
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

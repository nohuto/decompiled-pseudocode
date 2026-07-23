/*
 * XREFs of EtwpRealtimeSaveState @ 0x1406D12A4
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 * Callees:
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 */

__int64 __fastcall EtwpRealtimeSaveState(__int64 a1)
{
  NTSTATUS v2; // edi
  void *v3; // rcx
  int v5; // ecx
  __int128 v6; // xmm0
  __int64 v7; // rax
  int UsedProcessorCount; // eax
  void *v9; // rcx
  char FileInformation[8]; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-19h] BYREF
  _DWORD Buffer[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v14; // [rsp+80h] [rbp+7h]
  int v15; // [rsp+90h] [rbp+17h]
  int v16; // [rsp+94h] [rbp+1Bh]
  __int64 v17; // [rsp+98h] [rbp+1Fh]
  __int64 v18; // [rsp+A0h] [rbp+27h]
  __int64 v19; // [rsp+A8h] [rbp+2Fh]
  __int64 v20; // [rsp+B0h] [rbp+37h]

  v2 = -1073741823;
  if ( (*(_BYTE *)(a1 + 832) & 1) == 0 )
    goto LABEL_2;
  if ( !*(_QWORD *)(a1 + 376) )
    goto LABEL_7;
  v5 = *(_DWORD *)(a1 + 440);
  if ( !v5 )
    goto LABEL_7;
  v6 = *(_OWORD *)(a1 + 448);
  v17 = *(_QWORD *)(a1 + 408);
  v18 = *(_QWORD *)(a1 + 400);
  v16 = *(_DWORD *)(a1 + 4);
  v19 = *(_QWORD *)(a1 + 416);
  v7 = *(_QWORD *)(a1 + 424);
  v15 = v5;
  v20 = v7;
  v14 = v6;
  Buffer[0] = 1933995090;
  Buffer[2] = 1;
  UsedProcessorCount = EtwpQueryUsedProcessorCount(a1);
  v9 = *(void **)(a1 + 376);
  Buffer[1] = 0;
  ByteOffset.QuadPart = 0LL;
  Buffer[3] = UsedProcessorCount;
  v2 = ZwWriteFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x48u, &ByteOffset, 0LL);
  if ( v2 < 0 )
  {
LABEL_7:
    *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 440) = 0;
    *(_QWORD *)(a1 + 424) = 0LL;
LABEL_2:
    v3 = *(void **)(a1 + 376);
    FileInformation[0] = 1;
    ZwSetInformationFile(v3, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
  }
  return (unsigned int)v2;
}

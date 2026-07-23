/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x18005A560
 * Callers:
 *     EtwpLogger @ 0x180059EE0 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18010F094 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpFinalizeRelogFileHeaderStats @ 0x1800026A4 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x180002904 (EtwpWriteRemainingCompressedData.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x18004EDE0 (RtlNtStatusToDosError.c)
 *     EtwpAddProviderTrackingInfo @ 0x180051B90 (EtwpAddProviderTrackingInfo.c)
 *     EtwpAddReloggedPartitionInfoEvent @ 0x18005A834 (EtwpAddReloggedPartitionInfoEvent.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A03C0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A0400 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A07E0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A0C20 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS v6; // esi
  ULONG Length; // r15d
  unsigned int *Buffer; // r14
  void *v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  NTSTATUS v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // [rsp+50h] [rbp-29h] BYREF
  int v19; // [rsp+54h] [rbp-25h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 FileInformation; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v23; // [rsp+78h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v25; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v19 = 0;
  v18 = 0;
  if ( v4 )
  {
LABEL_2:
    if ( *(_QWORD *)(a1 + 464) != a1 + 464
      || *(_QWORD *)(a1 + 480) != a1 + 480
      || *(_QWORD *)(a1 + 520)
      || (*(_DWORD *)(a1 + 324) & 0x1000) != 0 )
    {
      Length = *(_DWORD *)(a1 + 208);
    }
    else
    {
      v6 = ZwQueryVolumeInformationFile(
             *(HANDLE *)(a1 + 144),
             &IoStatusBlock,
             FsInformation,
             0x18u,
             FileFsSizeInformation);
      if ( v6 < 0 )
        goto LABEL_25;
      Length = -v25 & (v25 + 7);
    }
    Buffer = (unsigned int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, Length);
    if ( !Buffer )
    {
      v6 = -1073741801;
      return RtlNtStatusToDosError(v6);
    }
    v9 = *(void **)(a1 + 144);
    ByteOffset.QuadPart = 0LL;
    v6 = NtReadFile(v9, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( v6 < 0 )
      goto LABEL_24;
    v10 = *Buffer;
    if ( Length < *Buffer )
      v10 = Length;
    if ( !a2 )
    {
      Buffer[29] = *(_DWORD *)(a1 + 204);
      Buffer[35] = *(_DWORD *)(a1 + 392);
      Buffer[38] += *(_DWORD *)(a1 + 384);
      Buffer[95] += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, (__int64)Buffer, v10, v19, v18);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    Buffer[12] = Buffer[1];
    EtwpAddReloggedPartitionInfoEvent(a1, Buffer, v10);
    EtwpAddProviderTrackingInfo(a1, (__int64)Buffer, v10);
    v12 = NtWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v10, &ByteOffset, 0LL);
    v6 = v12;
    if ( a2 )
      goto LABEL_24;
    if ( v12 < 0 )
      goto LABEL_24;
    v13 = *(_DWORD *)(a1 + 324);
    if ( (v13 & 0x4000020) == 0 )
      goto LABEL_24;
    if ( (v13 & 0x4000000) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 360);
    }
    else
    {
      v16 = *(unsigned int *)(a1 + 320);
      if ( (v13 & 0x2000) != 0 )
        v17 = v16 << 10;
      else
        v17 = v16 << 20;
      v14 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
      if ( v14 >= v17 )
        goto LABEL_24;
    }
    FileInformation = v14;
    if ( v14 )
      v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v23, &FileInformation, 8u, FileEndOfFileInformation);
LABEL_24:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    goto LABEL_25;
  }
  v6 = EtwpWriteRemainingCompressedData(a1, &v19, &v18);
  if ( v6 >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v19;
    *(_DWORD *)(a1 + 388) += v18;
    goto LABEL_2;
  }
LABEL_25:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}

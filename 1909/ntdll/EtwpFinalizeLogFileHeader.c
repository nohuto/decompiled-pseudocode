/*
 * XREFs of EtwpFinalizeLogFileHeader @ 0x1800878A0
 * Callers:
 *     EtwpLogger @ 0x18006D190 (EtwpLogger.c)
 *     EtwpBufferingModeFlush @ 0x18010D164 (EtwpBufferingModeFlush.c)
 * Callees:
 *     EtwpAddProviderTrackingInfo @ 0x180005210 (EtwpAddProviderTrackingInfo.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlNtStatusToDosError @ 0x180053CB0 (RtlNtStatusToDosError.c)
 *     EtwpAddReloggedHeaderExtensionEvents @ 0x180087AFC (EtwpAddReloggedHeaderExtensionEvents.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtReadFile @ 0x18009CF50 (NtReadFile.c)
 *     NtWriteFile @ 0x18009CF90 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x18009D370 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D7B0 (ZwQueryVolumeInformationFile.c)
 *     EtwpFinalizeRelogFileHeaderStats @ 0x18010DED4 (EtwpFinalizeRelogFileHeaderStats.c)
 *     EtwpWriteRemainingCompressedData @ 0x18010E854 (EtwpWriteRemainingCompressedData.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  int v6; // esi
  ULONG Length; // r15d
  unsigned int *Buffer; // r14
  void *v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  NTSTATUS v12; // eax
  int v13; // ecx
  unsigned __int64 v15; // rdx
  int v16; // [rsp+50h] [rbp-29h] BYREF
  int v17; // [rsp+54h] [rbp-25h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 FileInformation; // [rsp+60h] [rbp-19h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-11h] BYREF
  _IO_STATUS_BLOCK v21; // [rsp+78h] [rbp-1h] BYREF
  _BYTE FsInformation[20]; // [rsp+88h] [rbp+Fh] BYREF
  int v23; // [rsp+9Ch] [rbp+23h]

  v2 = 0;
  v4 = (*(_DWORD *)(a1 + 324) & 0x4000000) == 0;
  v17 = 0;
  v16 = 0;
  if ( !v4 )
  {
    v6 = EtwpWriteRemainingCompressedData(a1, &v17, &v16);
    if ( v6 < 0 )
      goto LABEL_22;
    *(_DWORD *)(a1 + 392) += v17;
    *(_DWORD *)(a1 + 388) += v16;
  }
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
      goto LABEL_22;
    Length = -v23 & (v23 + 7);
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
  if ( v6 >= 0 )
  {
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
          EtwpFinalizeRelogFileHeaderStats(a1, (_DWORD)Buffer, v10, v17, v16);
      }
      else
      {
        *((_QWORD *)Buffer + 15) = MEMORY[0x7FFE0014];
      }
    }
    Buffer[12] = Buffer[1];
    EtwpAddReloggedHeaderExtensionEvents(a1, Buffer, v10);
    EtwpAddProviderTrackingInfo(a1, (__int64)Buffer, v10);
    v12 = NtWriteFile(*(HANDLE *)(a1 + 144), 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v10, &ByteOffset, 0LL);
    v6 = v12;
    if ( !a2 && v12 >= 0 )
    {
      v13 = *(_DWORD *)(a1 + 324);
      if ( (v13 & 0x4000020) != 0 )
      {
        if ( (v13 & 0x4000000) != 0 )
        {
          v15 = *(_QWORD *)(a1 + 360);
          goto LABEL_31;
        }
        v15 = *(unsigned int *)(a1 + 208) * (unsigned __int64)*(unsigned int *)(a1 + 392);
        if ( v15 < *(unsigned int *)(a1 + 320)
                 * ((-(__int64)((*(_DWORD *)(a1 + 324) & 0x2000) != 0) & 0xFFFFFFFFFFF00400uLL) + 0x100000) )
        {
LABEL_31:
          FileInformation = v15;
          if ( v15 )
            v6 = ZwSetInformationFile(*(HANDLE *)(a1 + 144), &v21, &FileInformation, 8u, FileEndOfFileInformation);
        }
      }
    }
  }
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
LABEL_22:
  if ( v6 )
    return RtlNtStatusToDosError(v6);
  return v2;
}

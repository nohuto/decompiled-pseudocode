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
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtReadFile @ 0x1800A03A0 (NtReadFile.c)
 *     NtWriteFile @ 0x1800A03E0 (NtWriteFile.c)
 *     ZwSetInformationFile @ 0x1800A07C0 (ZwSetInformationFile.c)
 *     ZwQueryVolumeInformationFile @ 0x1800A0C00 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall EtwpFinalizeLogFileHeader(__int64 a1, char a2)
{
  unsigned int v2; // edi
  bool v4; // zf
  NTSTATUS VolumeInformationFile; // esi
  unsigned int v7; // r15d
  __int64 Heap; // r14
  __int64 v9; // rcx
  unsigned int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  int v18; // [rsp+50h] [rbp-29h] BYREF
  int v19; // [rsp+54h] [rbp-25h] BYREF
  __int64 v20; // [rsp+58h] [rbp-21h] BYREF
  unsigned __int64 v21; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v22[16]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v23[16]; // [rsp+78h] [rbp-1h] BYREF
  _BYTE v24[20]; // [rsp+88h] [rbp+Fh] BYREF
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
      v7 = *(_DWORD *)(a1 + 208);
    }
    else
    {
      VolumeInformationFile = ZwQueryVolumeInformationFile(*(_QWORD *)(a1 + 144), v22, v24, 24LL, 3);
      if ( VolumeInformationFile < 0 )
        goto LABEL_25;
      v7 = -v25 & (v25 + 7);
    }
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v7);
    if ( !Heap )
    {
      VolumeInformationFile = -1073741801;
      return RtlNtStatusToDosError(VolumeInformationFile);
    }
    v9 = *(_QWORD *)(a1 + 144);
    v20 = 0LL;
    VolumeInformationFile = NtReadFile(v9, 0LL, 0LL, 0LL, v22, Heap, v7, &v20, 0LL);
    if ( VolumeInformationFile < 0 )
      goto LABEL_24;
    v10 = *(_DWORD *)Heap;
    if ( v7 < *(_DWORD *)Heap )
      v10 = v7;
    if ( !a2 )
    {
      *(_DWORD *)(Heap + 116) = *(_DWORD *)(a1 + 204);
      *(_DWORD *)(Heap + 140) = *(_DWORD *)(a1 + 392);
      *(_DWORD *)(Heap + 152) += *(_DWORD *)(a1 + 384);
      *(_DWORD *)(Heap + 380) += *(_DWORD *)(a1 + 388);
      v11 = *(_DWORD *)(a1 + 324);
      if ( (v11 & 0x10000) != 0 )
      {
        if ( (v11 & 0x1000) != 0 )
          EtwpFinalizeRelogFileHeaderStats(a1, Heap, v10, v19, v18);
      }
      else
      {
        *(_QWORD *)(Heap + 120) = MEMORY[0x7FFE0014];
      }
    }
    *(_DWORD *)(Heap + 48) = *(_DWORD *)(Heap + 4);
    EtwpAddReloggedPartitionInfoEvent(a1, Heap, v10);
    EtwpAddProviderTrackingInfo(a1, Heap, v10);
    v12 = NtWriteFile(*(_QWORD *)(a1 + 144), 0LL, 0LL, 0LL, v22, Heap, v10, &v20, 0LL);
    VolumeInformationFile = v12;
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
    v21 = v14;
    if ( v14 )
      VolumeInformationFile = ZwSetInformationFile(*(_QWORD *)(a1 + 144), v23, &v21, 8LL, 20);
LABEL_24:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    goto LABEL_25;
  }
  VolumeInformationFile = EtwpWriteRemainingCompressedData(a1, &v19, &v18);
  if ( VolumeInformationFile >= 0 )
  {
    *(_DWORD *)(a1 + 392) += v19;
    *(_DWORD *)(a1 + 388) += v18;
    goto LABEL_2;
  }
LABEL_25:
  if ( VolumeInformationFile )
    return RtlNtStatusToDosError(VolumeInformationFile);
  return v2;
}

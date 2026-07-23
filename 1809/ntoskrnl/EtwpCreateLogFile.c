/*
 * XREFs of EtwpCreateLogFile @ 0x14069ACBC
 * Callers:
 *     EtwpLogger @ 0x1405C2430 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x14065A360 (EtwpStartLogger.c)
 *     EtwpBufferingModeFlush @ 0x1408BF2D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     PsImpersonateClient @ 0x140638B90 (PsImpersonateClient.c)
 *     EtwpSendSessionNotification @ 0x140659F28 (EtwpSendSessionNotification.c)
 *     EtwpUpdateFileHeader @ 0x14069AFDC (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14069B2B4 (EtwpDelayCreate.c)
 *     EtwpFinalizeHeader @ 0x14069B5BC (EtwpFinalizeHeader.c)
 *     SeImpersonateClientEx @ 0x14069C0E0 (SeImpersonateClientEx.c)
 *     EtwpExpandFileName @ 0x14069C128 (EtwpExpandFileName.c)
 */

__int64 __fastcall EtwpCreateLogFile(__int64 a1, char a2)
{
  char v4; // r12
  char v5; // r15
  __int128 v6; // xmm0
  char v7; // si
  NTSTATUS updated; // r14d
  HANDLE v9; // rsi
  __int64 v10; // rdx
  void *v11; // r15
  bool v12; // zf
  __int128 v14; // xmm1
  char v15; // al
  char v16; // al
  UNICODE_STRING v17; // xmm1
  bool v18; // [rsp+30h] [rbp-39h]
  HANDLE FileHandle; // [rsp+38h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-29h] BYREF
  __int128 v21; // [rsp+50h] [rbp-19h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-9h] BYREF
  _DWORD FileInformation[10]; // [rsp+70h] [rbp+7h] BYREF

  FileHandle = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_DWORD *)(a1 + 832) & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a1 + 836), 0xFFFFFFFC);
    if ( *(_QWORD *)(a1 + 176) || *(_QWORD *)(a1 + 208) )
    {
      if ( *(_QWORD *)(a1 + 208) )
      {
        v6 = *(_OWORD *)(a1 + 200);
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 832) & 2) != 0 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          EtwpExpandFileName(0LL, a1 + 168, *(unsigned int *)(a1 + 312), a1 + 152);
          v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
        }
        v6 = *(_OWORD *)(a1 + 168);
      }
      v7 = (*(_DWORD *)(a1 + 832) & 2) != 0;
      v18 = (*(_BYTE *)(a1 + 12) & 4) != 0;
      v21 = v6;
      if ( a2 == 1 )
      {
        if ( *(_QWORD *)(a1 + 736) )
        {
          updated = SeImpersonateClientEx((PSECURITY_CLIENT_CONTEXT)(a1 + 720), 0LL);
          v5 = 1;
          if ( updated < 0 )
            goto LABEL_17;
        }
      }
      updated = EtwpDelayCreate((__int64)&FileHandle, 0, v7);
      if ( v5 == 1 )
        PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
      if ( updated < 0 )
      {
        v9 = FileHandle;
      }
      else
      {
        memset(FileInformation, 0, sizeof(FileInformation));
        FileInformation[8] = 0x2000;
        v9 = FileHandle;
        ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
        v11 = *(void **)(a1 + 816);
        if ( v11 )
          EtwpFinalizeHeader(a1, *(_QWORD *)(a1 + 816), 0LL);
        else
          v4 = 1;
        v12 = *(_QWORD *)(a1 + 208) == 0LL;
        *(_QWORD *)(a1 + 816) = v9;
        if ( !v12 )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v14 = *(_OWORD *)(a1 + 200);
          DestinationString = *(UNICODE_STRING *)(a1 + 168);
          *(_OWORD *)(a1 + 168) = v14;
          v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL);
          if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString((PUNICODE_STRING)(a1 + 200), 0LL);
          v9 = FileHandle;
        }
        LOBYTE(v10) = v18;
        updated = EtwpUpdateFileHeader(a1, v10);
        if ( updated < 0 )
        {
          *(_QWORD *)(a1 + 816) = v11;
        }
        else
        {
          if ( !v4 )
            EtwpSendSessionNotification(a1, 1u, 0);
          v9 = 0LL;
          FileHandle = 0LL;
          if ( !v11 )
            goto LABEL_17;
          ZwClose(v11);
        }
      }
      if ( v9 )
      {
        ZwClose(v9);
        if ( *(_QWORD *)(a1 + 816) && DestinationString.Buffer )
        {
          ExAcquirePushLockExclusiveEx(a1 + 704, 0LL);
          v17 = DestinationString;
          *(_OWORD *)(a1 + 200) = *(_OWORD *)(a1 + 168);
          *(UNICODE_STRING *)(a1 + 168) = v17;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
          KeAbPostRelease(a1 + 704);
          RtlInitUnicodeString(&DestinationString, 0LL);
        }
      }
LABEL_17:
      RtlFreeAnsiString((PUNICODE_STRING)(a1 + 200));
      RtlFreeAnsiString(&DestinationString);
      return (unsigned int)updated;
    }
  }
  return 0LL;
}

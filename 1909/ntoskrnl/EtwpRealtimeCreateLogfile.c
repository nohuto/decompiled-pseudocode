/*
 * XREFs of EtwpRealtimeCreateLogfile @ 0x1406AD46C
 * Callers:
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004178 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlCreateUnicodeString @ 0x140694F30 (RtlCreateUnicodeString.c)
 *     EtwpSendSessionNotification @ 0x1406A9B10 (EtwpSendSessionNotification.c)
 *     EtwpDelayCreate @ 0x1406AE5E8 (EtwpDelayCreate.c)
 *     EtwpExpandFileName @ 0x1406AF148 (EtwpExpandFileName.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1406AF504 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeRestoreState @ 0x140781794 (EtwpRealtimeRestoreState.c)
 *     EtwpRealtimeUpdateReferenceTime @ 0x140787F3C (EtwpRealtimeUpdateReferenceTime.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1409002B8 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeCreateLogfile(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r14
  __int64 v4; // rax
  SIZE_T v5; // rbp
  wchar_t *PoolWithTag; // rax
  WCHAR *v7; // rdi
  NTSTATUS v8; // eax
  WCHAR *v9; // rcx
  WCHAR i; // ax
  __int64 v11; // rcx
  int updated; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF

  result = 0LL;
  v2 = a1 + 376;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !*(_QWORD *)(a1 + 376) )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    if ( *(_WORD *)(a1 + 384) )
      goto LABEL_20;
    v4 = -1LL;
    do
      ++v4;
    while ( *(_WORD *)(*(_QWORD *)(a1 + 160) + 2 * v4) );
    v5 = 2LL * (unsigned int)(v4 + 9) + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v5, 0x50777445u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      v8 = RtlStringCbPrintfW(PoolWithTag, v5, L"EtwRT%ws.etl", *(_QWORD *)(a1 + 160));
      v9 = v7;
      if ( !v8 )
      {
        for ( i = *v7; i; i = *v9 )
        {
          if ( i == 34 || i == 47 || i == 58 || i == 60 || i > 0x3Du && (i <= 0x3Fu || i == 92 || i == 124) )
            *v9 = 95;
          ++v9;
        }
        if ( RtlCreateUnicodeString((PUNICODE_STRING)(a1 + 384), EtwpRTBacklogFileRoot) )
        {
          RtlInitUnicodeString(&DestinationString, v7);
          LOBYTE(v11) = 1;
          updated = EtwpExpandFileName(v11, a1 + 384, 0LL, &DestinationString);
          if ( updated >= 0 )
          {
LABEL_20:
            updated = EtwpDelayCreate(v2, 1, 1);
            if ( updated >= 0 )
            {
              *(_QWORD *)(a1 + 408) = 72LL;
              *(_QWORD *)(a1 + 400) = 72LL;
              *(_QWORD *)(a1 + 416) = 72LL;
              if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
              {
                updated = EtwpRealtimeRestoreState(a1);
                if ( updated < 0 )
                  goto LABEL_32;
                if ( *(_DWORD *)(a1 + 440) )
                  updated = EtwpRealtimeUpdateReferenceTime(a1, a1 + 320);
                if ( updated < 0 )
                {
LABEL_32:
                  EtwpRealtimeZeroTruncateLogfile(a1);
                  EtwpRealtimeResetReferenceTime(a1);
                  *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
                  *(_DWORD *)(a1 + 464) = 3;
                  *(_DWORD *)(a1 + 440) = 0;
                  EtwpSendSessionNotification(a1, 4u, 0xC0000102);
                  updated = 0;
                }
              }
            }
          }
        }
        else
        {
          updated = -1073741801;
        }
        RtlFreeAnsiString(&DestinationString);
        return (unsigned int)updated;
      }
      ExFreePoolWithTag(v7, 0);
      return 3221225485LL;
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}

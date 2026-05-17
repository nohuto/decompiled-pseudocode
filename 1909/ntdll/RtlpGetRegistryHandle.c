/*
 * XREFs of RtlpGetRegistryHandle @ 0x180003D40
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180002B80 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180002FD8 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x180003260 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180003474 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x18008B800 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008C010 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800EB3E0 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EB658 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x180029BA0 (RtlFreeAnsiString.c)
 *     NtdllpAllocateStringRoutine @ 0x18006D908 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x18006D930 (NtdllpFreeStringRoutine.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 *     ZwCreateKey @ 0x18009D230 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v8; // rbx
  int appended; // ebx
  int v10; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 StringRoutine; // [rsp+50h] [rbp-1h]
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp+7h] BYREF
  int v14; // [rsp+68h] [rbp+17h] BYREF
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  __int128 v18; // [rsp+88h] [rbp+37h]

  if ( (a1 & 0x40000000) != 0 )
  {
    *a4 = a2;
    return 0LL;
  }
  else
  {
    v8 = (unsigned int)a1;
    LODWORD(v8) = a1 & 0x7FFFFFFF;
    if ( a1 >= 0 )
      v8 = (unsigned int)a1;
    if ( (unsigned int)v8 >= 6 )
    {
      return 3221225485LL;
    }
    else
    {
      StringRoutine = NtdllpAllocateStringRoutine(524LL, a2);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_12;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&v11, &UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&v11, RtlpRegistryPaths[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString(&v11, a2);
            if ( appended >= 0 )
            {
              v14 = 48;
              v16 = &v11;
              v15 = 0LL;
              v17 = 576;
              v18 = 0LL;
              if ( a3 )
                v10 = ZwCreateKey(a4, 0x40000000LL, &v14, 0LL, 0LL, 0, 0LL);
              else
                v10 = NtOpenKey(a4, 2181038080LL, &v14);
              appended = v10;
            }
          }
        }
        NtdllpFreeStringRoutine(StringRoutine);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}

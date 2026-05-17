/*
 * XREFs of RtlpGetRegistryHandle @ 0x180053FCC
 * Callers:
 *     RtlpQueryTimeZoneInformationWorker @ 0x180052E00 (RtlpQueryTimeZoneInformationWorker.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x180053260 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     RtlCheckRegistryKey @ 0x1800534F0 (RtlCheckRegistryKey.c)
 *     RtlpQueryRegistryValues @ 0x180053704 (RtlpQueryRegistryValues.c)
 *     RtlWriteRegistryValue @ 0x18008E780 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008F3B0 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800EE240 (RtlCreateRegistryKey.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EE4E8 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     NtdllpAllocateStringRoutine @ 0x18000EB60 (NtdllpAllocateStringRoutine.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18003F560 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180041260 (RtlAppendUnicodeToString.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A0680 (ZwCreateKey.c)
 */

__int64 __fastcall RtlpGetRegistryHandle(int a1, _WORD *a2, char a3, _QWORD *a4)
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
      StringRoutine = NtdllpAllocateStringRoutine(524LL);
      if ( StringRoutine )
      {
        v11 = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_12;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString((unsigned __int16 *)&v11, (__int16 *)&UnicodeString);
          RtlFreeAnsiString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, *((_WORD **)&RtlpRegistryPaths + v8));
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, L"\\");
          if ( appended >= 0 )
          {
LABEL_12:
            appended = RtlAppendUnicodeToString((unsigned __int16 *)&v11, a2);
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

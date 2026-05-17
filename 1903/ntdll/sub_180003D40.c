/*
 * XREFs of sub_180003D40 @ 0x180003D40
 * Callers:
 *     sub_180002B80 @ 0x180002B80 (sub_180002B80.c)
 *     sub_180002FD8 @ 0x180002FD8 (sub_180002FD8.c)
 *     RtlCheckRegistryKey @ 0x180003260 (RtlCheckRegistryKey.c)
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 *     RtlWriteRegistryValue @ 0x18008B160 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x18008B970 (RtlDeleteRegistryValue.c)
 *     RtlCreateRegistryKey @ 0x1800EB2F0 (RtlCreateRegistryKey.c)
 *     sub_1800EB568 @ 0x1800EB568 (sub_1800EB568.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlAppendUnicodeToString @ 0x180015120 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwCreateKey @ 0x18009CA80 (ZwCreateKey.c)
 */

__int64 __fastcall sub_180003D40(int a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v8; // rbx
  int appended; // ebx
  int v10; // eax
  int v11; // [rsp+48h] [rbp-9h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1h]
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
      v12 = sub_18006D6B8(524LL, a2);
      if ( v12 )
      {
        v11 = 34340864;
        if ( !(_DWORD)v8 )
          goto LABEL_12;
        if ( (_DWORD)v8 == 5 && (int)RtlFormatCurrentUserKeyPath(&UnicodeString) >= 0 )
        {
          appended = RtlAppendUnicodeStringToString(&v11, &UnicodeString);
          RtlFreeUnicodeString(&UnicodeString);
        }
        else
        {
          appended = RtlAppendUnicodeToString(&v11, qword_180118C20[v8]);
        }
        if ( appended >= 0 )
        {
          appended = RtlAppendUnicodeToString(&v11, "\\");
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
                v10 = ZwOpenKey(a4, 2181038080LL, &v14);
              appended = v10;
            }
          }
        }
        RtlDeleteBoundaryDescriptor(v12);
        return (unsigned int)appended;
      }
      else
      {
        return 3221225495LL;
      }
    }
  }
}

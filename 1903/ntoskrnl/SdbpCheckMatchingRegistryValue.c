/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x140922848
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x14092265C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1409234CC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslStringPatternMatchW @ 0x14074B8C0 (AslStringPatternMatchW.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        unsigned __int16 *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v12; // r15
  unsigned __int16 *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  int v16; // eax
  NTSTATUS v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  _DWORD *v21; // r14
  bool v22; // zf
  unsigned __int16 *v23; // rax
  unsigned __int16 *v24; // rcx
  unsigned __int16 *v26; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int16 *v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  SourceString = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !Str1 || !*Str1 )
    goto LABEL_35;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v16 = AslStringDuplicate((wchar_t **)&SourceString, Str1);
    v12 = (WCHAR *)SourceString;
    if ( v16 < 0 )
      goto LABEL_40;
    RtlInitUnicodeString(&DestinationString, SourceString);
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
  v17 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v17 < 0 && v17 != -2147483643 && v17 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_40;
  }
  v14 = AslAlloc(v18, ResultLength);
  if ( !v14 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_40;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v14, ResultLength, &ResultLength) < 0 )
    goto LABEL_14;
  v20 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_36;
  }
  if ( v20 != a3 )
    goto LABEL_17;
  v21 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  if ( !v20 )
    goto LABEL_14;
  if ( v20 <= 2 )
  {
    v26 = (unsigned __int16 *)AslAlloc(v19, (unsigned int)v14[3] + 2LL);
    v13 = v26;
    if ( !v26 )
      goto LABEL_14;
    memmove(v26, v21, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
    goto LABEL_48;
  }
  switch ( v20 )
  {
    case 3u:
      if ( Size != v14[3] )
        goto LABEL_49;
      v22 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
      goto LABEL_34;
    case 4u:
      v22 = a5 == *v21;
LABEL_34:
      if ( v22 )
      {
LABEL_35:
        v15 = 1;
        *a9 = 1;
        goto LABEL_36;
      }
LABEL_49:
      v15 = 1;
      goto LABEL_36;
    case 7u:
      v23 = (unsigned __int16 *)AslAlloc(v19, (unsigned int)v14[3] + 2LL);
      v13 = v23;
      if ( !v23 )
        break;
      memmove(v23, v21, (unsigned int)v14[3]);
      v24 = v13;
      for ( v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
            v24 < (unsigned __int16 *)((char *)v13 + (v14[3] & 0xFFFFFFFE));
            ++v24 )
      {
        if ( !*v24 )
        {
          if ( !v24[1] )
            break;
          *v24 = 59;
        }
      }
LABEL_48:
      if ( (unsigned int)AslStringPatternMatchW(v30, v13) )
        goto LABEL_35;
      goto LABEL_49;
    case 0xBu:
      v22 = a6 == *(_QWORD *)v21;
      goto LABEL_34;
  }
LABEL_14:
  AslLogCallPrintf(1LL);
LABEL_36:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x74705041u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
LABEL_40:
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v15;
}

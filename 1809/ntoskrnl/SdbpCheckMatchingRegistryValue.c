/*
 * XREFs of SdbpCheckMatchingRegistryValue @ 0x1408E7428
 * Callers:
 *     SdbpCheckMatchingRegistryEntry @ 0x1408E723C (SdbpCheckMatchingRegistryEntry.c)
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1408E80BC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140092360 (RtlStringCchCopyW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlStringCchCatW @ 0x1400F5038 (RtlStringCchCatW.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslStringDuplicate @ 0x14067D684 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 */

__int64 __fastcall SdbpCheckMatchingRegistryValue(
        HANDLE KeyHandle,
        wchar_t *Str1,
        int a3,
        WCHAR *a4,
        int a5,
        __int64 a6,
        void *Buf1,
        size_t Size,
        _DWORD *a9)
{
  WCHAR *v12; // r13
  wchar_t *v13; // r14
  _DWORD *v14; // rdi
  unsigned int v15; // ebx
  const WCHAR *v16; // rdx
  int v17; // eax
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  _DWORD *v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // eax
  _DWORD *v23; // rsi
  bool v24; // zf
  wchar_t *v26; // rax
  NTSTATUS v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  wchar_t *v31; // rax
  PCWSTR SourceString; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+98h] [rbp+48h] BYREF
  WCHAR *v35; // [rsp+A8h] [rbp+58h]

  v35 = a4;
  SourceString = 0LL;
  ResultLength = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !Str1 || !*Str1 )
    goto LABEL_27;
  if ( wcsicmp(Str1, L"dbRegistryDefaultName") )
  {
    v17 = AslStringDuplicate((wchar_t **)&SourceString, Str1);
    v12 = (WCHAR *)SourceString;
    if ( v17 < 0 )
      goto LABEL_33;
    v16 = SourceString;
  }
  else
  {
    v16 = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, v16);
  v18 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, 0LL, 0, &ResultLength);
  if ( v18 < 0 && v18 != -2147483643 && v18 != -1073741789 )
  {
    v15 = 1;
    goto LABEL_33;
  }
  v20 = AslAlloc(v19, ResultLength);
  v14 = v20;
  if ( !v20 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_33;
  }
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValueFullInformation, v20, ResultLength, &ResultLength) < 0 )
    goto LABEL_14;
  v22 = v14[1];
  if ( !a3 )
  {
    *a9 = 1;
LABEL_17:
    v15 = 1;
    goto LABEL_29;
  }
  if ( v22 != a3 )
    goto LABEL_17;
  v23 = (_DWORD *)((char *)v14 + (unsigned int)v14[2]);
  if ( !v22 )
    goto LABEL_14;
  if ( v22 <= 2 )
  {
    v31 = (wchar_t *)AslAlloc(v21, (unsigned int)v14[3] + 2LL);
    v13 = v31;
    if ( !v31 )
      goto LABEL_14;
    memmove(v31, v23, (unsigned int)v14[3]);
    v13[(unsigned __int64)(unsigned int)v14[3] >> 1] = 0;
    goto LABEL_50;
  }
  switch ( v22 )
  {
    case 3u:
      if ( Size != v14[3] )
        goto LABEL_28;
      v24 = memcmp(Buf1, (char *)v14 + (unsigned int)v14[2], Size) == 0;
LABEL_26:
      if ( !v24 )
      {
LABEL_28:
        v15 = 1;
        goto LABEL_29;
      }
LABEL_27:
      *a9 = 1;
      goto LABEL_28;
    case 4u:
      v24 = a5 == *v23;
      goto LABEL_26;
    case 7u:
      v26 = (wchar_t *)AslAlloc(v21, (unsigned int)v14[3]);
      v13 = v26;
      if ( !v26 )
        break;
      for ( *v26 = 0; *(_WORD *)v23; v23 = (_DWORD *)((char *)v23 + 2 * v30 + 2) )
      {
        if ( *v13 )
        {
          v28 = -1LL;
          do
            ++v28;
          while ( v13[v28] );
          if ( RtlStringCchCatW(v13, (unsigned int)v14[3] - v28, L";") < 0 )
            goto LABEL_14;
          v29 = -1LL;
          do
            ++v29;
          while ( v13[v29] );
          v27 = RtlStringCchCatW(v13, (unsigned int)v14[3] - v29, (NTSTRSAFE_PCWSTR)v23);
        }
        else
        {
          v27 = RtlStringCchCopyW(v13, (unsigned int)v14[3], (NTSTRSAFE_PCWSTR)v23);
        }
        if ( v27 < 0 )
          goto LABEL_14;
        v30 = -1LL;
        do
          ++v30;
        while ( *((_WORD *)v23 + v30) );
      }
LABEL_50:
      if ( !(unsigned int)AslStringPatternMatchW(v35, v13) )
        goto LABEL_28;
      goto LABEL_27;
    case 0xBu:
      v24 = a6 == *(_QWORD *)v23;
      goto LABEL_26;
  }
LABEL_14:
  AslLogCallPrintf(1LL);
LABEL_29:
  if ( v14 )
    ExFreePoolWithTag(v14, 0x74705041u);
  if ( v13 )
    ExFreePoolWithTag(v13, 0x74705041u);
LABEL_33:
  if ( v12 )
    ExFreePoolWithTag(v12, 0x74705041u);
  return v15;
}

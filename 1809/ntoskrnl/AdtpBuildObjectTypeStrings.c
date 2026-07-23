/*
 * XREFs of AdtpBuildObjectTypeStrings @ 0x1408F1608
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AdtpBuildGuidString @ 0x1408EFD1C (AdtpBuildGuidString.c)
 *     AdtpAppendString @ 0x1408F0F78 (AdtpAppendString.c)
 *     AdtpAppendZString @ 0x1408F111C (AdtpAppendZString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildObjectTypeStrings(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        char *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  size_t v7; // r15
  _BYTE *v8; // rdi
  __int64 v10; // r14
  int v11; // r12d
  char *v12; // rsi
  int v13; // r8d
  char v14; // di
  int appended; // ebx
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-50h]
  char v20[4]; // [rsp+50h] [rbp-20h] BYREF
  int v21; // [rsp+54h] [rbp-1Ch] BYREF
  UNICODE_STRING v22; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v21 = 0;
  v7 = a4;
  RtlInitUnicodeString(DestinationString, &word_1403620BC);
  v8 = a6;
  *a6 = 0;
  if ( !(_DWORD)v7 )
    return 0LL;
  qsort(a3, v7, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v10 = 0LL;
  v11 = *((_DWORD *)a3 + 5) - 1;
  v12 = a3 + 18;
  do
  {
    v13 = *(_DWORD *)(v12 + 2);
    if ( v13 != v11 )
    {
      v11 = *(_DWORD *)(v12 + 2);
      if ( v13 )
      {
        appended = AdtpBuildAccessesString(a1, a2, v13, 1, &v22, 0LL, 0LL, 0LL, &v26);
        if ( appended < 0 )
          return (unsigned int)appended;
        v14 = v26;
      }
      else
      {
        RtlInitUnicodeString(&v22, L"---\r\n");
        v14 = 0;
        LOBYTE(v26) = 0;
      }
      appended = AdtpAppendString((__int64)DestinationString, (__int64)a6, &v22, &v21);
      if ( v14 )
        ExFreePoolWithTag(v22.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      v8 = a6;
    }
    v16 = *(_WORD *)v12;
    if ( *(_WORD *)v12 >= 4u )
      v16 = 3;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v8, off_140357348[v16], &v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    v20[0] = 0;
    appended = AdtpBuildGuidString((unsigned int *)&a3[24 * v10], (__int64)&v22, v17, v18, v19, v20);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString((__int64)DestinationString, (__int64)v8, &v22, &v21);
    ExFreePoolWithTag(v22.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v8, L"\r\n", &v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    v10 = (unsigned int)(v10 + 1);
    v12 += 24;
  }
  while ( (unsigned int)v10 < (unsigned int)v7 );
  return 0;
}

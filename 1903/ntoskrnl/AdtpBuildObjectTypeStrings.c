/*
 * XREFs of AdtpBuildObjectTypeStrings @ 0x14092DFCC
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     qsort @ 0x1401A0AD0 (qsort.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AdtpBuildGuidString @ 0x14092C98C (AdtpBuildGuidString.c)
 *     AdtpAppendString @ 0x14092D910 (AdtpAppendString.c)
 *     AdtpAppendZString @ 0x14092DAC0 (AdtpAppendZString.c)
 *     AdtpBuildAccessesString @ 0x14092DB18 (AdtpBuildAccessesString.c)
 */

__int64 __fastcall AdtpBuildObjectTypeStrings(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        char *a3,
        unsigned int a4,
        PUNICODE_STRING DestinationString,
        _BYTE *a6)
{
  const UNICODE_STRING *v6; // rbx
  size_t v8; // r15
  _BYTE *v9; // rdi
  __int64 v11; // r14
  int v12; // r12d
  char *v13; // rsi
  int v14; // r8d
  char v15; // di
  int appended; // ebx
  unsigned __int16 v17; // ax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // [rsp+20h] [rbp-50h]
  char v21[4]; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  UNICODE_STRING v23; // [rsp+58h] [rbp-18h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h] BYREF

  v22 = 0;
  v6 = a2;
  *(_QWORD *)&v23.Length = 0LL;
  v23.Buffer = 0LL;
  v8 = a4;
  RtlInitUnicodeString(DestinationString, &word_1403811CC);
  v9 = a6;
  *a6 = 0;
  if ( !(_DWORD)v8 )
    return 0LL;
  qsort(a3, v8, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v11 = 0LL;
  v12 = *((_DWORD *)a3 + 5) - 1;
  v13 = a3 + 18;
  do
  {
    v14 = *(_DWORD *)(v13 + 2);
    if ( v14 != v12 )
    {
      v12 = *(_DWORD *)(v13 + 2);
      if ( v14 )
      {
        appended = AdtpBuildAccessesString(a1, v6, v14, 1, &v23, 0LL, 0LL, 0LL, &v26);
        if ( appended < 0 )
          return (unsigned int)appended;
        v15 = v26;
      }
      else
      {
        RtlInitUnicodeString(&v23, L"---\r\n");
        v15 = 0;
        LOBYTE(v26) = 0;
      }
      appended = AdtpAppendString((__int64)DestinationString, (__int64)a6, &v23, &v22);
      if ( v15 )
        ExFreePoolWithTag(v23.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      v9 = a6;
    }
    v17 = *(_WORD *)v13;
    if ( *(_WORD *)v13 >= 4u )
      v17 = 3;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v9, off_140376430[v17], &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v21[0] = 0;
    appended = AdtpBuildGuidString((unsigned int *)&a3[24 * v11], (__int64)&v23, v18, v19, v20, v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString((__int64)DestinationString, (__int64)v9, &v23, &v22);
    ExFreePoolWithTag(v23.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)v9, L"\r\n", &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v6 = a2;
    v11 = (unsigned int)(v11 + 1);
    v13 += 24;
  }
  while ( (unsigned int)v11 < (unsigned int)v8 );
  return 0;
}

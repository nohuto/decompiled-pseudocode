/*
 * XREFs of EtwpExpandFileName @ 0x1406B9A58
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1406B7D7C (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x1406B87D4 (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400E6EE0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x1406B9CB0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r15
  char v7; // r14
  unsigned __int16 Length; // di
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned __int16 *CurrentServerSiloGlobals; // rax
  __int64 v14; // r8
  SIZE_T v15; // rax
  SIZE_T v16; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v18; // rdi
  const WCHAR *v19; // rsi
  _QWORD *v20; // rax
  NTSTATUS v21; // eax
  unsigned int v22; // esi
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  size_t v27; // rbx
  const WCHAR *v28; // rsi
  unsigned __int64 v29; // [rsp+40h] [rbp-48h]
  UNICODE_STRING v30; // [rsp+48h] [rbp-40h] BYREF
  int v31; // [rsp+98h] [rbp+10h]

  *(_QWORD *)&v30.Length = 0LL;
  v6 = 0;
  v30.Buffer = 0LL;
  v7 = 0;
  RtlInitUnicodeString(&v30, L"%SystemRoot%");
  Length = v30.Length;
  v11 = a2->Length;
  v12 = v30.Length;
  v31 = v30.Length;
  v29 = (unsigned __int64)v30.Length >> 1;
  if ( (unsigned int)v11 <= v30.Length )
    v12 = a2->Length;
  if ( RtlCompareUnicodeStrings(a2->Buffer, v12 >> 1, v30.Buffer, (unsigned __int64)v30.Length >> 1, 1u) )
  {
    if ( !a3 && !a1 )
      return 0LL;
    v14 = v11 + 2;
  }
  else
  {
    v6 = 1;
    CurrentServerSiloGlobals = (unsigned __int16 *)PsGetCurrentServerSiloGlobals();
    if ( (_WORD)v11 == Length )
    {
      v14 = *a4 + 56LL + CurrentServerSiloGlobals[524];
    }
    else
    {
      v14 = a2->Length - v31 + 2 + (unsigned int)CurrentServerSiloGlobals[524];
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] == 92 )
      {
        v7 = 1;
        v14 += *a4;
      }
    }
  }
  v15 = v14 + 8;
  if ( !a3 )
    v15 = v14;
  v16 = v15;
  if ( a1 && !v6 )
  {
    v7 = 1;
    v16 = v15 + *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v16, 0x50777445u);
  v18 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v6 )
    {
      if ( a2->Length == v30.Length )
      {
        v24 = PsGetCurrentServerSiloGlobals();
        v21 = RtlStringCbPrintfW(
                v18,
                v16,
                L"%ws%ws%ws%ws",
                v24[132],
                L"\\system32\\Logfiles\\WMI\\",
                *((_QWORD *)a4 + 1),
                L".etl");
      }
      else
      {
        if ( v7 )
          v19 = (const WCHAR *)*((_QWORD *)a4 + 1);
        else
          v19 = &word_14078CDD0;
        v20 = PsGetCurrentServerSiloGlobals();
        v21 = RtlStringCbPrintfW(v18, v16, L"%ws%ws%ws", v20[132], &a2->Buffer[v29], v19);
      }
    }
    else if ( a1 )
    {
      if ( v7 )
        v28 = (const WCHAR *)*((_QWORD *)a4 + 1);
      else
        v28 = &word_14078CDD0;
      v21 = RtlStringCbPrintfW(PoolWithTag, v16, L"%ws%ws", a2->Buffer, v28);
    }
    else
    {
      v21 = RtlStringCbPrintfW(PoolWithTag, v16, L"%ws", a2->Buffer);
    }
    v22 = v21;
    if ( a3 )
    {
      v25 = -1LL;
      v26 = -1LL;
      do
        ++v26;
      while ( v18[v26] );
      v27 = v16 - 2 * v26;
      do
        ++v25;
      while ( v18[v25] );
      v22 = RtlStringCbPrintfW(&v18[v25], v27, L".%03d", a3);
    }
    RtlFreeAnsiString(a2);
    RtlInitUnicodeString(a2, v18);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v22;
}

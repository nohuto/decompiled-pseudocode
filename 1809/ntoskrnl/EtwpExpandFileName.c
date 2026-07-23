/*
 * XREFs of EtwpExpandFileName @ 0x14069C128
 * Callers:
 *     EtwpRealtimeCreateLogfile @ 0x1405C1F90 (EtwpRealtimeCreateLogfile.c)
 *     EtwpCreateLogFile @ 0x14069ACBC (EtwpCreateLogFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400161B0 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlCompareUnicodeStrings @ 0x14069C310 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall EtwpExpandFileName(char a1, UNICODE_STRING *a2, unsigned int a3, unsigned __int16 *a4)
{
  char v6; // r14
  unsigned __int16 Length; // di
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  LONG v12; // r15d
  __int64 result; // rax
  unsigned __int16 *CurrentServerSiloGlobals; // rax
  __int64 v15; // r8
  SIZE_T v16; // rax
  SIZE_T v17; // rbx
  wchar_t *PoolWithTag; // rax
  wchar_t *v19; // rdi
  const WCHAR *v20; // rsi
  _QWORD *v21; // rax
  NTSTATUS v22; // eax
  unsigned int v23; // esi
  __int64 v24; // rcx
  __int64 v25; // rax
  size_t v26; // rbx
  _QWORD *v27; // rax
  const WCHAR *v28; // rsi
  UNICODE_STRING v29; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v30; // [rsp+88h] [rbp+10h]

  v6 = 0;
  RtlInitUnicodeString(&v29, L"%SystemRoot%");
  Length = v29.Length;
  v10 = a2->Length;
  v11 = v29.Length;
  v30 = (unsigned __int64)v29.Length >> 1;
  if ( (unsigned int)v10 <= v29.Length )
    v11 = a2->Length;
  v12 = RtlCompareUnicodeStrings(a2->Buffer, v11 >> 1, v29.Buffer, (unsigned __int64)v29.Length >> 1, 1u);
  result = 0LL;
  if ( v12 )
  {
    if ( !a3 && !a1 )
      return result;
    v15 = v10 + 2;
  }
  else
  {
    CurrentServerSiloGlobals = (unsigned __int16 *)PsGetCurrentServerSiloGlobals();
    if ( (_WORD)v10 == Length )
    {
      v15 = *a4 + 56LL + CurrentServerSiloGlobals[532];
    }
    else
    {
      v15 = a2->Length - Length + 2 + (unsigned int)CurrentServerSiloGlobals[532];
      if ( a2->Buffer[((unsigned __int64)a2->Length >> 1) - 1] == 92 )
      {
        v6 = 1;
        v15 += *a4;
      }
    }
  }
  v16 = v15 + 8;
  if ( !a3 )
    v16 = v15;
  v17 = v16;
  if ( a1 && v12 )
  {
    v6 = 1;
    v17 = v16 + *a4;
  }
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x50777445u);
  v19 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( v12 )
    {
      if ( a1 )
      {
        if ( v6 )
          v28 = (const WCHAR *)*((_QWORD *)a4 + 1);
        else
          v28 = &word_140767740;
        v22 = RtlStringCbPrintfW(PoolWithTag, v17, L"%ws%ws", a2->Buffer, v28);
      }
      else
      {
        v22 = RtlStringCbPrintfW(PoolWithTag, v17, L"%ws", a2->Buffer);
      }
    }
    else if ( a2->Length == v29.Length )
    {
      v27 = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(
              v19,
              v17,
              L"%ws%ws%ws%ws",
              v27[134],
              L"\\system32\\Logfiles\\WMI\\",
              *((_QWORD *)a4 + 1),
              L".etl");
    }
    else
    {
      if ( v6 )
        v20 = (const WCHAR *)*((_QWORD *)a4 + 1);
      else
        v20 = &word_140767740;
      v21 = PsGetCurrentServerSiloGlobals();
      v22 = RtlStringCbPrintfW(v19, v17, L"%ws%ws%ws", v21[134], &a2->Buffer[v30], v20);
    }
    v23 = v22;
    if ( a3 )
    {
      v24 = -1LL;
      v25 = -1LL;
      do
        ++v25;
      while ( v19[v25] );
      v26 = v17 - 2 * v25;
      do
        ++v24;
      while ( v19[v24] );
      v23 = RtlStringCbPrintfW(&v19[v24], v26, L".%03d", a3);
    }
    RtlFreeAnsiString(a2);
    RtlInitUnicodeString(a2, v19);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v23;
}

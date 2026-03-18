/*
 * XREFs of EtwpGenerateFileName @ 0x1406BA198
 * Callers:
 *     EtwpStartLogger @ 0x1406B5160 (EtwpStartLogger.c)
 *     EtwpFlushBufferToLogfile @ 0x1406B9FF0 (EtwpFlushBufferToLogfile.c)
 *     EtwpIncrementTraceFile @ 0x1408F2E5C (EtwpIncrementTraceFile.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x1400040E8 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     wcschr @ 0x1401A1F20 (wcschr.c)
 *     wcsrchr @ 0x1401A2110 (wcsrchr.c)
 *     wcsstr @ 0x1401A21A0 (wcsstr.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 */

__int64 __fastcall EtwpGenerateFileName(unsigned __int16 *a1, volatile signed __int32 *a2, UNICODE_STRING *a3)
{
  const wchar_t *v5; // rcx
  wchar_t *v7; // rdi
  signed __int32 v8; // ebp
  __int64 v9; // r14
  unsigned __int32 v10; // ebp
  wchar_t *PoolWithTag; // rax
  WCHAR *v12; // rdi

  v5 = (const wchar_t *)*((_QWORD *)a1 + 1);
  if ( !v5 )
    return 3221225520LL;
  v7 = wcschr(v5, 0x25u);
  if ( v7 && v7 == wcsrchr(*((const wchar_t **)a1 + 1), 0x25u) && wcsstr(*((const wchar_t **)a1 + 1), L"%d") )
  {
    v8 = _InterlockedExchangeAdd(a2, 1u);
    v9 = a1[1];
    v10 = v8 + 1;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9 + 64, 0x50777445u);
    v12 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
    if ( !RtlStringCbPrintfW(PoolWithTag, v9 + 64, *((NTSTRSAFE_PCWSTR *)a1 + 1), v10)
      && memcmp(*((const void **)a1 + 1), v12, *a1) )
    {
      RtlFreeAnsiString(a3);
      RtlInitUnicodeString(a3, v12);
      return 0LL;
    }
    ExFreePoolWithTag(v12, 0);
    return 3221225520LL;
  }
  return 3221225523LL;
}

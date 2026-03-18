/*
 * XREFs of EtwpCoverageAddToStringBuffer @ 0x14012B204
 * Callers:
 *     EtwTelemetryCoverageReport @ 0x14015C790 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageRecord @ 0x1406D6714 (EtwpCoverageRecord.c)
 * Callees:
 *     RtlStringCchCopyA @ 0x14012B250 (RtlStringCchCopyA.c)
 */

__int64 __fastcall EtwpCoverageAddToStringBuffer(__int64 a1, const char *a2, int a3)
{
  size_t v4; // rdi
  char *v5; // rcx
  size_t v7; // rdx

  v4 = (unsigned int)(a3 + 1);
  v5 = *(char **)(a1 + 24);
  v7 = *(_QWORD *)(a1 + 16) - (_QWORD)v5;
  if ( v7 < v4 )
    return 0LL;
  RtlStringCchCopyA(v5, v7, a2);
  *(_QWORD *)(a1 + 24) += v4;
  return 1LL;
}

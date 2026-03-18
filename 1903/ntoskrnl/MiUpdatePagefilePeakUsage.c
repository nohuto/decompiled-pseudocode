/*
 * XREFs of MiUpdatePagefilePeakUsage @ 0x14014B054
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiGatherPagefilePages @ 0x14014A9AC (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiUpdatePagefilePeakUsage(_QWORD *a1)
{
  unsigned __int64 v1; // rdx

  v1 = *a1 - a1[3] - 1LL;
  if ( a1[4] < v1 )
    a1[4] = v1;
}

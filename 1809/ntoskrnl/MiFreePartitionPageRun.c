/*
 * XREFs of MiFreePartitionPageRun @ 0x140860364
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402D0018 (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiFreeMdlPageRun @ 0x140029DE0 (MiFreeMdlPageRun.c)
 *     MiReleaseNonPagedResources @ 0x1400E18C8 (MiReleaseNonPagedResources.c)
 */

ULONG_PTR *__fastcall MiFreePartitionPageRun(ULONG_PTR *a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  ULONG_PTR *result; // rax
  ULONG_PTR *v6; // rbx

  result = (ULONG_PTR *)MiFreeMdlPageRun(a2, a3, a4 == 1);
  v6 = result;
  if ( result )
  {
    MiReleaseNonPagedResources((__int64)a1, (unsigned __int64)result);
    result = &MiSystemPartition;
    if ( a1 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14043B018, -(__int64)v6);
  }
  return result;
}

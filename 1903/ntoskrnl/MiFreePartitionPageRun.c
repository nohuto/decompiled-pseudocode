/*
 * XREFs of MiFreePartitionPageRun @ 0x14089C784
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 * Callees:
 *     MiIsPfn @ 0x140005EA0 (MiIsPfn.c)
 *     MiReleaseNonPagedResources @ 0x1400AD49C (MiReleaseNonPagedResources.c)
 *     MiFreeMdlPageRun @ 0x1400F04E4 (MiFreeMdlPageRun.c)
 *     MiInsertHugeRangeInList @ 0x1402C27AC (MiInsertHugeRangeInList.c)
 */

unsigned __int64 __fastcall MiFreePartitionPageRun(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  char v7; // si
  unsigned __int64 result; // rax
  int v9; // r9d
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx

  v7 = a4 == 1;
  result = MiIsPfn(a2);
  if ( (_DWORD)result )
  {
    result = MiFreeMdlPageRun(a2, a3);
    v12 = result;
    if ( result )
    {
      MiReleaseNonPagedResources((__int64)a1, result);
      result = (unsigned __int64)&MiSystemPartition;
      if ( a1 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_140466A38, -(__int64)v12);
    }
  }
  else
  {
    v10 = (a2 >> 18) & 0x3FFFF;
    v11 = a3 >> 18;
    if ( v9 == 1 )
      v7 = 1;
    for ( ; v11; --v11 )
    {
      MiInsertHugeRangeInList(v10, v7, 0LL);
      result = (v10 ^ (v10 + 1)) & 0x3FFFF;
      v10 ^= result;
    }
  }
  return result;
}

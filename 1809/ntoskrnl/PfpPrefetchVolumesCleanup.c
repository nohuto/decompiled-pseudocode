/*
 * XREFs of PfpPrefetchVolumesCleanup @ 0x14065CAB0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x14065CB5C (PfpPrefetchRequestPerform.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 */

void __fastcall PfpPrefetchVolumesCleanup(_QWORD *a1)
{
  char *v2; // rcx
  unsigned int v3; // edi
  char *v4; // rdx
  unsigned __int64 v5; // rsi

  v2 = (char *)a1[2];
  if ( v2 )
  {
    v3 = 0;
    if ( *(_DWORD *)(*a1 + 8LL) )
    {
      do
      {
        v4 = v2;
        v5 = (unsigned __int64)v3 << 6;
        if ( (*(_QWORD *)&v2[v5 + 56] & 0x400000000LL) != 0 )
        {
          PfpOpenHandleClose(&v2[v5 + 32], a1[5]);
          v2 = (char *)a1[2];
          v4 = v2;
        }
        if ( (*(_QWORD *)&v4[v5 + 24] & 0x400000000LL) != 0 )
        {
          PfpOpenHandleClose(&v4[v5], a1[5]);
          v2 = (char *)a1[2];
          v4 = v2;
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(*a1 + 8LL) );
      v2 = v4;
    }
    ExFreePoolWithTag(v2, 0);
    a1[2] = 0LL;
  }
}

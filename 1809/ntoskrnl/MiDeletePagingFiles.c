/*
 * XREFs of MiDeletePagingFiles @ 0x140854460
 * Callers:
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     MiShutdownSystem @ 0x14057CBF4 (MiShutdownSystem.c)
 * Callees:
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiDeletePagefile @ 0x140854350 (MiDeletePagefile.c)
 */

__int64 __fastcall MiDeletePagingFiles(__int64 a1)
{
  unsigned int v1; // eax
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  char **v5; // r14
  __int64 v6; // rbp
  char *v7; // rcx

  v1 = *(_DWORD *)(a1 + 7128);
  v2 = 0LL;
  v3 = 0LL;
  if ( v1 )
  {
    v5 = (char **)(a1 + 7136);
    v6 = v1;
    do
    {
      v7 = *v5;
      if ( *v5 )
      {
        if ( (v7[204] & 0x50) == 0 )
        {
          v3 += *(_QWORD *)v7;
          v2 += 2LL;
        }
        MiDeletePagefile(v7, 1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
    if ( v2 )
      MiReturnCommit(a1, v2);
  }
  return v3;
}

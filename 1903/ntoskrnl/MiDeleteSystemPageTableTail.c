/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x1401254A0
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x14004FFE0 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140125544 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x1401255D0 (MiFreeUnmappedPageTables.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiDeleteSystemPageTableTail(__int64 a1)
{
  int **v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int *v6; // rcx
  __int64 v8; // rbx
  _QWORD v9[7]; // [rsp+20h] [rbp-38h] BYREF

  memset(v9, 0, 0x30uLL);
  v2 = *(int ***)(a1 + 160);
  MiFlushTbList(v2[2], v3, v4, v5);
  v6 = v2[1];
  if ( v6 )
  {
    MiFreeUnmappedPageTables(v6, v9);
    v2[1] = 0LL;
    if ( v9[3] )
    {
      if ( qword_14046A5E8 )
      {
        v8 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 174LL));
        MiReturnCommit(v8, v9[3] - v9[1]);
        MiReturnSystemCharges(v8, v9[3], *(unsigned int *)v2);
      }
    }
  }
  return 0LL;
}

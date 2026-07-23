/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140120800
 * Callers:
 *     <none>
 * Callees:
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiReturnSystemCharges @ 0x1401208A4 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x140120930 (MiFreeUnmappedPageTables.c)
 *     memset @ 0x1401D1980 (memset.c)
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

  memset(v9, 0, 0x28uLL);
  v2 = *(int ***)(a1 + 168);
  MiFlushTbList(v2[2], v3, v4, v5);
  v6 = v2[1];
  if ( v6 )
  {
    MiFreeUnmappedPageTables(v6, v9);
    v2[1] = 0LL;
    if ( v9[3] )
    {
      if ( qword_14043F868 )
      {
        v8 = *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
        MiReturnCommit(v8, v9[3] - v9[1]);
        MiReturnSystemCharges(v8, v9[3], *(unsigned int *)v2);
      }
    }
  }
  return 0LL;
}

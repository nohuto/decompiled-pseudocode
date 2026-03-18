/*
 * XREFs of MiDeleteSystemPageTableTail @ 0x140125B10
 * Callers:
 *     <none>
 * Callees:
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnSystemCharges @ 0x140125BB4 (MiReturnSystemCharges.c)
 *     MiFreeUnmappedPageTables @ 0x140125C40 (MiFreeUnmappedPageTables.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
      if ( qword_14046A328 )
      {
        v8 = *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 174LL));
        MiReturnCommit(v8, v9[3] - v9[1]);
        MiReturnSystemCharges(v8, v9[3], *(unsigned int *)v2);
      }
    }
  }
  return 0LL;
}

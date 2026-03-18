/*
 * XREFs of MiDeletePteWsleCluster @ 0x14012EFA0
 * Callers:
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 * Callees:
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiTerminateWsleCluster @ 0x14004E000 (MiTerminateWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x140058CD0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

void __fastcall MiDeletePteWsleCluster(__int64 a1, __int64 a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v8; // rdx
  _QWORD v9[24]; // [rsp+30h] [rbp-F8h] BYREF

  memset(v9, 0, 0xB8uLL);
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    WORD2(v9[0]) = 0;
    v9[2] = 0LL;
    v9[3] = 0LL;
    LODWORD(v9[0]) = 1;
    LODWORD(v9[1]) = 20;
    MiInsertTbFlushEntry((__int64)v9, v8 << 25 >> 16, *(_QWORD *)(a1 + 16), 0);
    MiTerminateWsleCluster(a1);
    MiDeletePteList((__int64)v9, a2, a3, a4, 0);
  }
}

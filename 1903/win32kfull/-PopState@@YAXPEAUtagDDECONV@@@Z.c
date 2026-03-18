/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C0209AAC
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209FA0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A360 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A970 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020ABA0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AFA0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B100 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B3F0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C304 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C020B630 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  char *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-48h]
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h]
  __int64 v19; // [rsp+50h] [rbp-18h]

  v4 = (char *)a1 + 56;
  v5 = *((_QWORD *)a1 + 7);
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v17 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v17;
  v18 = v5;
  HMLockObject(v5);
  *(_QWORD *)&v15 = v4;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 24LL);
  *((_QWORD *)&v15 + 1) = v8;
  v16 = v15;
  v9 = HMAssignmentLock(&v16);
  v10 = (char *)a1 + 64;
  if ( v8 )
    v10 = (char *)(v9 + 24);
  HMAssignmentUnlock(v10);
  v14 = ThreadUnlock1(v12, v11, v13);
  if ( v14 )
    FreeDdeXact(v14);
}

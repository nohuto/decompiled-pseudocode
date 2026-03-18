/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C02097FC
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C0209CF0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A0B0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A6C0 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020A8F0 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020ACF0 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020AE50 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C020B140 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C020C054 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C020B380 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2, __int64 a3)
{
  char *v3; // rdi
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // [rsp+20h] [rbp-48h]
  __int128 v15; // [rsp+30h] [rbp-38h] BYREF
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  v3 = (char *)a1 + 56;
  v4 = *((_QWORD *)a1 + 7);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v16 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
  v17 = v4;
  HMLockObject(v4);
  *(_QWORD *)&v14 = v3;
  v7 = *(_QWORD *)(*(_QWORD *)v3 + 24LL);
  *((_QWORD *)&v14 + 1) = v7;
  v15 = v14;
  v8 = HMAssignmentLock(&v15);
  v9 = (char *)a1 + 64;
  if ( v7 )
    v9 = (char *)(v8 + 24);
  HMAssignmentUnlock(v9);
  v13 = ThreadUnlock1(v11, v10, v12);
  if ( v13 )
    FreeDdeXact(v13);
}

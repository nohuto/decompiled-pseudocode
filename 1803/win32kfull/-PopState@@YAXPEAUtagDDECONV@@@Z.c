/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01CF130
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF450 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CF6E0 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFA40 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFB80 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFE70 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01CFF40 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01D01D0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01D0C2C (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C01D0380 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2)
{
  char *v2; // rdi
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int128 v13; // [rsp+20h] [rbp-48h]
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+40h] [rbp-28h] BYREF

  v2 = (char *)a1 + 56;
  v4 = *((_QWORD *)a1 + 7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v15;
  v15[1] = v4;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)&v13 = v2;
  v6 = *(_QWORD *)(*(_QWORD *)v2 + 24LL);
  *((_QWORD *)&v13 + 1) = v6;
  v14 = v13;
  v7 = HMAssignmentLock(&v14);
  v8 = (char *)a1 + 64;
  if ( v6 )
    v8 = (char *)(v7 + 24);
  HMAssignmentUnlock(v8);
  v12 = ThreadUnlock1(v10, v9, v11);
  if ( v12 )
    FreeDdeXact(v12);
}

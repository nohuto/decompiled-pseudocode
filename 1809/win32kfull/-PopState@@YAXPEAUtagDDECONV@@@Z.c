/*
 * XREFs of ?PopState@@YAXPEAUtagDDECONV@@@Z @ 0x1C01F37A0
 * Callers:
 *     ?xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F3AF0 (-xxxAdviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F3D90 (-xxxAdviseDataAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4100 (-xxxDupConvTerminate@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4250 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4550 (-xxxPokeAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F4620 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01F48C0 (-xxxUnadviseAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxFreeDdeConv @ 0x1C01F53A8 (xxxFreeDdeConv.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     FreeDdeXact @ 0x1C01F4A70 (FreeDdeXact.c)
 */

void __fastcall PopState(struct tagDDECONV *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  _QWORD *v13; // [rsp+20h] [rbp-38h] BYREF
  __int64 v14; // [rsp+28h] [rbp-30h]
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (_QWORD *)((char *)a1 + 56);
  v4 = *((_QWORD *)a1 + 7);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v15[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v15;
  v15[1] = v4;
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v6 = *v2;
  v13 = v2;
  v14 = *(_QWORD *)(v6 + 24);
  v7 = v14;
  v8 = HMAssignmentLock(&v13);
  v9 = (char *)a1 + 64;
  if ( v7 )
    v9 = (char *)(v8 + 24);
  HMAssignmentUnlock(v9);
  v12 = ThreadUnlock1(v11, v10);
  if ( v12 )
    FreeDdeXact(v12);
}

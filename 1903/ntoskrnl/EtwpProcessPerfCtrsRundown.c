/*
 * XREFs of EtwpProcessPerfCtrsRundown @ 0x1408FC248
 * Callers:
 *     EtwpProcessEnumCallback @ 0x140707DB0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ObGetProcessHandleCount @ 0x1406CD780 (ObGetProcessHandleCount.c)
 */

void __fastcall EtwpProcessPerfCtrsRundown(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rdx
  _QWORD v7[14]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v8; // [rsp+A0h] [rbp+37h] BYREF
  int v9; // [rsp+A8h] [rbp+3Fh]
  int v10; // [rsp+ACh] [rbp+43h]

  memset((char *)v7 + 4, 0, 0x64uLL);
  LODWORD(v7[0]) = *(_DWORD *)(a1 + 744);
  LODWORD(v7[1]) = ObGetProcessHandleCount((struct _EX_RUNDOWN_REF *)a1, 0LL);
  HIDWORD(v7[0]) = *(_DWORD *)(a1 + 1284);
  v7[7] = *(_QWORD *)(a1 + 832);
  v7[2] = *(_QWORD *)(a1 + 824);
  v7[8] = *(_QWORD *)(a1 + 1400) << 12;
  v7[3] = *(_QWORD *)(a1 + 1440) << 12;
  v7[10] = *(_QWORD *)(a1 + 800);
  v7[5] = *(_QWORD *)(a1 + 816);
  v7[11] = *(_QWORD *)(a1 + 792);
  v7[6] = *(_QWORD *)(a1 + 808);
  v7[9] = *(_QWORD *)(a1 + 1264) << 12;
  v4 = *(_QWORD *)(a1 + 1272);
  v10 = 0;
  v5 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 1112);
  v7[4] = v4 << 12;
  v7[12] = v7[9];
  v8 = v7;
  v9 = 104;
  EtwpLogKernelEvent((__int64)&v8, v6, v5, 1u, 0x321u, 0x401802u);
}

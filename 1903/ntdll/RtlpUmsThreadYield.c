/*
 * XREFs of RtlpUmsThreadYield @ 0x1800A1453
 * Callers:
 *     RtlUmsThreadYield @ 0x1800F3B10 (RtlUmsThreadYield.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpUmsThreadYield()
{
  __int64 v0; // rbx
  __int64 v1; // rbp
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int128 v8; // xmm6
  __int128 v9; // xmm7
  __int128 v10; // xmm8
  __int128 v11; // xmm9
  __int128 v12; // xmm10
  __int128 v13; // xmm11
  __int128 v14; // xmm12
  __int128 v15; // xmm13
  __int128 v16; // xmm14
  __int128 v17; // xmm15
  PVOID v18; // rdx
  unsigned __int64 v19; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h]
  char v23; // [rsp+8h] [rbp+8h] BYREF

  v18 = NtCurrentTeb()->TlsSlots[4];
  *((_DWORD *)v18 + 316) &= ~4u;
  v19 = ((unsigned __int64)v18 + 1375) & 0xFFFFFFFFFFFFFFC0uLL;
  *(_OWORD *)(v19 + 256) = v8;
  *(_OWORD *)(v19 + 272) = v9;
  *(_OWORD *)(v19 + 288) = v10;
  *(_OWORD *)(v19 + 304) = v11;
  *(_OWORD *)(v19 + 320) = v12;
  *(_OWORD *)(v19 + 336) = v13;
  *(_OWORD *)(v19 + 352) = v14;
  *(_OWORD *)(v19 + 368) = v15;
  *(_OWORD *)(v19 + 384) = v16;
  *(_OWORD *)(v19 + 400) = v17;
  *(_DWORD *)(v19 + 24) = _mm_getcsr();
  __asm { fnclex }
  *((_QWORD *)v18 + 20) = v0;
  *((_QWORD *)v18 + 22) = v1;
  *((_QWORD *)v18 + 23) = v3;
  *((_QWORD *)v18 + 24) = v2;
  *((_QWORD *)v18 + 29) = v4;
  *((_QWORD *)v18 + 30) = v5;
  *((_QWORD *)v18 + 31) = v6;
  *((_QWORD *)v18 + 32) = v7;
  *((_QWORD *)v18 + 21) = &v23;
  *((_QWORD *)v18 + 33) = retaddr;
  _R11 = *(_QWORD *)(*((_QWORD *)v18 + 160) + 1248LL);
  __asm { wrgsbase r11 }
  _InterlockedAnd64((volatile signed __int64 *)v18 + 159, 3uLL);
  return RtlpUmsExecuteYieldThreadEnd();
}

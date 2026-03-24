/*
 * XREFs of SymCryptSha256Init @ 0x1401B0B90
 * Callers:
 *     SymCryptSha256 @ 0x1401AF318 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1401B21A0 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401B2420 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14035A498;
  *(_OWORD *)(a1 + 112) = xmmword_14035A4A8;
}

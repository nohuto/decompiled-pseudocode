/*
 * XREFs of SymCryptSha256Init @ 0x1401B0CD0
 * Callers:
 *     SymCryptSha256 @ 0x1401AF458 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1401B22E0 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401B2560 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14035B398;
  *(_OWORD *)(a1 + 112) = xmmword_14035B3A8;
}

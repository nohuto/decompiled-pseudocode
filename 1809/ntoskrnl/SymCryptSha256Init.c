/*
 * XREFs of SymCryptSha256Init @ 0x1401B0B70
 * Callers:
 *     SymCryptSha256 @ 0x1401AF2F8 (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1401B2180 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1401B2400 (SymCryptParallelSha256ResultDone.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_14035A398;
  *(_OWORD *)(a1 + 112) = xmmword_14035A3A8;
}

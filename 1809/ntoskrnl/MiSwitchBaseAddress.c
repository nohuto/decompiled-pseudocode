/*
 * XREFs of MiSwitchBaseAddress @ 0x140650E74
 * Callers:
 *     MiRelocateImageAgain @ 0x140650760 (MiRelocateImageAgain.c)
 * Callees:
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiApplyBytestreamFixup @ 0x14013B0DC (MiApplyBytestreamFixup.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 */

__int64 __fastcall MiSwitchBaseAddress(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 i; // rax
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 v14; // rbx
  __int64 *v15; // rax

  v4 = *a1;
  v5 = a3;
  v7 = *(_QWORD *)(a1[12] + 32LL);
  v8 = a2 - *(_QWORD *)(*a1 + 32LL);
  v9 = *(_QWORD *)(v7 + 40);
  *(_QWORD *)(v7 + 40) = v8;
  *(_QWORD *)(v4 + 32) = a2;
  **(_QWORD **)(v4 + 56) += *(_QWORD *)(v7 + 40);
  for ( i = *(_QWORD *)(v7 + 16); i; i = *v13 )
    MiApplyBytestreamFixup((__int64)a1, (_QWORD *)(i + 24), v9);
  MiWalkEntireImage((ULONG_PTR)a1, v5, 2u, a4);
  *(_QWORD *)(v7 + 40) = v8 + v9;
  result = *(_QWORD *)(v7 + 16);
  if ( result )
  {
    v14 = -v9;
    do
    {
      MiApplyBytestreamFixup(v11, (_QWORD *)(result + 24), v14);
      result = *v15;
    }
    while ( result );
  }
  if ( (*(_WORD *)(v4 + 12) & 0x2000) != 0 )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v4 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 57343LL;
    *(_WORD *)(v4 + 12) &= ~0x2000u;
  }
  return result;
}

/*
 * XREFs of MiUpdatePfnProtection @ 0x1402BF74C
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x140085AF0 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiSanitizePfnProtection @ 0x140074040 (MiSanitizePfnProtection.c)
 */

__int64 __fastcall MiUpdatePfnProtection(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = 0;
  v3 = a3;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a2 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v8, a2, a3);
    while ( *(__int64 *)(a2 + 24) < 0 );
  }
  result = MiSanitizePfnProtection(a1, (*(_QWORD *)(a2 + 16) >> 5) & 0x1F, v3);
  *(_QWORD *)(a2 + 16) = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(32 * result)) & 0x3E0;
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

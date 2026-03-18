/*
 * XREFs of MiFreeRegistryPageRange @ 0x1409FE414
 * Callers:
 *     MmFreeLoaderBlock @ 0x1409FDF14 (MmFreeLoaderBlock.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 *     MiDecrementShareCount @ 0x1400BB990 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiFreeRegistryPageRange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v8; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  result = MiSwizzleInvalidPte(128LL);
  v5 = result;
  if ( v6 )
  {
    v7 = 48 * v4 - 0x57FFFFFFFE8LL;
    do
    {
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9);
        while ( *(__int64 *)v7 < 0 );
      }
      v8 = *(_BYTE *)(v7 + 10) | 0x10;
      *(_QWORD *)(v7 - 8) = v5;
      *(_BYTE *)(v7 + 10) = v8;
      MiDecrementShareCount(v7 - 24);
      result = 0x7FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)v7, 0x7FFFFFFFFFFFFFFFuLL);
      v7 += 48LL;
      --a2;
    }
    while ( a2 );
  }
  return result;
}

/*
 * XREFs of MiFreeRegistryPageRange @ 0x1409C6664
 * Callers:
 *     MmFreeLoaderBlock @ 0x1409C6164 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x14003D7C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiDecrementShareCount @ 0x140081E90 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiFreeRegistryPageRange(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdi
  char v8; // al
  int v9; // [rsp+38h] [rbp+10h] BYREF

  result = MiSwizzleInvalidPte(128LL);
  v6 = result;
  if ( v4 )
  {
    v7 = 48 * v5 - 0x57FFFFFFFE8LL;
    do
    {
      v9 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v9, v4, v5);
        while ( *(__int64 *)v7 < 0 );
      }
      v8 = *(_BYTE *)(v7 + 10) | 0x10;
      *(_QWORD *)(v7 - 8) = v6;
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

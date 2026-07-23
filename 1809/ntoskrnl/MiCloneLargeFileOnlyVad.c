/*
 * XREFs of MiCloneLargeFileOnlyVad @ 0x140853B74
 * Callers:
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140042770 (MiGetProtoPteAddress.c)
 *     MiDecrementLargeSubsections @ 0x1402B5A04 (MiDecrementLargeSubsections.c)
 *     MiIncrementLargeSubsections @ 0x1402B634C (MiIncrementLargeSubsections.c)
 */

__int64 __fastcall MiCloneLargeFileOnlyVad(__int64 a1)
{
  __int64 *v2; // rsi
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+38h] [rbp+10h] BYREF

  MiGetProtoPteAddress(a1, *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32), 0, &v6);
  MiGetProtoPteAddress(a1, *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32), 0, &v7);
  v2 = v6;
  v3 = v6;
  if ( (unsigned int)MiIncrementLargeSubsections(v6, *((unsigned int *)v6 + 11)) != -1 )
  {
    do
    {
      if ( v3 == v7 )
        return 0LL;
      v4 = v3;
      v3 = (__int64 *)v3[2];
    }
    while ( (unsigned int)MiIncrementLargeSubsections(v3, *((unsigned int *)v3 + 11)) != -1 );
    if ( v4 )
      MiDecrementLargeSubsections(v2, v4);
  }
  return 3221225626LL;
}

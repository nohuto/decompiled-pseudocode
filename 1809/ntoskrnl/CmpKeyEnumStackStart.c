/*
 * XREFs of CmpKeyEnumStackStart @ 0x140800BE0
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x1407FBB34 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140800D30 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     CmpStartKeyNodeStack @ 0x1407FB69C (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140800858 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, __int16 a2)
{
  __int64 v4; // rbp
  PVOID TransientPoolWithTag; // rax
  __int64 v6; // rsi

  if ( a2 >= 2 )
  {
    LOWORD(v4) = a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (__int64)(__int16)(a2 - 1) << 7, 0x38364D43u);
    v6 = 0LL;
    *(_QWORD *)(a1 + 344) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v4 > 0 )
    {
      v4 = (unsigned __int16)v4;
      do
      {
        CmpKeyEnumStackEntryInitialize(v6 + *(_QWORD *)(a1 + 344));
        v6 += 128LL;
        --v4;
      }
      while ( v4 );
    }
  }
  *(_WORD *)a1 = a2;
  return CmpStartKeyNodeStack(a1 + 8, a2);
}

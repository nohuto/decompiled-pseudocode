/*
 * XREFs of CmpKeyEnumStackStart @ 0x140838D80
 * Callers:
 *     CmpSubtreeEnumeratorStart @ 0x140833CF8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140838ED0 (CmpKeyEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     CmpStartKeyNodeStack @ 0x140833838 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x1408389F0 (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  __int64 v6; // rbp
  PVOID TransientPoolWithTag; // rax
  __int64 v8; // rsi

  if ( a2 >= 2 )
  {
    LOWORD(v6) = a2 - 1;
    TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, (__int64)(__int16)(a2 - 1) << 7, 0x38364D43u, a4);
    v8 = 0LL;
    *(_QWORD *)(a1 + 344) = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    if ( (__int16)v6 > 0 )
    {
      v6 = (unsigned __int16)v6;
      do
      {
        CmpKeyEnumStackEntryInitialize(v8 + *(_QWORD *)(a1 + 344));
        v8 += 128LL;
        --v6;
      }
      while ( v6 );
    }
  }
  *(_WORD *)a1 = a2;
  return CmpStartKeyNodeStack(a1 + 8, a2, a3, a4);
}

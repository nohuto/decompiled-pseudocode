/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x1407FBB34
 * Callers:
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1407FBC48 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x1407FBC84 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpStartKcbStack @ 0x140644FF0 (CmpStartKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x1407FB69C (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140800A94 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStart @ 0x140800BE0 (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2)
{
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // rbp
  _WORD *v7; // rdi
  __int16 v8; // bx
  __int64 v9; // rdi

  *(_WORD *)(a1 + 2) = a2;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x33000uLL, 0x31394D43u);
  *(_QWORD *)(a1 + 96) = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return 3221225626LL;
  v5 = 0LL;
  v6 = 512LL;
  do
  {
    v7 = (_WORD *)(v5 + *(_QWORD *)(a1 + 96));
    memset(v7, 0, 0x198uLL);
    memset(v7 + 12, 0, 0x20uLL);
    v7[13] = -1;
    CmpKeyEnumStackInitialize(v7 + 28);
    v5 += 408LL;
    --v6;
  }
  while ( v6 );
  v8 = 0;
  while ( 1 )
  {
    v9 = *(_QWORD *)(a1 + 96) + 408LL * v8;
    result = CmpStartKcbStack(v9 + 24, *(_WORD *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    result = CmpKeyEnumStackStart(v9 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    if ( ++v8 >= 512 )
      return CmpStartKeyNodeStack(a1 + 16, *(_WORD *)(a1 + 2));
  }
  return result;
}

/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x140833CF8
 * Callers:
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x140833DFC (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpSubtreeEnumeratorStartForKeyNodeStack @ 0x140833E38 (CmpSubtreeEnumeratorStartForKeyNodeStack.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpStartKcbStack @ 0x1405FCF70 (CmpStartKcbStack.c)
 *     CmpStartKeyNodeStack @ 0x140833838 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackInitialize @ 0x140838C34 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStart @ 0x140838D80 (CmpKeyEnumStackStart.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  PVOID TransientPoolWithTag; // rax
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  _WORD *v9; // rbx
  __int64 v10; // r8
  struct _LOOKASIDE_LIST_EX *v11; // r9
  __int16 v12; // bx
  __int64 v13; // rsi

  *(_WORD *)(a1 + 2) = a2;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 0x33000uLL, 0x31394D43u, a4);
  *(_QWORD *)(a1 + 96) = TransientPoolWithTag;
  if ( !TransientPoolWithTag )
    return 3221225626LL;
  v7 = 0LL;
  v8 = 512LL;
  do
  {
    v9 = (_WORD *)(v7 + *(_QWORD *)(a1 + 96));
    memset(v9, 0, 0x198uLL);
    v9[13] = -1;
    CmpKeyEnumStackInitialize(v9 + 28);
    v7 += 408LL;
    --v8;
  }
  while ( v8 );
  v12 = 0;
  while ( 1 )
  {
    v13 = *(_QWORD *)(a1 + 96) + 408LL * v12;
    result = CmpStartKcbStack(v13 + 24, *(_WORD *)(a1 + 2), v10, v11);
    if ( (int)result < 0 )
      break;
    result = CmpKeyEnumStackStart(v13 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      break;
    if ( ++v12 >= 512 )
      return CmpStartKeyNodeStack(a1 + 16, *(_WORD *)(a1 + 2), v10, v11);
  }
  return result;
}

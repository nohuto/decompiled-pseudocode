/*
 * XREFs of CmpStartKeyNodeStack @ 0x140833838
 * Callers:
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8 (CmpStartKeyNodeStackFromKcbStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140833CF8 (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x140838D80 (CmpKeyEnumStackStart.c)
 *     CmSaveKey @ 0x14083B43C (CmSaveKey.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 */

__int64 __fastcall CmpStartKeyNodeStack(__int64 a1, __int16 a2, __int64 a3, struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  __int16 v7; // di
  PVOID TransientPoolWithTag; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = 0;
  if ( a2 < 2 )
  {
LABEL_7:
    *(_WORD *)a1 = a2;
    return v4;
  }
  v7 = a2 - 1;
  TransientPoolWithTag = CmpAllocateTransientPoolWithTag(PagedPool, 32LL * (__int16)(a2 - 1), 0x39364D43u, a4);
  *(_QWORD *)(a1 + 72) = TransientPoolWithTag;
  if ( TransientPoolWithTag )
  {
    if ( v7 > 0 )
    {
      v9 = 0LL;
      v10 = (unsigned __int16)v7;
      do
      {
        v11 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(v9 + v11) = 0LL;
        *(_QWORD *)(v9 + v11 + 12) = 0LL;
        *(_DWORD *)(v9 + v11 + 20) = 0;
        *(_DWORD *)(v9 + v11 + 8) = -1;
        *(_QWORD *)(v9 + v11 + 24) = 0LL;
        *(_DWORD *)(v9 + v11 + 24) = -1;
        *(_WORD *)(v9 + v11 + 28) = 0;
        v9 += 32LL;
        --v10;
      }
      while ( v10 );
    }
    goto LABEL_7;
  }
  return (unsigned int)-1073741670;
}

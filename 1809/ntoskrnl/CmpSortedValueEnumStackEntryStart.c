/*
 * XREFs of CmpSortedValueEnumStackEntryStart @ 0x140801A0C
 * Callers:
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x140801BE0 (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     qsort @ 0x140196420 (qsort.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpSortedValueEnumStackEntryStart(__int64 a1, __int64 a2, __int64 a3)
{
  size_t v3; // rbp
  unsigned int v6; // ebx
  struct _PRIVILEGE_SET *v7; // rdi
  _BYTE *v8; // rsi
  __int64 v9; // rax
  _BYTE *v10; // r13
  signed __int64 v11; // r12
  size_t v12; // r14
  _BYTE *v13; // r15
  unsigned int *v14; // rdi
  __int64 v15; // rax
  struct _PRIVILEGE_SET *v16; // rdi
  __int64 v19; // [rsp+78h] [rbp+10h] BYREF
  struct _PRIVILEGE_SET *TransientPoolWithTag; // [rsp+88h] [rbp+20h]

  *(_QWORD *)a1 = a2;
  v3 = *(unsigned int *)(a3 + 36);
  v19 = 0xFFFFFFFFLL;
  if ( (_DWORD)v3 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 8 * v3, 0x38374D43u);
    v7 = TransientPoolWithTag;
    if ( TransientPoolWithTag )
    {
      v8 = CmpAllocateTransientPoolWithTag(PagedPool, 8 * v3, 0x38374D43u);
      if ( v8 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a2 + 8))(a2, *(unsigned int *)(a3 + 40), &v19);
        v10 = v8;
        v11 = (char *)v7 - v8;
        v12 = v3;
        v13 = v8;
        v14 = (unsigned int *)v9;
        do
        {
          *(_QWORD *)v10 = 0LL;
          *(_DWORD *)v10 = -1;
          *((_WORD *)v10 + 2) = 0;
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(a2 + 8))(a2, *v14, v13);
          v13 += 8;
          *(_QWORD *)&v10[v11] = v15;
          ++v14;
          v10 += 8;
          --v12;
        }
        while ( v12 );
        v16 = TransientPoolWithTag;
        (*(void (__fastcall **)(__int64, __int64 *))(a2 + 16))(a2, &v19);
        qsort(v16, v3, 8uLL, CmpSortedValueEnumStackValueCompareFunction);
        *(_QWORD *)(a1 + 8) = v16;
        v7 = 0LL;
        v6 = 0;
        *(_QWORD *)(a1 + 16) = v8;
        *(_DWORD *)(a1 + 24) = v3;
      }
      else
      {
        v6 = -1073741670;
      }
      if ( v7 )
        CmSiFreeMemory(v7);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return 0;
  }
  return v6;
}

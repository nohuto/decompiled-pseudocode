/*
 * XREFs of HvReallocateCell @ 0x1405AE9CC
 * Callers:
 *     CmpAddValueToListEx @ 0x1405AE8B0 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x1405AF27C (CmpSetValueKeyExisting.c)
 *     CmpAddToLeaf @ 0x1405AFEC0 (CmpAddToLeaf.c)
 *     CmpRemoveValueFromList @ 0x1405B04E8 (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x1406CF6DC (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x1408012F0 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x1408025AC (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvFreeCell @ 0x1405AEBD8 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x1405FC690 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 (__fastcall *v7)(ULONG_PTR, ULONG_PTR, __int64 *); // rax
  void *v8; // r15
  unsigned int v10; // r12d
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int Cell; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // r14d
  __int64 *v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // ebx
  int v20; // eax
  size_t v21; // r8
  void *v22; // r14
  __int64 *v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-10h] BYREF
  void *v26; // [rsp+38h] [rbp-8h]
  __int64 v27; // [rsp+70h] [rbp+30h] BYREF

  v7 = *(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8);
  v8 = 0LL;
  v25 = 0xFFFFFFFFLL;
  v10 = BugCheckParameter3;
  v27 = 0xFFFFFFFFLL;
  v26 = 0LL;
  v12 = v7(BugCheckParameter2, BugCheckParameter3, &v25);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v15 = a3 + 4;
    v16 = -4 - *(_DWORD *)(v12 - 4);
    if ( v15 > -*(_DWORD *)(v12 - 4) )
    {
      v18 = 0x4000;
      v19 = (v15 + 7) & 0xFFFFFFF8;
      v20 = 0;
      while ( v19 > v18 )
      {
        v18 *= 2;
        ++v20;
      }
      if ( !v20 )
        v18 = v19;
      if ( v18 <= 0x100000 )
      {
        Cell = HvpDoAllocateCell(BugCheckParameter2, (__int64)&v27);
        if ( Cell == -1 )
        {
          v8 = v26;
          Cell = -1;
        }
        else
        {
          v21 = v16;
          v22 = v26;
          memmove(v26, v13, v21);
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
          v13 = 0LL;
          if ( a4 == 1 )
            HvFreeCell(BugCheckParameter2, v10);
          v23 = a6;
          *a5 = (__int64)v22;
          *v23 = v27;
          v27 = 0xFFFFFFFFLL;
        }
      }
      else
      {
        Cell = -1;
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v25);
      if ( v8 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v27);
    }
    else
    {
      Cell = v10;
      v17 = a6;
      *a5 = v12;
      *v17 = v25;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return Cell;
}

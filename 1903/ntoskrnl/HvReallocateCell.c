/*
 * XREFs of HvReallocateCell @ 0x14062EFDC
 * Callers:
 *     CmpAddValueToListEx @ 0x14062EEC0 (CmpAddValueToListEx.c)
 *     CmpSetValueKeyExisting @ 0x14062F9C8 (CmpSetValueKeyExisting.c)
 *     CmpAddToLeaf @ 0x1406328AC (CmpAddToLeaf.c)
 *     CmpRemoveValueFromList @ 0x1406DD06C (CmpRemoveValueFromList.c)
 *     CmpSetValueDataExisting @ 0x1406EE178 (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x140839478 (CmpSplitLeaf.c)
 *     CmRestoreKey @ 0x14083A914 (CmRestoreKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     HvFreeCell @ 0x14062DCA8 (HvFreeCell.c)
 *     HvpDoAllocateCell @ 0x14062E6C4 (HvpDoAllocateCell.c)
 */

__int64 __fastcall HvReallocateCell(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a3,
        char a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v6; // r8d
  int v8; // ecx
  unsigned int v10; // r15d
  unsigned int i; // edi
  __int64 v12; // rax
  const void *v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // edi
  size_t v16; // r8
  void *v17; // r14
  void *v18; // r14
  __int64 v19; // rax
  __int64 v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  void *v23; // [rsp+40h] [rbp-10h] BYREF

  v23 = 0LL;
  v6 = (a3 + 11) & 0xFFFFFFF8;
  v22 = 0xFFFFFFFFLL;
  v8 = 0;
  v21 = 0xFFFFFFFFLL;
  v10 = BugCheckParameter3;
  for ( i = 0x4000; v6 > i; i *= 2 )
    ++v8;
  if ( !v8 )
    i = v6;
  if ( i > 0x100000 )
    return 0xFFFFFFFFLL;
  v12 = (*(__int64 (__fastcall **)(ULONG_PTR, ULONG_PTR, __int64 *))(BugCheckParameter2 + 8))(
          BugCheckParameter2,
          BugCheckParameter3,
          &v22);
  v13 = (const void *)v12;
  if ( v12 )
  {
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( i <= -*(_DWORD *)(v12 - 4) )
    {
      v15 = v10;
      *a5 = v12;
      *a6 = v22;
    }
    else
    {
      v15 = HvpDoAllocateCell(BugCheckParameter2, i, v10 >> 31, &v23, &v21);
      if ( v15 == -1 )
      {
        v18 = v23;
        v15 = -1;
      }
      else
      {
        v16 = v14;
        v17 = v23;
        memmove(v23, v13, v16);
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
        v13 = 0LL;
        if ( a4 == 1 )
          HvFreeCell(BugCheckParameter2, v10);
        *a5 = (__int64)v17;
        v18 = 0LL;
        v19 = v21;
        HIWORD(v21) = 0;
        *a6 = v19;
        WORD2(v21) = 0;
        LODWORD(v21) = -1;
      }
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v22);
      if ( v18 )
        (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v21);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v15;
}

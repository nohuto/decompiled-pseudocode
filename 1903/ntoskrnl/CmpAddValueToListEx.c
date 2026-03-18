/*
 * XREFs of CmpAddValueToListEx @ 0x14062EEC0
 * Callers:
 *     CmpSetValueKeyNew @ 0x14062DBC4 (CmpSetValueKeyNew.c)
 *     CmpCopyKeyPartial @ 0x140716014 (CmpCopyKeyPartial.c)
 *     CmpSetValueKeyTombstone @ 0x14082AD8C (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x140836F20 (CmpMergeKeyValues.c)
 *     CmpAddValueToList @ 0x140839838 (CmpAddValueToList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvAllocateCell @ 0x14062E37C (HvAllocateCell.c)
 *     HvReallocateCell @ 0x14062EFDC (HvReallocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(
        ULONG_PTR BugCheckParameter2,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int *a5,
        int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int Cell; // eax
  __int64 v13; // rdx
  _DWORD *v15; // r8
  __int64 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v17[0] = 0LL;
  v16 = 0xFFFFFFFFLL;
  v8 = a3;
  v9 = *a5;
  v10 = 1;
  v11 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
  {
    if ( a6 )
      v10 = a6;
    Cell = HvAllocateCell(BugCheckParameter2, 4 * v10, a4, (__int64)v17, (__int64)&v16);
  }
  else
  {
    Cell = HvReallocateCell(BugCheckParameter2, a5[1], (__int64)v17, (__int64)&v16);
  }
  if ( Cell == -1 )
    return 3221225626LL;
  v13 = v17[0];
  a5[1] = Cell;
  if ( (unsigned int)v9 > (unsigned int)v8 )
  {
    v15 = (_DWORD *)(v13 + 4 * v9);
    do
    {
      v9 = (unsigned int)(v9 - 1);
      *v15-- = *(_DWORD *)(v13 + 4 * v9);
    }
    while ( (unsigned int)v9 > (unsigned int)v8 );
  }
  *(_DWORD *)(v13 + 4 * v8) = a2;
  *a5 = v11;
  (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v16);
  return 0LL;
}

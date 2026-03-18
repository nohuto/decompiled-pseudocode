/*
 * XREFs of CmpCopyCell @ 0x1406E406C
 * Callers:
 *     CmpLightWeightCreateSetValueData @ 0x1406E3F60 (CmpLightWeightCreateSetValueData.c)
 *     CmpCopyKeyPartial @ 0x140716C74 (CmpCopyKeyPartial.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140835384 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCopyValue @ 0x140835E48 (CmpCopyValue.c)
 *     CmpSyncKeyValues @ 0x140836F84 (CmpSyncKeyValues.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x14083D510 (CmpLightWeightPrepareRenameKeyUoW.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x14083DC90 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     HvAllocateCell @ 0x1406321FC (HvAllocateCell.c)
 */

__int64 __fastcall CmpCopyCell(__int64 a1, __int64 a2, ULONG_PTR a3, unsigned int a4)
{
  unsigned int v7; // r14d
  __int64 v8; // rax
  const void *v9; // r15
  unsigned int v10; // ebx
  unsigned int Cell; // eax
  void *v12; // rsi
  _DWORD v14[2]; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+64h] [rbp+Ch]

  v14[0] = -1;
  v15 = 0LL;
  v16 = -1;
  v14[1] = 0;
  v17 = 0;
  v7 = -1;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(a1 + 8))(a1, a2, v14);
  v9 = (const void *)v8;
  if ( v8 )
  {
    v10 = -4 - *(_DWORD *)(v8 - 4);
    Cell = HvAllocateCell(a3, v10, a4, (__int64)&v15, (__int64)&v16);
    v12 = v15;
    v7 = Cell;
    if ( Cell != -1 )
      memmove(v15, v9, v10);
    if ( v12 )
      (*(void (__fastcall **)(ULONG_PTR, int *))(a3 + 16))(a3, &v16);
    (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v14);
  }
  return v7;
}

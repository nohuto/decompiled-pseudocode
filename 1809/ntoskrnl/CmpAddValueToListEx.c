/*
 * XREFs of CmpAddValueToListEx @ 0x1405AE8B0
 * Callers:
 *     CmpSetValueKeyNew @ 0x1405ADBBC (CmpSetValueKeyNew.c)
 *     CmSetValueKey @ 0x1405CCE28 (CmSetValueKey.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1406962A4 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpCopyKeyPartial @ 0x140700B60 (CmpCopyKeyPartial.c)
 *     CmpSetValueKeyTombstone @ 0x1407F1780 (CmpSetValueKeyTombstone.c)
 *     CmpMergeKeyValues @ 0x1407FECE0 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407FF6DC (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140806080 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvReallocateCell @ 0x1405AE9CC (HvReallocateCell.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

__int64 __fastcall CmpAddValueToListEx(ULONG_PTR a1, int a2, unsigned int a3, int a4, unsigned int *a5, int a6)
{
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // edx
  unsigned int v11; // edi
  unsigned int Cell; // eax
  __int64 v13; // rdx
  _DWORD *v15; // r8
  _DWORD v16[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v17[4]; // [rsp+38h] [rbp-20h] BYREF

  v17[0] = 0LL;
  v16[0] = -1;
  v8 = a3;
  v9 = *a5;
  v10 = 1;
  v16[1] = 0;
  v11 = v9 + 1;
  if ( (unsigned int)(v9 + 1) <= 1 )
  {
    if ( a6 )
      v10 = a6;
    Cell = HvAllocateCell(a1, 4 * v10, a4, (unsigned int)v17, (__int64)v16);
  }
  else
  {
    Cell = HvReallocateCell(a1, a5[1], (__int64)v17, (__int64)v16);
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
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(a1 + 16))(a1, v16);
  return 0LL;
}

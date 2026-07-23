/*
 * XREFs of HvDuplicateCell @ 0x1406CB9C8
 * Callers:
 *     CmpCloneKCBValueListForTrans @ 0x1406CB8F8 (CmpCloneKCBValueListForTrans.c)
 *     CmpDuplicateIndex @ 0x1407FFC98 (CmpDuplicateIndex.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     HvAllocateCell @ 0x1405FCE54 (HvAllocateCell.c)
 */

__int64 __fastcall HvDuplicateCell(ULONG_PTR a1, __int64 a2, int a3, char a4)
{
  __int64 v7; // rax
  const void *v8; // r14
  int v9; // esi
  unsigned int v10; // eax
  void *v11; // rdi
  unsigned int v12; // ebp
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  void *v15; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+64h] [rbp+Ch]

  v16 = -1;
  v14 = 0xFFFFFFFFLL;
  v15 = 0LL;
  v17 = 0;
  v7 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v16);
  v8 = (const void *)v7;
  if ( !v7 )
    return 0xFFFFFFFFLL;
  v9 = -4 - *(_DWORD *)(v7 - 4);
  v10 = HvAllocateCell(a1, v9, a3, &v15, &v14);
  v11 = v15;
  v12 = v10;
  if ( v10 != -1 )
  {
    if ( a4 == 1 )
      memmove(v15, v8, v9);
    else
      memset(v15, 0, v9);
  }
  (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v16);
  if ( v11 )
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(a1 + 16))(a1, &v14);
  return v12;
}

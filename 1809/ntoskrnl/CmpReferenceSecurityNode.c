/*
 * XREFs of CmpReferenceSecurityNode @ 0x140581C84
 * Callers:
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 * Callees:
 *     CmpKeySecurityIncrementReferenceCount @ 0x1401B3604 (CmpKeySecurityIncrementReferenceCount.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CmpReferenceSecurityNode(ULONG_PTR a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rsi
  int v5; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF
  __int16 v8; // [rsp+34h] [rbp+Ch]
  __int16 v9; // [rsp+36h] [rbp+Eh]

  v9 = 0;
  v2 = a2;
  v7 = -1;
  v8 = 0;
  v4 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(a1 + 8))(a1, a2, &v7);
  v5 = CmpKeySecurityIncrementReferenceCount(v4, a1, v2, 0);
  if ( v5 >= 0 )
  {
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v7);
    v4 = 0LL;
    v5 = 0;
  }
  if ( v4 )
    (*(void (__fastcall **)(ULONG_PTR, int *))(a1 + 16))(a1, &v7);
  return (unsigned int)v5;
}

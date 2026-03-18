/*
 * XREFs of CmpDeleteKcbCache @ 0x1406B985C
 * Callers:
 *     CmpInitializeKcbCache @ 0x14068CBC4 (CmpInitializeKcbCache.c)
 *     CmpDeleteHive @ 0x1406B97A0 (CmpDeleteHive.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CmpDeleteKcbCache(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rdi

  v2 = *(void **)(a1 + 1640);
  v3 = *(void **)(a1 + 1656);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 1640) = 0LL;
    *(_DWORD *)(a1 + 1648) = 0;
    ExFreePoolWithTag(v2, 0x61434D43u);
  }
  if ( v3 )
  {
    *(_QWORD *)(a1 + 1656) = 0LL;
    *(_DWORD *)(a1 + 1664) = 0;
    ExFreePoolWithTag(v3, 0x61434D43u);
  }
}

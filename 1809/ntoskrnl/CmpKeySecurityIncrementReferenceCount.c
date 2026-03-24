/*
 * XREFs of CmpKeySecurityIncrementReferenceCount @ 0x1401B34C4
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x140580AB8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x140580C84 (CmpReferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1405B7C5C (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckKey @ 0x1405DA210 (CmpCheckKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

__int64 __fastcall CmpKeySecurityIncrementReferenceCount(__int64 a1, ULONG_PTR a2, unsigned int a3, char a4)
{
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // ecx

  if ( !a4 && !*(_DWORD *)(a1 + 12) )
    KeBugCheckEx(0x51u, 4uLL, 6uLL, a2, a3);
  v5 = *(_DWORD *)(a1 + 12);
  v6 = -1;
  v7 = v5 + 1;
  if ( v5 + 1 >= v5 )
    v6 = v5 + 1;
  if ( v7 >= v5 )
    *(_DWORD *)(a1 + 12) = v6;
  return v7 < v5 ? 0xC0000095 : 0;
}

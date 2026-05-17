/*
 * XREFs of RtlCreateUnicodeString @ 0x18002BE80
 * Callers:
 *     sub_180002740 @ 0x180002740 (sub_180002740.c)
 *     sub_18000471C @ 0x18000471C (sub_18000471C.c)
 *     sub_180004B28 @ 0x180004B28 (sub_180004B28.c)
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     sub_180016CBC @ 0x180016CBC (sub_180016CBC.c)
 *     RtlCanonicalizeDomainName @ 0x18002AE90 (RtlCanonicalizeDomainName.c)
 *     sub_180032198 @ 0x180032198 (sub_180032198.c)
 *     LdrSetDllDirectory @ 0x18007EF40 (LdrSetDllDirectory.c)
 *     sub_1800D08CC @ 0x1800D08CC (sub_1800D08CC.c)
 * Callees:
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  void *v6; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  v6 = (void *)sub_18006D6B8(v5, a2);
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(v6, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}

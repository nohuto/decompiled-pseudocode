/*
 * XREFs of SeCaptureLuidAndAttributesArray @ 0x14060B1F8
 * Callers:
 *     NtCreateTokenEx @ 0x1405BD550 (NtCreateTokenEx.c)
 *     NtPrivilegeCheck @ 0x14060A7C0 (NtPrivilegeCheck.c)
 *     NtAdjustPrivilegesToken @ 0x14060A9A0 (NtAdjustPrivilegesToken.c)
 *     NtFilterToken @ 0x1406C7E00 (NtFilterToken.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureLuidAndAttributesArray(
        char *Src,
        unsigned int a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  SIZE_T v10; // rdx
  char *v11; // rcx
  unsigned int v12; // edi
  PVOID PoolWithTag; // rax

  if ( !a2 )
  {
    *a8 = 0LL;
    *a9 = 0;
    return 0LL;
  }
  if ( a2 > 0x42 )
    return 3221225485LL;
  v10 = 12 * a2;
  *a9 = (v10 + 3) & 0xFFFFFFFC;
  if ( a3 && (_DWORD)v10 )
  {
    if ( ((unsigned __int8)Src & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = &Src[(unsigned int)v10];
    if ( (unsigned __int64)v11 > 0x7FFFFFFF0000LL || v11 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  v12 = v10;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v10, 0x754C6553u);
  *a8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, Src, v12);
    return 0LL;
  }
  return 3221225626LL;
}

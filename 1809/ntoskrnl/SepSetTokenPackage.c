/*
 * XREFs of SepSetTokenPackage @ 0x14065CEA8
 * Callers:
 *     SepGetAnonymousToken @ 0x1400DD58C (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x14064A640 (SepDuplicateToken.c)
 *     NtCreateLowBoxToken @ 0x140656130 (NtCreateLowBoxToken.c)
 *     SepFilterToken @ 0x140658E8C (SepFilterToken.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlCopySid @ 0x14064A350 (RtlCopySid.c)
 *     RtlIsParentOfChildAppContainer @ 0x140655DF4 (RtlIsParentOfChildAppContainer.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  PVOID PoolWithTag; // rax
  PVOID v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x69536553u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  RtlCopySid(v5, PoolWithTag, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 784) = 0LL;
  }
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}

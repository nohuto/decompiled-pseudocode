/*
 * XREFs of ViLookasideTrackList @ 0x14097EAAC
 * Callers:
 *     VerifierExInitializeNPagedLookasideList @ 0x14097E5E0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x14097E700 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 */

void __fastcall ViLookasideTrackList(ULONG_PTR a1, int a2)
{
  PVOID (__stdcall *v2)(POOL_TYPE, SIZE_T, ULONG); // rax
  void *v3; // rax

  if ( a2 && *(void (__stdcall **)(PVOID, ULONG))(a1 + 56) == ExFreePoolWithTag )
  {
    v2 = *(PVOID (__stdcall **)(POOL_TYPE, SIZE_T, ULONG))(a1 + 48);
    if ( v2 == ExAllocatePoolWithTag )
    {
      v3 = VerifierExAllocatePoolWithTag;
LABEL_7:
      *(_QWORD *)(a1 + 48) = v3;
      *(_QWORD *)(a1 + 56) = VerifierExFreePool;
      goto LABEL_8;
    }
    if ( v2 == ExAllocatePoolWithQuotaTag )
    {
      v3 = VerifierExAllocatePoolWithQuotaTag;
      goto LABEL_7;
    }
  }
LABEL_8:
  ViLookasideAdd(a1);
}

/*
 * XREFs of KeFreeXStateContext @ 0x14012FA08
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x14012F894 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x140942B04 (VfCtxInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall KeFreeXStateContext(__int64 a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 )
    {
      ExFreePoolWithTag(v2, 0x76615358u);
      *(_QWORD *)a1 = 0LL;
      *(_DWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 24) = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
}

/*
 * XREFs of KeFreeXStateContext @ 0x1401307CC
 * Callers:
 *     KeRestoreExtendedAndSupervisorState @ 0x140130664 (KeRestoreExtendedAndSupervisorState.c)
 *     VfCtxInit @ 0x1409813D8 (VfCtxInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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

/*
 * XREFs of TR_EnsureInputBufferForTrbs @ 0x1C0024580
 * Callers:
 *     Control_Transfer_Map @ 0x1C0027110 (Control_Transfer_Map.c)
 *     Isoch_PrepareStage @ 0x1C002A0E4 (Isoch_PrepareStage.c)
 *     Bulk_PrepareStage @ 0x1C0030114 (Bulk_PrepareStage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TR_EnsureInputBufferForTrbs(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v5; // rcx
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax

  v2 = 0;
  if ( a2 >= *(_DWORD *)(a1 + 312) )
  {
    v5 = *(void **)(a1 + 304);
    if ( v5 )
      ExFreePoolWithTag(v5, 0x49434858u);
    v6 = 0;
    if ( 16 * a2 + 88 >= 16 * a2 )
      v6 = 16 * a2 + 88;
    PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v6, 0x49434858u);
    *(_QWORD *)(a1 + 304) = PoolWithTag;
    if ( PoolWithTag )
      *(_DWORD *)(a1 + 312) = a2;
    else
      return (unsigned int)-1073741670;
  }
  return v2;
}

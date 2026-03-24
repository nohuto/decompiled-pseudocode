/*
 * XREFs of VfAvlReserveNode @ 0x1400F5850
 * Callers:
 *     VfTargetDriversAdd @ 0x1400F55A4 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x140934340 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140934520 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x1400F58D8 (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall VfAvlReserveNode(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  _QWORD *PoolWithTag; // rax
  char *v8; // rbx

  v3 = *((_DWORD *)a1 + 8);
  if ( v3 == 1 )
    PoolWithTag = ExAllocateFromNPagedLookasideList(&ViAvlNodeLookaside);
  else
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x54416656u);
  if ( !PoolWithTag )
    return 0LL;
  v8 = (char *)(PoolWithTag + 4);
  PoolWithTag[4] = a2;
  if ( !a3 )
    a3 = *a1;
  PoolWithTag[5] = a3;
  if ( *((_BYTE *)a1 + 28) )
    ViAvlNodeInitializeSessionId(a1, PoolWithTag + 4);
  return v8;
}

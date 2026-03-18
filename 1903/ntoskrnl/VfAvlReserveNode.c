/*
 * XREFs of VfAvlReserveNode @ 0x1401547E4
 * Callers:
 *     VfTargetDriversAdd @ 0x140154538 (VfTargetDriversAdd.c)
 *     ViDevObjAdd @ 0x1409738E4 (ViDevObjAdd.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140973AD0 (VerifierIoInitializeRemoveLockEx.c)
 *     ViLookasideAdd @ 0x14097E8A4 (ViLookasideAdd.c)
 *     VerifierExInitializeResourceLite @ 0x14097F4E0 (VerifierExInitializeResourceLite.c)
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     ViAvlNodeInitializeSessionId @ 0x14015486C (ViAvlNodeInitializeSessionId.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
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

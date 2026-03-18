/*
 * XREFs of VfTargetDriversAdd @ 0x140154538
 * Callers:
 *     VfDriverLoadImage @ 0x14095FF80 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x14015466C (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1401547E4 (VfAvlReserveNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x140960028 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1409744D0 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 VerifiedData; // rax
  int v13; // eax
  unsigned int v14; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0LL;
  v5 = a2;
  v8 = 1;
  if ( VfSafeMode || !ViTargetInitialized )
    return 0;
  if ( !a4 )
    goto LABEL_4;
  VerifiedData = ViTargetDriversAllocateVerifiedData(a4);
  v4 = VerifiedData;
  if ( !VerifiedData )
    return 0;
  v13 = *(_DWORD *)(VerifiedData + 32);
  if ( (_DWORD)InitializationPhase )
    v14 = v13 & 0xFFFFFFFD;
  else
    v14 = v13 | 2;
  *(_DWORD *)(v4 + 32) = v14;
LABEL_4:
  v9 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v5);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)(v9 + 56) = v4;
    memset((void *)(v9 + 24), 0, 0x20uLL);
    VfThunkAddTargetNotify(v10);
    v15[1] = 1024LL;
    v15[0] = 0LL;
    VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v15, v10);
    if ( v4 )
    {
      ++dword_140435E68;
      *(_BYTE *)(v4 + 48) = a3;
    }
    VfAvlCleanupLockContext(v15);
  }
  else
  {
    _InterlockedExchange(&ViTargetAllocationFailures, 1);
    v8 = 0;
    if ( v4 )
      ExFreePoolWithTag((PVOID)v4, 0x44566656u);
  }
  return v8;
}

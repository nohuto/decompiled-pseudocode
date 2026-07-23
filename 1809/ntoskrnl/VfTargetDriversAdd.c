/*
 * XREFs of VfTargetDriversAdd @ 0x1400F5624
 * Callers:
 *     VfDriverLoadImage @ 0x140922264 (VfDriverLoadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfAvlInsertReservedTreeNode @ 0x1400F5758 (VfAvlInsertReservedTreeNode.c)
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfThunkAddTargetNotify @ 0x140921F24 (VfThunkAddTargetNotify.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140935ED4 (ViTargetDriversAllocateVerifiedData.c)
 */

__int64 __fastcall VfTargetDriversAdd(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  _BYTE *VerifiedData; // rdi
  __int64 v5; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  VerifiedData = 0LL;
  v5 = a2;
  v8 = 1;
  if ( VfSafeMode )
    return 0;
  if ( !ViTargetInitialized )
    return 0;
  if ( a4 && (VerifiedData = (_BYTE *)ViTargetDriversAllocateVerifiedData(a4)) == 0LL )
  {
    return 0;
  }
  else
  {
    v9 = VfAvlReserveNode(&ViTargetDriversAvl, a1, v5);
    v10 = v9;
    if ( v9 )
    {
      *(_QWORD *)(v9 + 56) = VerifiedData;
      memset((void *)(v9 + 24), 0, 0x20uLL);
      VfThunkAddTargetNotify(v10);
      v12[1] = 1024LL;
      v12[0] = 0LL;
      VfAvlInsertReservedTreeNode(&ViTargetDriversAvl, v12, v10);
      if ( VerifiedData )
      {
        ++dword_14040E788;
        VerifiedData[48] = a3;
      }
      VfAvlCleanupLockContext(v12);
    }
    else
    {
      _InterlockedExchange(&ViTargetAllocationFailures, 1);
      v8 = 0;
      if ( VerifiedData )
        ExFreePoolWithTag(VerifiedData, 0x44566656u);
    }
  }
  return v8;
}

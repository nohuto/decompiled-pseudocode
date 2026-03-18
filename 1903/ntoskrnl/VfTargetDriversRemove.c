/*
 * XREFs of VfTargetDriversRemove @ 0x14017E660
 * Callers:
 *     VfDriverUnloadImage @ 0x140960480 (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409770B4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x14015461C (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14017E7A0 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14017E808 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14017E8C4 (VfAvlLookupTreeNode.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x1409604EC (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409746F4 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140974770 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x14097D44C (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v2; // r14
  void *v3; // rbx
  __int64 v4; // rax
  __m128i *v5; // rdi
  ULONG_PTR v6; // rbx
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  _QWORD v10[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v11[4]; // [rsp+30h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( !VfSafeMode && ViTargetInitialized )
  {
    v2 = *(_QWORD *)(a1 + 48);
    v10[1] = 1024LL;
    v3 = 0LL;
    v10[0] = 0LL;
    v4 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           v10,
           v2,
           1LL);
    v5 = (__m128i *)v4;
    if ( v4 )
    {
      v6 = *(_QWORD *)(v4 + 56);
      if ( v6 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v4 + 56), v2);
        VfPoolCheckForLeaks(v6);
        ViTargetRemovingCheckContiguousMemory(v6);
      }
      v7 = *v5;
      v11[1] = v5[1];
      v8 = v5[3];
      v11[0] = v7;
      v9 = v5[2];
      v11[3] = v8;
      v11[2] = v9;
      if ( _mm_srli_si128(v8, 8).m128i_u64[0] )
        --dword_140435E68;
      v3 = (void *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v10, v2, 1LL);
    }
    VfAvlCleanupLockContext((__int64)v10);
    if ( v3 )
    {
      VfThunkRemoveTargetNotify(v11);
      if ( *((_QWORD *)&v11[3] + 1) )
        ExFreePoolWithTag(*((PVOID *)&v11[3] + 1), 0x44566656u);
      if ( dword_140435E60 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v3);
      else
        VfUtilFreePoolCheckIRQL(v3);
    }
  }
}

/*
 * XREFs of VfTargetDriversRemove @ 0x14016C2E0
 * Callers:
 *     VfDriverUnloadImage @ 0x1409223DC (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5708 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C410 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C478 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C530 (VfAvlLookupTreeNode.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x140922448 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409360E8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140936164 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140938F38 (VfPoolCheckForLeaks.c)
 */

void __fastcall VfTargetDriversRemove(__int64 a1)
{
  __int64 v1; // r14
  void *v2; // rbx
  __int64 v3; // rax
  __m128i *v4; // rdi
  ULONG_PTR v5; // rbx
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm0
  _QWORD v9[2]; // [rsp+20h] [rbp-50h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-40h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h]

  if ( !VfSafeMode && ViTargetInitialized )
  {
    v1 = *(_QWORD *)(a1 + 48);
    v9[1] = 1024LL;
    v2 = 0LL;
    v9[0] = 0LL;
    v3 = ((__int64 (__fastcall *)(void *, _QWORD *, __int64, __int64))VfAvlLookupTreeNode)(
           &ViTargetDriversAvl,
           v9,
           v1,
           1LL);
    v4 = (__m128i *)v3;
    if ( v3 )
    {
      v5 = *(_QWORD *)(v3 + 56);
      if ( v5 )
      {
        ViTargetRemovingCheckEtwWmi(*(_QWORD *)(v3 + 56), v1);
        VfPoolCheckForLeaks(v5);
        ViTargetRemovingCheckContiguousMemory(v5);
      }
      v6 = *v4;
      v10[1] = v4[1];
      v7 = v4[3];
      v10[0] = v6;
      v8 = v4[2];
      *(__m128i *)P = v7;
      v10[2] = v8;
      if ( _mm_srli_si128(v7, 8).m128i_u64[0] )
        --dword_14040E788;
      v2 = (void *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v9, v1, 1LL);
    }
    VfAvlCleanupLockContext((__int64)v9);
    if ( v2 )
    {
      VfThunkRemoveTargetNotify(v10);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0x44566656u);
      if ( dword_14040E780 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}

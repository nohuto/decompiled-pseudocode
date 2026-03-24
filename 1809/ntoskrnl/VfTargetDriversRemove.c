/*
 * XREFs of VfTargetDriversRemove @ 0x14016C1E0
 * Callers:
 *     VfDriverUnloadImage @ 0x1409213DC (VfDriverUnloadImage.c)
 *     VfSuspectDriversLoadCallback @ 0x1409377A4 (VfSuspectDriversLoadCallback.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1400922D8 (ExFreeToNPagedLookasideList.c)
 *     VfAvlCleanupLockContext @ 0x1400F5688 (VfAvlCleanupLockContext.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14016C310 (VfUtilFreePoolCheckIRQL.c)
 *     VfAvlDeleteTreeNode @ 0x14016C378 (VfAvlDeleteTreeNode.c)
 *     VfAvlLookupTreeNode @ 0x14016C430 (VfAvlLookupTreeNode.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     VfThunkRemoveTargetNotify @ 0x140921448 (VfThunkRemoveTargetNotify.c)
 *     ViTargetRemovingCheckContiguousMemory @ 0x1409350E8 (ViTargetRemovingCheckContiguousMemory.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140935164 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140937F38 (VfPoolCheckForLeaks.c)
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
        --dword_14040D708;
      v2 = (void *)VfAvlDeleteTreeNode(&ViTargetDriversAvl, v9, v1, 1LL);
    }
    VfAvlCleanupLockContext((__int64)v9);
    if ( v2 )
    {
      VfThunkRemoveTargetNotify(v10);
      if ( P[1] )
        ExFreePoolWithTag(P[1], 0x44566656u);
      if ( dword_14040D700 == 1 )
        ExFreeToNPagedLookasideList(&ViAvlNodeLookaside, v2);
      else
        VfUtilFreePoolCheckIRQL(v2);
    }
  }
}

/*
 * XREFs of ??$TakeItemFromCache@VCGroupDrawListEntry@@@CDrawListBatchManager@@CAJPEAV?$ShrinkableReferenceArray@PEAVCGroupDrawListEntry@@@@PEAPEAVCGroupDrawListEntry@@@Z @ 0x180025594
 * Callers:
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024D34 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x180024F00 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CDrawListBatchManager::TakeItemFromCache<CGroupDrawListEntry>(__int64 a1, _QWORD *a2)
{
  int v2; // r8d
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned int v7; // ecx
  void *v9; // rax
  unsigned int v10; // ecx
  void *v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // ecx
  int v15; // eax
  void *v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 24);
  v3 = 0;
  if ( !v2 )
  {
    v9 = HeapAlloc(WPF::g_processHeap, 0, 0x28uLL);
    v11 = v9;
    if ( v9 )
    {
      memset_0(v9, 0, 0x28uLL);
      *((_DWORD *)v11 + 4) = 0;
      *(_QWORD *)v11 = &CGroupDrawListEntry::`vftable';
      *((_DWORD *)v11 + 2) = 0;
      *((_QWORD *)v11 + 3) = 0LL;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
    {
      v3 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x140u);
      return v3;
    }
    _InterlockedAdd((volatile signed __int32 *)v11 + 2, 1u);
    v12 = *(_DWORD *)(a1 + 24);
    v16 = v11;
    v13 = v12 + 1;
    v3 = v12 + 1 < v12 ? 0x80070216 : 0;
    if ( v12 + 1 < v12 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v3, 0xB5u);
    }
    else if ( v13 > *(_DWORD *)(a1 + 20) )
    {
      v15 = DynArrayImpl<0>::AddMultipleAndSet(a1, 8, 1, &v16);
      v3 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v15, 0xC0u);
    }
    else
    {
      v14 = v12;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL * v12) = v16;
      *(_DWORD *)(a1 + 24) = v13;
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v3, 0x142u);
      CMILRefCountBase::Release((CMILRefCountBase *)v11);
      return v3;
    }
    v2 = *(_DWORD *)(a1 + 24);
  }
  v6 = (unsigned int)(v2 - 1);
  *a2 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
  v7 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  if ( v7 >= (unsigned int)v6 )
    v7 = v6;
  *(_DWORD *)(a1 + 32) = v7;
  return v3;
}

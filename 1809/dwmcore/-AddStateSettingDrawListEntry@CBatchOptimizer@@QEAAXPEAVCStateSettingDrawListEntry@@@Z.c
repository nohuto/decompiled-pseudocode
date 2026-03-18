/*
 * XREFs of ?AddStateSettingDrawListEntry@CBatchOptimizer@@QEAAXPEAVCStateSettingDrawListEntry@@@Z @ 0x18000A4D8
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800239F0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180024C90 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 * Callees:
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x18000A624 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ?AppendLayer@CBatchOptimizer@@AEAAXXZ @ 0x180024CD0 (-AppendLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBatchOptimizer::AddStateSettingDrawListEntry(
        CBatchOptimizer *this,
        struct CStateSettingDrawListEntry *a2)
{
  __int64 v4; // rax
  char *v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  signed int v8; // edx
  __int64 v9; // r9
  int *i; // r10
  __int64 v11; // r9
  int *j; // r10
  bool v13; // zf

  if ( !*((_DWORD *)this + 8) )
    CBatchOptimizer::AppendLayer(this);
  ++*((_DWORD *)a2 + 4);
  (**(void (__fastcall ***)(CBatchOptimizer *, _QWORD))this)(this, *((_QWORD *)a2 + 3));
  v4 = 520LL * *((int *)this + *((int *)this + 8) + 11);
  if ( *(_DWORD *)((char *)this + v4 + 100)
    || (v13 = *(_DWORD *)((char *)this + v4 + 96) == 20, *(_OWORD *)((char *)this + v4 + 80) = *((_OWORD *)this + 1),
                                                         v13) )
  {
    *((_DWORD *)this + 6) = 24;
    CBatchOptimizer::AppendLayer(this);
  }
  v5 = (char *)this + 520 * *((int *)this + *((int *)this + 8) + 11);
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v6 = *((unsigned int *)v5 + 24);
  *((_DWORD *)v5 + 24) = v6 + 1;
  *(_QWORD *)&v5[8 * v6 + 120] = a2;
  v7 = *((_DWORD *)this + 8);
  if ( v7 > 1 )
  {
    v8 = v7 - 2;
    v9 = (int)(v7 - 2);
    for ( i = (int *)((char *)this + 4 * v9 + 48); !*((_DWORD *)this + 130 * *i + 25) && v9; --i )
    {
      --v8;
      --v9;
    }
    if ( v8 != v7 - 1 )
    {
      v11 = v8;
      for ( j = (int *)((char *)this + 4 * v8 + 48); *((_QWORD *)this + 65 * *j + 10) != *((_QWORD *)this + 2); ++j )
      {
        ++v8;
        if ( ++v11 == v7 - 1 )
          return;
      }
      CBatchOptimizer::DiscardEmptyLayers(this, v8 + 1, v7 - v8 - 1);
    }
  }
}

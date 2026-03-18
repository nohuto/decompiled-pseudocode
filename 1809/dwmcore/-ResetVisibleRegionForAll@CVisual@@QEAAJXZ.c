/*
 * XREFs of ?ResetVisibleRegionForAll@CVisual@@QEAAJXZ @ 0x1800A93D8
 * Callers:
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x1800A9030 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ @ 0x1801B8154 (-ResetVisibleRegionForAllInSubtree@CVisual@@QEAAXXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x18015ACEC (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18017ED50 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 */

__int64 __fastcall CVisual::ResetVisibleRegionForAll(CVisual *this)
{
  _DWORD *v1; // r8
  unsigned int v2; // esi
  __int64 v4; // rcx
  _BYTE *v5; // rdx
  unsigned int i; // eax
  _QWORD ***v7; // rdi
  _QWORD **v8; // rdi
  _QWORD *j; // rbx
  int v10; // eax
  unsigned int v11; // ecx

  v1 = (_DWORD *)*((_QWORD *)this + 28);
  v2 = 0;
  if ( (*v1 & 0x40000000) != 0 )
  {
    v4 = (unsigned int)v1[1];
    v5 = v1 + 2;
    for ( i = 0; i < (unsigned int)v4; ++v5 )
    {
      if ( *v5 == 2 )
        break;
      ++i;
    }
    v7 = i >= (unsigned int)v4 ? 0LL : (_QWORD ***)((char *)v1 + v4 + 8LL * i - (((_BYTE)v4 + 15) & 7) + 15);
    v8 = *v7;
    if ( v8 )
    {
      for ( j = *v8; j != v8; j = (_QWORD *)*j )
      {
        v10 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(j - 11));
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x133Bu);
          return v2;
        }
        CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(j - 11));
      }
    }
  }
  return v2;
}

/*
 * XREFs of ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x1800C76DC
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x1800C37F8 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800C3BF8 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800C3CC4 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800C414C (-MoveNext@CFragmentIterator@@QEAAXXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x1800C6DD0 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x1800E456C (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@?$vector@UFragmentStackEntry@CFragmentIterator@@V?$allocator@UFragmentStackEntry@CFragmentIterator@@@std@@@std@@QEAAPEAUFragmentStackEntry@CFragmentIterator@@QEAU23@$$QEAU23@@Z @ 0x1800C51F8 (--$_Emplace_reallocate@UFragmentStackEntry@CFragmentIterator@@@-$vector@UFragmentStackEntry@CFra.c)
 */

void __fastcall CFragmentIterator::FindFirst(CFragmentIterator *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int i; // ecx
  __int64 v5; // rax
  char *v6; // rdx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

LABEL_1:
  v2 = *((_QWORD *)this + 1);
  v3 = *(_QWORD *)(v2 - 16);
  for ( i = *(_DWORD *)(v2 - 8); i < (unsigned int)((__int64)(*(_QWORD *)(v3 + 40) - *(_QWORD *)(v3 + 32)) >> 4); ++i )
  {
    v5 = *(_QWORD *)(v3 + 32) + 16LL * i;
    if ( *(_QWORD *)(v5 + 8) )
    {
      DWORD2(v7) = 0;
      *(_DWORD *)(v2 - 8) = i;
      v6 = (char *)*((_QWORD *)this + 1);
      *(_QWORD *)&v7 = *(_QWORD *)(v5 + 8);
      if ( *((char **)this + 2) == v6 )
      {
        std::vector<CFragmentIterator::FragmentStackEntry>::_Emplace_reallocate<CFragmentIterator::FragmentStackEntry>(
          (__int64)this,
          v6,
          &v7);
      }
      else
      {
        *(_OWORD *)v6 = v7;
        *((_QWORD *)this + 1) += 16LL;
      }
      goto LABEL_1;
    }
  }
}

/*
 * XREFs of ?MoveNext@CFragmentIterator@@QEAAXXZ @ 0x1800357C0
 * Callers:
 *     ?AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@PEAPEAVCLinkedShader@@@Z @ 0x180032950 (-AddShaderToCache@CRenderingTechnique@@AEBAJPEAVCCompiledEffectCache@@IAEBUShaderLinkingConfig@@.c)
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800352D0 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ @ 0x180035584 (-CollectStateFromAllFragments@CRenderingTechnique@@AEAAXXZ.c)
 *     ?HasBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x180035630 (-HasBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ @ 0x1800356F8 (-HasWindowBackdropInput@CRenderingTechnique@@QEBA_NXZ.c)
 *     ?UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ @ 0x180037368 (-UpdateConstantBuffers@CRenderingTechnique@@AEAAJXZ.c)
 * Callees:
 *     ?FindFirst@CFragmentIterator@@AEAAXXZ @ 0x180037630 (-FindFirst@CFragmentIterator@@AEAAXXZ.c)
 */

void __fastcall CFragmentIterator::MoveNext(CFragmentIterator *this)
{
  *((_QWORD *)this + 1) -= 16LL;
  if ( (__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 4 )
  {
    ++*(_DWORD *)(*((_QWORD *)this + 1) - 8LL);
    CFragmentIterator::FindFirst(this);
  }
}

/*
 * XREFs of ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18019A494
 * Callers:
 *     ??1CBrushRenderingGraph@@EEAA@XZ @ 0x180034934 (--1CBrushRenderingGraph@@EEAA@XZ.c)
 *     ?Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ @ 0x1800D5470 (-Compile_WorkerThread@CEffectCompilationTask@@AEAAXXZ.c)
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E6D88 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 *     ??1CEffectCompilationTask@@QEAA@XZ @ 0x18019A3F8 (--1CEffectCompilationTask@@QEAA@XZ.c)
 *     ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1802599D4 (-GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 *     ?GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x18025A538 (-GetShaderCache@CProjectedShadowApproxBlurEffect@@QEBAPEAVCCompiledEffectCache@@XZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CCompiledEffectCache *__fastcall CCompiledEffectCache::`scalar deleting destructor'(CCompiledEffectCache *this)
{
  void *v2; // rcx
  int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rax
  CDirtyRegion *v6; // rcx
  void *v7; // rcx

  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 3);
  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    v3 = 0;
    if ( *((int *)this + 4) > 0 )
    {
      v4 = 0LL;
      do
      {
        v5 = *((_QWORD *)this + 1);
        v6 = *(CDirtyRegion **)(v4 + v5);
        if ( v6 )
        {
          *(_QWORD *)(v4 + v5) = 0LL;
          CDirtyRegion::Release(v6);
        }
        ++v3;
        v4 += 8LL;
      }
      while ( v3 < *((_DWORD *)this + 4) );
      v2 = *(void **)this;
    }
    operator delete(v2);
    *(_QWORD *)this = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 1);
  if ( v7 )
  {
    operator delete(v7);
    *((_QWORD *)this + 1) = 0LL;
  }
  *((_DWORD *)this + 4) = 0;
  operator delete(this);
  return this;
}

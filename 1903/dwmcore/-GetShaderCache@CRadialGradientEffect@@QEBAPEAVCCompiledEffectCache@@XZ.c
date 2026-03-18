/*
 * XREFs of ?GetShaderCache@CRadialGradientEffect@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x1802599D4
 * Callers:
 *     ?AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020F684 (-AddRadialGradientBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCRadialGradientBrush@@_NPEAPEAVCRe.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18019A494 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

struct CCompiledEffectCache *__fastcall CRadialGradientEffect::GetShaderCache(CRadialGradientEffect *this)
{
  struct CCompiledEffectCache *result; // rax
  CCompiledEffectCache *v2; // rcx
  CCompiledEffectCache *v3; // rcx

  if ( *((_BYTE *)this + 68) )
  {
    result = CRadialGradientEffect::s_spCenteredCompiledEffectCache;
    if ( !CRadialGradientEffect::s_spCenteredCompiledEffectCache )
    {
      result = (struct CCompiledEffectCache *)operator new(0x28uLL);
      if ( result )
      {
        *(_QWORD *)result = 0LL;
        *((_QWORD *)result + 1) = 0LL;
        *((_DWORD *)result + 4) = 0;
        *((_QWORD *)result + 3) = 0LL;
        *((_QWORD *)result + 4) = result;
      }
      v2 = CRadialGradientEffect::s_spCenteredCompiledEffectCache;
      CRadialGradientEffect::s_spCenteredCompiledEffectCache = result;
      if ( v2 )
      {
        CCompiledEffectCache::`scalar deleting destructor'(v2);
        return CRadialGradientEffect::s_spCenteredCompiledEffectCache;
      }
    }
  }
  else
  {
    result = CRadialGradientEffect::s_spNonCenteredCompiledEffectCache;
    if ( !CRadialGradientEffect::s_spNonCenteredCompiledEffectCache )
    {
      result = (struct CCompiledEffectCache *)operator new(0x28uLL);
      if ( result )
      {
        *(_QWORD *)result = 0LL;
        *((_QWORD *)result + 1) = 0LL;
        *((_DWORD *)result + 4) = 0;
        *((_QWORD *)result + 3) = 0LL;
        *((_QWORD *)result + 4) = result;
      }
      v3 = CRadialGradientEffect::s_spNonCenteredCompiledEffectCache;
      CRadialGradientEffect::s_spNonCenteredCompiledEffectCache = result;
      if ( v3 )
      {
        CCompiledEffectCache::`scalar deleting destructor'(v3);
        return CRadialGradientEffect::s_spNonCenteredCompiledEffectCache;
      }
    }
  }
  return result;
}

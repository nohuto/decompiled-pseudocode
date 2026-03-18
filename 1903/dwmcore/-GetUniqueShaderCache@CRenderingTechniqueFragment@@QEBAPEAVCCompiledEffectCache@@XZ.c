/*
 * XREFs of ?GetUniqueShaderCache@CRenderingTechniqueFragment@@QEBAPEAVCCompiledEffectCache@@XZ @ 0x180034800
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z @ 0x180034728 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

struct CCompiledEffectCache *__fastcall CRenderingTechniqueFragment::GetUniqueShaderCache(
        CRenderingTechniqueFragment *this)
{
  __int64 v1; // r9
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v6; // rax

  v1 = *((_QWORD *)this + 4);
  v2 = *((_QWORD *)this + 1);
  v3 = (*((_QWORD *)this + 5) - v1) >> 4;
  v4 = 0;
  if ( !(_DWORD)v3 )
    return (struct CCompiledEffectCache *)v2;
  while ( 1 )
  {
    v5 = *(_QWORD *)(v1 + 16LL * v4 + 8);
    if ( v5 )
      break;
LABEL_6:
    if ( ++v4 >= (unsigned int)v3 )
      return (struct CCompiledEffectCache *)v2;
  }
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    return 0LL;
  if ( !v2 )
  {
    v2 = v6;
    goto LABEL_6;
  }
  if ( v6 == v2 )
    goto LABEL_6;
  return 0LL;
}

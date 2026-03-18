/*
 * XREFs of ?HasUniqueShaderCache@CRenderingTechniqueFragment@@QEBA_NPEAPEAVCCompiledEffectCache@@@Z @ 0x1800E0658
 * Callers:
 *     ?EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ @ 0x1800E0554 (-EnsureShaderCache@CBrushRenderingGraphBuilder@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CRenderingTechniqueFragment::HasUniqueShaderCache(
        CRenderingTechniqueFragment *this,
        struct CCompiledEffectCache **a2)
{
  __int64 v2; // r10
  struct CCompiledEffectCache *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ecx
  __int64 v6; // r9
  __int64 v7; // rax
  struct CCompiledEffectCache *v9; // rax

  v2 = *((_QWORD *)this + 4);
  v3 = (struct CCompiledEffectCache *)*((_QWORD *)this + 1);
  v4 = *((_QWORD *)this + 5) - v2;
  *a2 = 0LL;
  v5 = 0;
  v6 = v4 >> 4;
  if ( !(_DWORD)v6 )
  {
LABEL_4:
    *a2 = v3;
    return 1;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v2 + 16LL * v5 + 8);
    if ( v7 )
      break;
LABEL_3:
    if ( ++v5 >= (unsigned int)v6 )
      goto LABEL_4;
  }
  v9 = *(struct CCompiledEffectCache **)(v7 + 8);
  if ( !v9 )
    return 0;
  if ( !v3 )
  {
    v3 = v9;
    goto LABEL_3;
  }
  if ( v9 == v3 )
    goto LABEL_3;
  return 0;
}

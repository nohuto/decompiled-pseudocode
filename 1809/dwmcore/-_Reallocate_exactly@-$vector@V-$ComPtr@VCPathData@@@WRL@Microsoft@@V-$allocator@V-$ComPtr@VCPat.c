/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801A428C
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801A3C08 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CPathData>>::_Reallocate_exactly(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  SIZE_T v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // r8
  _QWORD *v8; // rcx
  _QWORD *v9; // rdx

  v4 = (__int64)(a1[1] - *a1) >> 3;
  v5 = 8 * a2;
  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  v7 = (_QWORD *)a1[1];
  v8 = (_QWORD *)*a1;
  v9 = (_QWORD *)v6;
  while ( v8 != v7 )
  {
    *v9 = 0LL;
    if ( v9 != v8 )
    {
      *v9 = *v8;
      *v8 = 0LL;
    }
    ++v9;
    ++v8;
  }
  return std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Change_array((__int64)a1, v6, v4, a2);
}

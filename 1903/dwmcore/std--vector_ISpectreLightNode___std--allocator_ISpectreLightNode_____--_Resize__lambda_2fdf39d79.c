/*
 * XREFs of std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___ @ 0x18016BE40
 * Callers:
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016E244 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801B1F90 (-Render@CSpectreCallbackRenderer@@UEAAJXZ.c)
 * Callees:
 *     ?_Change_array@?$vector@PEAVCVectorShape@@V?$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEAVCVectorShape@@_K1@Z @ 0x18001DFAC (-_Change_array@-$vector@PEAVCVectorShape@@V-$allocator@PEAVCVectorShape@@@std@@@std@@AEAAXQEAPEA.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180078318 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::vector_ISpectreLightNode___std::allocator_ISpectreLightNode_____::_Resize__lambda_2fdf39d790a9406f49f0ad6a00d9e097___(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbp
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  SIZE_T v10; // rcx
  char *v11; // rbx

  result = *(_QWORD *)a1;
  v4 = *(_QWORD *)(a1 + 8);
  v6 = (v4 - *(_QWORD *)a1) >> 3;
  v7 = (__int64)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) >> 3;
  if ( a2 <= v7 )
  {
    if ( a2 <= v6 )
    {
      if ( a2 != v6 )
      {
        result += 8 * a2;
        *(_QWORD *)(a1 + 8) = result;
      }
    }
    else
    {
      memset_0(*(void **)(a1 + 8), 0, 8 * (a2 - v6));
      result = 8 * (a2 - v6) + v4;
      *(_QWORD *)(a1 + 8) = result;
    }
  }
  else
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error((const char *)a1);
    v8 = v7 >> 1;
    if ( v7 <= 0x1FFFFFFFFFFFFFFFLL - (v7 >> 1) )
    {
      v9 = v8 + v7;
      if ( v8 + v7 < a2 )
        v9 = a2;
    }
    else
    {
      v9 = a2;
    }
    v10 = 8 * v9;
    if ( v9 > 0x1FFFFFFFFFFFFFFFLL )
      v10 = -1LL;
    v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10);
    memset_0(&v11[8 * v6], 0, 8 * (a2 - v6));
    memmove_0(v11, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    return std::vector<CVectorShape *>::_Change_array((__int64 *)a1, (__int64)v11, a2, v9);
  }
  return result;
}

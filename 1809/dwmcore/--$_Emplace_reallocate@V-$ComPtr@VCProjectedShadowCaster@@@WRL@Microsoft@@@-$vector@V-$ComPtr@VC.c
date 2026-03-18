/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801A3680
 * Callers:
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x1801A3C08 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 *     ?ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDCASTERS@@PEBXI@Z @ 0x1801AFE00 (-ProcessAddCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCE.c)
 *     ?ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWSCENE_ADDRECEIVERS@@PEBXI@Z @ 0x1801AFF98 (-ProcessAddReceivers@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PROJECTEDSHADOWS.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C766C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@_K1@Z @ 0x1801A41EC (-_Change_array@-$vector@V-$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V-$allocator@V-$ComPt.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // r15
  _QWORD *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  SIZE_T v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r9
  _QWORD *v15; // r8
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = ((__int64)a2 - *a1) >> 3;
  v5 = a2;
  v6 = (__int64)(a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v8 = v6 + 1;
  v9 = (__int64)(a1[2] - *a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v6 + 1;
  }
  else
  {
    v11 = v6 + 1;
  }
  v12 = 8 * v11;
  if ( v11 > 0x1FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = (_QWORD *)(v13 + 8 * v4);
  *v14 = 0LL;
  if ( v14 != a3 )
  {
    *v14 = *a3;
    *a3 = 0LL;
  }
  v15 = (_QWORD *)a1[1];
  v16 = (_QWORD *)v13;
  v17 = (_QWORD *)*a1;
  if ( v5 == v15 )
  {
    while ( v17 != v15 )
    {
      *v16 = 0LL;
      if ( v16 != v17 )
      {
        *v16 = *v17;
        *v17 = 0LL;
      }
      ++v16;
      ++v17;
    }
  }
  else
  {
    if ( v17 != v5 )
    {
      do
      {
        *v16 = 0LL;
        if ( v16 != v17 )
        {
          *v16 = *v17;
          *v17 = 0LL;
        }
        ++v16;
        ++v17;
      }
      while ( v17 != v5 );
      v15 = (_QWORD *)a1[1];
    }
    if ( v5 != v15 )
    {
      v18 = v14 + 1;
      do
      {
        *v18 = 0LL;
        if ( v18 != v5 )
        {
          *v18 = *v5;
          *v5 = 0LL;
        }
        ++v5;
        ++v18;
      }
      while ( v5 != v15 );
    }
  }
  std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Change_array(a1, v13, v8, v11);
  return *a1 + 8 * v4;
}

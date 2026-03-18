/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@_K1@Z @ 0x1801A41EC
 * Callers:
 *     ??$_Emplace_reallocate@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801A3680 (--$_Emplace_reallocate@V-$ComPtr@VCProjectedShadowCaster@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VC.c)
 *     ?_Reallocate_exactly@?$vector@V?$ComPtr@VCPathData@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCPathData@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1801A428C (-_Reallocate_exactly@-$vector@V-$ComPtr@VCPathData@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCPat.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801AC680 (--$_Emplace_reallocate@AEBV-$ComPtr@VCProjectedShadow@@@WRL@Microsoft@@@-$vector@V-$ComPtr@VCPro.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180063B7C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<CProjectedShadowCaster>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // rbp
  __int64 v10; // rcx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        v10 = *v4;
        if ( *v4 )
        {
          *v4 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

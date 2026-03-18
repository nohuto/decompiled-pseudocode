/*
 * XREFs of ?_Change_array@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x180214988
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x180214364 (--$_Emplace_reallocate@AEBV-$com_ptr_t@VCSubRectBitmapRealizationImageSource@@Uerr_returncode_po.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x180240774 (--$_Emplace_reallocate@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil.c)
 * Callees:
 *     ?Release@CGdiSpriteBitmap@@UEAAKXZ @ 0x1800BD580 (-Release@CGdiSpriteBitmap@@UEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C42A4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<wil::com_ptr_t<CSubRectBitmapRealizationImageSource,wil::err_returncode_policy>>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CGdiSpriteBitmap **v4; // rbx
  CGdiSpriteBitmap **v9; // rbp
  __int64 result; // rax

  v4 = *(CGdiSpriteBitmap ***)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(CGdiSpriteBitmap ***)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        if ( *v4 )
          CGdiSpriteBitmap::Release(*v4);
        ++v4;
      }
      while ( v4 != v9 );
      v4 = *(CGdiSpriteBitmap ***)a1;
    }
    std::_Deallocate<16,0>(v4, (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *(_QWORD *)(a1 + 8) = a2 + 8 * a3;
  result = a2 + 8 * a4;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}

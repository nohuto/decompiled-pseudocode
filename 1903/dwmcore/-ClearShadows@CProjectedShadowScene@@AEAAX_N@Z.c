/*
 * XREFs of ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x180007190
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x1800039E0 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ClearReceivers@CProjectedShadowScene@@AEAAXXZ @ 0x180003C54 (-ClearReceivers@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x180003E2C (-ClearCasters@CProjectedShadowScene@@AEAAXXZ.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008230 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ @ 0x180006AB4 (-RequestRedrawAll@CProjectedShadowScene@@QEAAXXZ.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@U?$less@PEAVCProjectedShadowCaster@@@std@@V?$allocator@U?$pair@QEAVCProjectedShadowCaster@@V?$com_ptr_t@VCProjectedShadow@@Uerr_returncode_policy@wil@@@wil@@@std@@@5@$0A@@std@@@std@@QEAAXXZ @ 0x1800087AC (-clear@-$_Tree@V-$_Tmap_traits@PEAVCProjectedShadowCaster@@V-$com_ptr_t@VCProjectedShadow@@Uerr_.c)
 */

void __fastcall CProjectedShadowScene::ClearShadows(CProjectedShadowScene *this, char a2)
{
  _QWORD **v3; // rdi
  _QWORD *i; // rbx

  if ( !a2 )
    CProjectedShadowScene::RequestRedrawAll(this);
  v3 = (_QWORD **)*((_QWORD *)this + 9);
  for ( i = *v3; i != v3; i = (_QWORD *)*i )
    std::_Tree<std::_Tmap_traits<CProjectedShadowCaster *,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>,std::less<CProjectedShadowCaster *>,std::allocator<std::pair<CProjectedShadowCaster * const,wil::com_ptr_t<CProjectedShadow,wil::err_returncode_policy>>>,0>>::clear(i + 3);
}

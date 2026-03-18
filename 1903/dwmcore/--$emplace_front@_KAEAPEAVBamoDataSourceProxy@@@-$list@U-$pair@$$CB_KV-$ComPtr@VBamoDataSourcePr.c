/*
 * XREFs of ??$emplace_front@_KAEAPEAVBamoDataSourceProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAAEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x180198DEC
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180198FF0 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800D5C10 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18015B1EC (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>::emplace_front<unsigned __int64,BamoDataSourceProxy * &>(
        __int64 a1,
        _QWORD *a2,
        void (__fastcall ****a3)(_QWORD))
{
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  _QWORD *v8; // rbp
  void (__fastcall ***v9)(_QWORD); // rcx
  __int64 v10; // rcx

  v6 = **(_QWORD ***)a1;
  v7 = (_QWORD *)v6[1];
  v8 = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
         a1,
         v6,
         v7);
  v8[2] = *a2;
  v9 = *a3;
  v8[3] = *a3;
  if ( v9 )
    (**v9)(v9);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v10 == 0x7FFFFFFFFFFFFFELL )
    std::_Xlength_error((const char *)0x7FFFFFFFFFFFFFELL);
  *(_QWORD *)(a1 + 8) = v10 + 1;
  v6[1] = v8;
  *v7 = v8;
  return **(_QWORD **)a1 + 16LL;
}

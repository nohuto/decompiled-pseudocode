/*
 * XREFs of ??$_Insert@_KAEAPEAVBamoDataSourceProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x18017089C
 * Callers:
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180170AA0 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@PEAX@2@PEAU32@0@Z @ 0x180078D00 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@QEBVCResource@@PEAVCWeakResourceReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>::_Insert<unsigned __int64,BamoDataSourceProxy * &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  _QWORD *v4; // r15
  _QWORD *v9; // rbp
  void (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_QWORD *)a2[1];
  v9 = std::_List_alloc<std::_List_base_types<std::pair<CResource const * const,CWeakResourceReference *>>>::_Buynode0(
         a1,
         a2,
         v4);
  v9[2] = *a3;
  v10 = *a4;
  v9[3] = *a4;
  if ( v10 )
    (**v10)(v10);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 == 0x7FFFFFFFFFFFFFELL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  result = v11 + 1;
  *(_QWORD *)(a1 + 8) = v11 + 1;
  a2[1] = v9;
  *v4 = v9;
  return result;
}

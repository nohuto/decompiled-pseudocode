/*
 * XREFs of ??$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAPEAW4LayoutSKU@SharedStartModel@@QEAW423@AEBW423@@Z @ 0x18013CDE0
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18013D8F8 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z @ 0x18013DB68 (-Copy@SelectionData@StartLayout@@AEAAXAEBU12@@Z.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 *     ??0WindowingEnvironmentSettings@@QEAA@PEAU?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@AEBV?$function@$$A6A?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@I@Z@std@@@Z @ 0x180224668 (--0WindowingEnvironmentSettings@@QEAA@PEAU-$IVectorView@PEAUISetting@WindowingEnvironment@Applic.c)
 *     ?GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA?AV?$vector@IV?$allocator@I@std@@@std@@XZ @ 0x1802CA604 (-GetAllShownViews@TabTipAdapterPolicy@KeyboardHosting@@QEAA-AV-$vector@IV-$allocator@I@std@@@std.c)
 *     ?ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z @ 0x1803A0BE4 (-ParseSKUAttributeValue@SelectionDataParser@StartLayout@@AEAAJPEBGAEAUSelectionData@2@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180022954 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18009B2E3 (memmove_0.c)
 *     ?_Change_array@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@AEAAXQEAW4LayoutSKU@SharedStartModel@@_K1@Z @ 0x18013ECD8 (-_Change_array@-$vector@W4LayoutSKU@SharedStartModel@@V-$allocator@W4LayoutSKU@SharedStartModel@.c)
 */

__int64 __fastcall std::vector<enum SharedStartModel::LayoutSKU>::_Emplace_reallocate<enum SharedStartModel::LayoutSKU const &>(
        const void **a1,
        _BYTE *a2,
        _DWORD *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  size_t v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  _BYTE *v15; // r8
  _BYTE *v16; // rdx
  char *v17; // rcx
  size_t v18; // r8
  __int64 result; // rax
  void *v20; // [rsp+68h] [rbp+10h]

  v6 = (a2 - (_BYTE *)*a1) >> 2;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 2;
  if ( v7 == 0x3FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 2;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v7 + 1;
  }
  else
  {
    v11 = v7 + 1;
  }
  v12 = 4 * v11;
  if ( v11 > 0x3FFFFFFFFFFFFFFFLL )
    v12 = -1LL;
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(v12);
  v14 = v13;
  v20 = v13;
  try
  {
    *((_DWORD *)v13 + v6) = *a3;
    v15 = a1[1];
    v16 = *a1;
    v17 = (char *)v13;
    if ( a2 == v15 )
    {
      v18 = v15 - v16;
    }
    else
    {
      memmove_0(v13, v16, a2 - (_BYTE *)*a1);
      v17 = (char *)v14 + 4 * v6 + 4;
      v18 = (_BYTE *)a1[1] - a2;
      v16 = a2;
    }
    memmove_0(v17, v16, v18);
    std::vector<enum SharedStartModel::LayoutSKU>::_Change_array(a1, v14, v8, v11, -2LL);
    result = (__int64)*a1 + 4 * v6;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v20, (const struct std::nothrow_t *)(4 * v11));
    throw;
  }
  return result;
}

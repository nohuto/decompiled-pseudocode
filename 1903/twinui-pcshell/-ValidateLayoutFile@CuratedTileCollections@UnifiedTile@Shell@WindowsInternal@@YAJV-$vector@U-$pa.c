/*
 * XREFs of ?ValidateLayoutFile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x180405408
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x180166F98 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801670FC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801E70FC (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801E726C (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x180104BE4 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x180162EF0 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180167534 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ??1?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x18016761C (--1-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x180405064 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 *     ?LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x1804052E8 (-LoadSchema@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJV-$vector@U-$pair@PEBGP.c)
 *     McTemplateU0z @ 0x1804056D8 (McTemplateU0z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ValidateLayoutFile(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // rbx
  int Schema; // eax
  int v6; // ebx
  __int64 (__fastcall *v7)(_QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, __int128 *); // rdi
  _variant_t *v13; // rax
  HRESULT v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64 *); // rdi
  int v17; // eax
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, _bstr_t::Data_t *); // r14
  _bstr_t::Data_t *v21; // rax
  _bstr_t::Data_t *v22; // rdi
  const struct std::nothrow_t *v23; // rdx
  __int64 v24; // rcx
  struct IDispatch *v26; // [rsp+20h] [rbp-60h] BYREF
  _bstr_t::Data_t *v27[3]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v28; // [rsp+40h] [rbp-40h] BYREF
  __int64 v29; // [rsp+50h] [rbp-30h]
  VARIANTARG pvarg; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v32; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+C8h] [rbp+48h] BYREF

  v27[1] = (_bstr_t::Data_t *)-2LL;
  v26 = 0LL;
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v28,
         a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  Schema = WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::LoadSchema(v4, (unsigned __int16 **)&v26);
  v6 = Schema;
  if ( Schema < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Schema);
    goto LABEL_25;
  }
  v32 = 0LL;
  v7 = **a2;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v8 = v7(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v32);
  v6 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 62LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v9);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    goto LABEL_25;
  }
  v11 = v32;
  v12 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v32 + 624LL);
  v13 = _variant_t::_variant_t((_variant_t *)&pvarg, v26);
  v28 = *(_OWORD *)v13;
  v29 = *((_QWORD *)v13 + 2);
  v6 = v12(v11, &v28);
  v14 = VariantClear(&pvarg);
  if ( v14 < 0 )
    _com_issue_error((char *)(unsigned int)v14);
  if ( v6 < 0 )
  {
    v9 = (unsigned int)v6;
    v10 = 63LL;
    goto LABEL_5;
  }
  v33 = 0LL;
  v15 = v32;
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 632LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  v17 = v16(v15, &v33);
  v6 = v17;
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v17);
  if ( v6 != 1 )
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
    goto LABEL_24;
  }
  v27[0] = 0LL;
  v19 = v33;
  v20 = *(void (__fastcall **)(__int64, _bstr_t::Data_t *))(*(_QWORD *)v33 + 72LL);
  _bstr_t::_Free(v27, v18);
  v21 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v22 = v21;
  v27[0] = v21;
  if ( v21 )
  {
    *((_QWORD *)v21 + 1) = 0LL;
    *((_DWORD *)v21 + 4) = 1;
    *(_QWORD *)v21 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  v27[0] = v22;
  if ( !v22 )
    _com_issue_error((char *)0x8007000ELL);
  v20(v19, v22);
  if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
    McTemplateU0z(v24, v23, *(_QWORD *)v22);
  _bstr_t::_Free(v27, v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v6 = -2147023431;
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v26);
  std::vector<tagRECT>::~vector<tagRECT>(a1);
  return (unsigned int)v6;
}

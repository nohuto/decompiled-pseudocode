/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x1801692C0
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x180169A20 (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180036E68 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18016290C (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180163190 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x180167534 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_OEMWebsitePinning@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180169DE8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_OEMWebsitePinning@@@wil@@CAX_NW4Repo.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18016A924 (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180405978 (-GetStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDO.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall TaskbarLayoutParser::ParsePinnedAppNode(
        const unsigned __int16 **this,
        struct IXMLDOMNode *a2,
        struct ITaskbarLayoutItem **a3)
{
  const struct _GUID *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  bool v11; // bl
  const struct std::nothrow_t *v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  bool v15; // bl
  const struct std::nothrow_t *v16; // rdx
  bool v17; // bl
  const struct std::nothrow_t *v18; // rdx
  _bstr_t::Data_t *v20; // [rsp+20h] [rbp-60h] BYREF
  __int64 v21; // [rsp+28h] [rbp-58h] BYREF
  void *v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+40h] [rbp-40h] BYREF
  std::_Ref_count_base *v25[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v26; // [rsp+60h] [rbp-20h]
  __int128 v27; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v26 = -2LL;
  *a3 = 0LL;
  v22 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v22);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v23 = 0LL;
    v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(&v22, &v23);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v9);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
      goto LABEL_25;
    }
    v21 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
    v10 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v21);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD1,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      goto LABEL_24;
    }
    *(_OWORD *)v24 = 0LL;
    *(_OWORD *)v25 = 0LL;
    v27 = 0LL;
    wil::Feature<__WilFeatureTraits_Feature_OEMWebsitePinning>::ReportUsageToService();
    _bstr_t::_bstr_t((_bstr_t *)&v20, this[2]);
    v11 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v21, &v20, v24) >= 0;
    _bstr_t::_Free(&v20, v12);
    if ( v11 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
      v8 = v13;
      if ( v13 < 0 )
      {
        v14 = 231LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v13);
LABEL_19:
        if ( v25[1] )
          std::_Ref_count_base::_Decref(v25[1]);
        if ( v24[1] )
          std::_Ref_count_base::_Decref(v24[1]);
        goto LABEL_23;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v20, this[3]);
      v15 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v21, &v20, v24) >= 0;
      _bstr_t::_Free(&v20, v16);
      if ( v15 )
      {
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 88LL))(v23);
        v8 = v13;
        if ( v13 < 0 )
        {
          v14 = 235LL;
          goto LABEL_16;
        }
      }
      else
      {
        _bstr_t::_bstr_t((_bstr_t *)&v20, this[4]);
        v17 = (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetStringAttributeValue(v21, &v20, v25) >= 0;
        _bstr_t::_Free(&v20, v18);
        if ( !v17 )
        {
          v8 = -2147467259;
          goto LABEL_19;
        }
        v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 72LL))(v23);
        v8 = v13;
        if ( v13 < 0 )
        {
          v14 = 239LL;
          goto LABEL_16;
        }
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
    *a3 = (struct ITaskbarLayoutItem *)v22;
    v8 = 0;
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  return v8;
}

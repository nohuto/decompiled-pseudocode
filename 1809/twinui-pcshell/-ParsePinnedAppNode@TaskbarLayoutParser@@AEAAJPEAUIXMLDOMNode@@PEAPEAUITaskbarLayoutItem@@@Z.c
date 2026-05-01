/*
 * XREFs of ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18013DE98
 * Callers:
 *     ?ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z @ 0x18013E61C (-ParseTaskbarLayoutNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@AEAUParsedTaskbarLayout@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UITaskbarLayoutItemInternal@@@?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITaskbarLayoutItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180137C04 (--$As@UITaskbarLayoutItemInternal@@@-$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@QEBAJV-$ComPtr.c)
 *     ??0_bstr_t@@QEAA@PEBG@Z @ 0x180138350 (--0_bstr_t@@QEAA@PEBG@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18013C524 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18013F16C (-TaskbarLayoutItem_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1803A0358 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 */

// Hidden C++ exception states: #wind=8
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
  bool v11; // di
  char v12; // bl
  const struct std::nothrow_t *v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  bool v16; // bl
  const struct std::nothrow_t *v17; // rdx
  void *v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  _bstr_t::Data_t *v21; // [rsp+30h] [rbp-40h] BYREF
  _bstr_t::Data_t *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  std::_Ref_count_base *v23[2]; // [rsp+48h] [rbp-28h] BYREF
  std::_Ref_count_base *v24[2]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  _bstr_t::Data_t *v26; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v27; // [rsp+A8h] [rbp+38h] BYREF

  v22[1] = (_bstr_t::Data_t *)-2LL;
  LODWORD(v26) = 0;
  *a3 = 0LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v7 = TaskbarLayoutItem_CreateInstance(v6, &v19);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v20 = 0LL;
    v9 = Microsoft::WRL::ComPtr<ITaskbarLayoutItem>::As<ITaskbarLayoutItemInternal>(&v19, &v20);
    v8 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCB,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v9);
LABEL_25:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
      goto LABEL_26;
    }
    v27 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    v10 = ((__int64 (__fastcall *)(struct IXMLDOMNode *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
            a2,
            &GUID_2933bf86_7b36_11d2_b20e_00c04f983e60,
            &v27);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
        (const char *)(unsigned int)v10);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
      goto LABEL_25;
    }
    *(_OWORD *)v23 = 0LL;
    *(_OWORD *)v24 = 0LL;
    _bstr_t::_bstr_t((_bstr_t *)v22, this[2]);
    v11 = 1;
    v12 = 1;
    LODWORD(v26) = 1;
    if ( (int)StartLayout::GetStringAttributeValue(v27, v22, v23) < 0 )
    {
      _bstr_t::_bstr_t((_bstr_t *)&v21, this[3]);
      v12 = 3;
      LODWORD(v26) = 3;
      v11 = (int)StartLayout::GetStringAttributeValue(v27, &v21, v23) >= 0;
    }
    if ( (v12 & 2) != 0 )
      _bstr_t::_Free(&v21, v13);
    _bstr_t::_Free(v22, v13);
    if ( v11 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 212LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
          (const char *)(unsigned int)v14);
LABEL_20:
        if ( v24[1] )
          std::_Ref_count_base::_Decref(v24[1]);
        if ( v23[1] )
          std::_Ref_count_base::_Decref(v23[1]);
        goto LABEL_24;
      }
    }
    else
    {
      _bstr_t::_bstr_t((_bstr_t *)&v26, this[4]);
      v16 = (int)StartLayout::GetStringAttributeValue(v27, &v26, v24) >= 0;
      _bstr_t::_Free(&v26, v17);
      if ( !v16 )
      {
        v8 = -2147467259;
        goto LABEL_20;
      }
      v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 56LL))(v20);
      v8 = v14;
      if ( v14 < 0 )
      {
        v15 = 216LL;
        goto LABEL_17;
      }
    }
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    *a3 = (struct ITaskbarLayoutItem *)v19;
    v8 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (__int64)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutparser.cpp",
    (const char *)(unsigned int)v7);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v8;
}

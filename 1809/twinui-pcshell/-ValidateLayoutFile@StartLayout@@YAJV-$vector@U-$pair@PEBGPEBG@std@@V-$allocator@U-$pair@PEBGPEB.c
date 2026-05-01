/*
 * XREFs of ?ValidateLayoutFile@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAUIXMLDOMDocument@@@Z @ 0x18039FDF4
 * Callers:
 *     ?ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013BF88 (-ValidateDefaultLayoutXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x18013C0EC (-ValidateLayoutModificationXML@TaskbarLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A01B0 (-ValidateDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 *     ?ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z @ 0x1801A0320 (-ValidateLayoutModificationXML@PWSLayoutPolicyManager@@AEAAJPEAUIXMLDOMDocument2@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180084C08 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_com_issue_error@@YAXJ@Z @ 0x1800E2538 (-_com_issue_error@@YAXJ@Z.c)
 *     ??0?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z @ 0x1801381D8 (--0-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Free@_bstr_t@@AEAAXXZ @ 0x18013C524 (-_Free@_bstr_t@@AEAAXXZ.c)
 *     ?_Tidy@?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ @ 0x18013C60C (-_Tidy@-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@2@@std@@AEAAXXZ.c)
 *     ??0_variant_t@@QEAA@PEAUIDispatch@@_N@Z @ 0x18039FA58 (--0_variant_t@@QEAA@PEAUIDispatch@@_N@Z.c)
 *     ?LoadSchema@StartLayout@@YAJV?$vector@U?$pair@PEBGPEBG@std@@V?$allocator@U?$pair@PEBGPEBG@std@@@2@@std@@PEAPEAUIXMLDOMSchemaCollection@@@Z @ 0x18039FCD4 (-LoadSchema@StartLayout@@YAJV-$vector@U-$pair@PEBGPEBG@std@@V-$allocator@U-$pair@PEBGPEBG@std@@@.c)
 *     McTemplateU0z @ 0x1803A00B8 (McTemplateU0z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall StartLayout::ValidateLayoutFile(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 *v4; // rbx
  int Schema; // eax
  int v6; // ebx
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  _variant_t *v10; // rax
  HRESULT v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  __int64 v15; // rsi
  _bstr_t::Data_t *v16; // rax
  _bstr_t::Data_t *v17; // rbx
  const struct std::nothrow_t *v18; // rdx
  __int64 v19; // rcx
  struct IDispatch *v21; // [rsp+20h] [rbp-60h] BYREF
  _bstr_t::Data_t *v22[3]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int64 v24; // [rsp+50h] [rbp-30h]
  VARIANTARG pvarg; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v22[1] = (_bstr_t::Data_t *)-2LL;
  v21 = 0LL;
  v4 = std::vector<std::pair<unsigned short const *,unsigned short const *>>::vector<std::pair<unsigned short const *,unsigned short const *>>(
         &v23,
         a1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  Schema = StartLayout::LoadSchema(v4, (unsigned __int16 **)&v21);
  v6 = Schema;
  if ( Schema < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x38,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)Schema);
    goto LABEL_25;
  }
  v27 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v7 = (**a2)(a2, &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60, &v27);
  v6 = v7;
  if ( v7 < 0 )
  {
    v8 = (unsigned int)v7;
    v9 = 60LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)v8);
LABEL_24:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    goto LABEL_25;
  }
  v10 = _variant_t::_variant_t((_variant_t *)&pvarg, v21);
  v23 = *(_OWORD *)v10;
  v24 = *((_QWORD *)v10 + 2);
  v6 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v27 + 624LL))(v27, &v23);
  v11 = VariantClear(&pvarg);
  if ( v11 < 0 )
    _com_issue_error((char *)(unsigned int)v11);
  if ( v6 < 0 )
  {
    v8 = (unsigned int)v6;
    v9 = 61LL;
    goto LABEL_5;
  }
  v28 = 0LL;
  v12 = v27;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 632LL))(v12, &v28);
  v6 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      64LL,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
      (const char *)(unsigned int)v13);
  if ( v6 != 1 )
  {
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x49,
        (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\layoutxmlvalidationhelper.cpp",
        (const char *)(unsigned int)v6);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
    goto LABEL_24;
  }
  v22[0] = 0LL;
  v15 = v28;
  _bstr_t::_Free(v22, v14);
  v16 = (_bstr_t::Data_t *)operator new(0x18uLL);
  v17 = v16;
  v22[0] = v16;
  if ( v16 )
  {
    *((_QWORD *)v16 + 1) = 0LL;
    *((_DWORD *)v16 + 4) = 1;
    *(_QWORD *)v16 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  v22[0] = v17;
  if ( !v17 )
    _com_issue_error((char *)0x8007000ELL);
  (*(void (__fastcall **)(__int64, _bstr_t::Data_t *))(*(_QWORD *)v15 + 72LL))(v15, v17);
  if ( (Microsoft_Windows_ShellCommon_StartLayoutPopulationEnableBits & 4) != 0 )
    McTemplateU0z(v19, v18, *(_QWORD *)v17);
  _bstr_t::_Free(v22, v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
  v6 = -2147023431;
LABEL_25:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
  std::vector<std::pair<unsigned short const *,unsigned short const *>>::_Tidy(a1);
  return (unsigned int)v6;
}

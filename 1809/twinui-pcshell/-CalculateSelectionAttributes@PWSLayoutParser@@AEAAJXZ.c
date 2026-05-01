/*
 * XREFs of ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C
 * Callers:
 *     ?ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAV?$CCoSimpleArray@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x1801A0BE0 (-ParsePWSLayoutCollectionNode@PWSLayoutParser@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@A.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800498D4 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18005EE24 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013C968 (--$GetActivationFactory@V-$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Fo.c)
 *     ??$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@?$vector@W4LayoutSKU@SharedStartModel@@V?$allocator@W4LayoutSKU@SharedStartModel@@@std@@@std@@QEAAPEAW4LayoutSKU@SharedStartModel@@QEAW423@AEBW423@@Z @ 0x18013CDE0 (--$_Emplace_reallocate@AEBW4LayoutSKU@SharedStartModel@@@-$vector@W4LayoutSKU@SharedStartModel@@.c)
 *     ?AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z @ 0x18013D89C (-AddRegionCode@SelectionData@StartLayout@@QEAAXPEBG@Z.c)
 *     ?GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@W4RegionLookupFallbackOptions@2@@Z @ 0x1803A0620 (-GetCurrentRegionCode@RegionHelpers@StartLayout@@YAJAEAV-$NativeString@V-$CoTaskMemPolicy@G@Inte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PWSLayoutParser::CalculateSelectionAttributes(PWSLayoutParser *this)
{
  const unsigned __int16 *v2; // rdx
  int CurrentRegionCode; // eax
  _BYTE *v4; // rdx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rdx
  _BYTE *v9; // rdx
  int v10; // [rsp+20h] [rbp-50h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h] BYREF
  int v12; // [rsp+30h] [rbp-40h] BYREF
  __int64 v13; // [rsp+38h] [rbp-38h]
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v15; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v13 = -2LL;
  v2 = (const unsigned __int16 *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    StartLayout::SelectionData::AddRegionCode((PWSLayoutParser *)((char *)this + 40), v2);
  }
  else
  {
    memset(&hstringHeader, 0, sizeof(hstringHeader));
    CurrentRegionCode = StartLayout::RegionHelpers::GetCurrentRegionCode(&hstringHeader);
    if ( CurrentRegionCode < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        148LL,
        (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
        (const char *)(unsigned int)CurrentRegionCode);
    StartLayout::SelectionData::AddRegionCode(
      (PWSLayoutParser *)((char *)this + 40),
      (const unsigned __int16 *)hstringHeader.Reserved.Reserved1);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&hstringHeader);
  }
  if ( !IsPPIEdition() )
  {
    v11 = 0LL;
    v15 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"SharedStartModel.LayoutSelectionHelpers",
      0x28u,
      0x27u);
    v5 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::ILayoutSelectionHelpers>>(
           v15,
           &v11);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v11 + 56LL))(v11, &v10);
      v6 = v5;
      if ( v5 >= 0 )
      {
        if ( v10 )
        {
          v12 = v10;
          v9 = (_BYTE *)*((_QWORD *)this + 10);
          if ( *((_BYTE **)this + 11) == v9 )
          {
            std::vector<enum SharedStartModel::LayoutSKU>::_Emplace_reallocate<enum SharedStartModel::LayoutSKU const &>(
              (const void **)this + 9,
              v9,
              &v12);
          }
          else
          {
            *(_DWORD *)v9 = v10;
            *((_QWORD *)this + 10) += 4LL;
          }
          *((_BYTE *)this + 43) = 1;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
        return 0LL;
      }
      v7 = 167LL;
    }
    else
    {
      v7 = 165LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwslayoutparser.cpp",
      (const char *)(unsigned int)v5);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    return v6;
  }
  v10 = 9;
  v4 = (_BYTE *)*((_QWORD *)this + 10);
  if ( *((_BYTE **)this + 11) == v4 )
  {
    std::vector<enum SharedStartModel::LayoutSKU>::_Emplace_reallocate<enum SharedStartModel::LayoutSKU const &>(
      (const void **)this + 9,
      v4,
      &v10);
  }
  else
  {
    *(_DWORD *)v4 = 9;
    *((_QWORD *)this + 10) += 4LL;
  }
  *((_BYTE *)this + 43) = 1;
  return 0LL;
}

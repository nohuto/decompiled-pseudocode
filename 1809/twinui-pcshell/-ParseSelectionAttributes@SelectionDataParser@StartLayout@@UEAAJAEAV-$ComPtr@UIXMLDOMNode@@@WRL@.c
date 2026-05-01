/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x1803A0E50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180137C48 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x1803A0258 (-GetBoolAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x1803A0358 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x1803A0490 (-GetUintAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z.c)
 *     StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___ @ 0x1803A07A8 (StartLayout--ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___.c)
 *     StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___ @ 0x1803A082C (StartLayout--ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___.c)
 *     StartLayout::ParseTokenizedAttribute__lambda_d553da275659283e99699156588b60ce___ @ 0x1803A0894 (StartLayout--ParseTokenizedAttribute__lambda_d553da275659283e99699156588b60ce___.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall StartLayout::SelectionDataParser::ParseSelectionAttributes(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int *v7; // r9
  const WCHAR *v8; // rcx
  bool *v9; // r9
  const WCHAR *v10; // rcx
  bool *v11; // r9
  const WCHAR *v12; // rcx
  StartLayout *v14[2]; // [rsp+20h] [rbp-50h] BYREF
  std::_Ref_count_base *v15[2]; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v16[2]; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v17[2]; // [rsp+50h] [rbp-20h] BYREF
  __int128 v18; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]
  int v20; // [rsp+98h] [rbp+28h] BYREF

  v14[1] = (StartLayout *)-2LL;
  v14[0] = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(a2, (__int64 *)v14);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_OWORD *)v17 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v14[0], (__int64 **)(a1 + 56), v17) >= 0 )
    {
      v16[0] = (std::_Ref_count_base *)a1;
      v16[1] = (std::_Ref_count_base *)a3;
      v18 = *(_OWORD *)v16;
      v8 = (const WCHAR *)v17[0];
      if ( *((_QWORD *)v17[0] + 3) >= 8uLL )
        v8 = *(const WCHAR **)v17[0];
      StartLayout::ParseTokenizedAttribute__lambda_487048254b6df460bceb2a28745a80c4___(v8, (__int64)&v18);
    }
    if ( (int)StartLayout::GetUintAttributeValue(
                v14[0],
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)&v20,
                v7) >= 0 )
    {
      *(_DWORD *)(a3 + 56) = v20;
      *(_BYTE *)(a3 + 1) = 1;
    }
    *(_OWORD *)v16 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v14[0], (__int64 **)(a1 + 32), v16) >= 0 )
    {
      v10 = (const WCHAR *)v16[0];
      if ( *((_QWORD *)v16[0] + 3) >= 8uLL )
        v10 = *(const WCHAR **)v16[0];
      StartLayout::ParseTokenizedAttribute__lambda_7b0ceb0e91dc9688fdbd966b3a487469___(
        v10,
        (StartLayout::SelectionData *)a3);
    }
    if ( (int)StartLayout::GetBoolAttributeValue(
                v14[0],
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)&v20,
                v9) >= 0 )
    {
      *(_BYTE *)(a3 + 61) = v20;
      *(_BYTE *)(a3 + 4) = 1;
    }
    if ( (int)StartLayout::GetBoolAttributeValue(
                v14[0],
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)&v20,
                v11) >= 0 )
    {
      *(_BYTE *)(a3 + 60) = v20;
      *(_BYTE *)(a3 + 2) = 1;
    }
    *(_OWORD *)v15 = 0LL;
    if ( (int)StartLayout::GetStringAttributeValue((__int64)v14[0], (__int64 **)(a1 + 48), v15) >= 0 )
    {
      *(_QWORD *)&v18 = a1;
      *((_QWORD *)&v18 + 1) = a3;
      v12 = (const WCHAR *)v15[0];
      if ( *((_QWORD *)v15[0] + 3) >= 8uLL )
        v12 = *(const WCHAR **)v15[0];
      StartLayout::ParseTokenizedAttribute__lambda_d553da275659283e99699156588b60ce___(v12, (__int64)&v18);
    }
    v6 = 0;
    if ( v15[1] )
      std::_Ref_count_base::_Decref(v15[1]);
    if ( v16[1] )
      std::_Ref_count_base::_Decref(v16[1]);
    if ( v17[1] )
      std::_Ref_count_base::_Decref(v17[1]);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x41,
      (__int64)"shellcommon\\shell\\tiles\\startlayout\\layoutinitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v14);
  return v6;
}

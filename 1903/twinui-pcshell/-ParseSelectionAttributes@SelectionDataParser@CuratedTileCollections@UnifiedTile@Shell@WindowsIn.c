/*
 * XREFs of ?ParseSelectionAttributes@SelectionDataParser@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2345@@Z @ 0x1804066F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIXMLDOMElement@@@?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIXMLDOMElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x180162950 (--$As@UIXMLDOMElement@@@-$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIXML.c)
 *     ?GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEA_N@Z @ 0x180405878 (-GetBoolAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 *     ?GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEBV?$function@$$A6AXPEAG@Z@std@@@Z @ 0x180405AB4 (-GetTokenizedStringAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJP.c)
 *     ?GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@PEAI@Z @ 0x180405B9C (-GetUintAttributeValue@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJPEAUIXMLDOME.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionDataParser::ParseSelectionAttributes(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  int v5; // eax
  unsigned int v6; // esi
  unsigned int *v7; // r9
  __int64 (__fastcall ***v8)(); // rdx
  bool *v9; // r9
  __int64 (__fastcall ***v10)(); // rdx
  bool *v11; // r9
  bool *v12; // r9
  bool *v13; // r9
  bool *v14; // r9
  __int64 (__fastcall ***v15)(); // rdx
  _BYTE v17[8]; // [rsp+28h] [rbp-39h] BYREF
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections *v18; // [rsp+30h] [rbp-31h] BYREF
  int v19; // [rsp+38h] [rbp-29h] BYREF
  __int128 v20; // [rsp+40h] [rbp-21h]
  __int64 v21; // [rsp+50h] [rbp-11h]
  __int64 (__fastcall **v22)(); // [rsp+58h] [rbp-9h] BYREF
  __int128 v23; // [rsp+60h] [rbp-1h]
  __int64 (__fastcall ***v24)(); // [rsp+90h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21 = -2LL;
  v18 = 0LL;
  v5 = Microsoft::WRL::ComPtr<IXMLDOMNode>::As<IXMLDOMElement>(a2, (__int64 *)&v18);
  v6 = v5;
  if ( v5 >= 0 )
  {
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v22 = off_180466A30;
    v23 = v20;
    v24 = &v22;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 72),
      (__int64)&v22);
    if ( v24 )
    {
      v8 = &v22;
      LOBYTE(v8) = v24 != &v22;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v24)[4])(v24, v8);
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetUintAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 16),
                (const struct _bstr_t *)&v19,
                v7) >= 0 )
    {
      *(_DWORD *)(a3 + 88) = v19;
      *(_BYTE *)(a3 + 1) = 1;
    }
    v22 = off_180466A00;
    *(_QWORD *)&v23 = a3;
    v24 = &v22;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 56),
      (__int64)&v22);
    if ( v24 )
    {
      v10 = &v22;
      LOBYTE(v10) = v24 != &v22;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v24)[4])(v24, v10);
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 24),
                (const struct _bstr_t *)v17,
                v9) >= 0 )
    {
      *(_BYTE *)(a3 + 93) = v17[0];
      *(_BYTE *)(a3 + 5) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 32),
                (const struct _bstr_t *)v17,
                v11) >= 0 )
    {
      *(_BYTE *)(a3 + 94) = v17[0];
      *(_BYTE *)(a3 + 6) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 40),
                (const struct _bstr_t *)v17,
                v12) >= 0 )
    {
      *(_BYTE *)(a3 + 95) = v17[0];
      *(_BYTE *)(a3 + 7) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 48),
                (const struct _bstr_t *)v17,
                v13) >= 0 )
    {
      *(_BYTE *)(a3 + 96) = v17[0];
      *(_BYTE *)(a3 + 8) = 1;
    }
    if ( (int)WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetBoolAttributeValue(
                v18,
                (struct IXMLDOMElement *)(a1 + 64),
                (const struct _bstr_t *)v17,
                v14) >= 0 )
    {
      *(_BYTE *)(a3 + 92) = v17[0];
      *(_BYTE *)(a3 + 2) = 1;
    }
    *(_QWORD *)&v20 = a1;
    *((_QWORD *)&v20 + 1) = a3;
    v22 = off_1804669D0;
    v23 = v20;
    v24 = &v22;
    WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::GetTokenizedStringAttributeValue(
      (__int64)v18,
      (__int64 **)(a1 + 80),
      (__int64)&v22);
    if ( v24 )
    {
      v15 = &v22;
      LOBYTE(v15) = v24 != &v22;
      ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v24)[4])(v24, v15);
    }
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3C,
      (__int64)"shellcommon\\shell\\tiles\\curatedtilecollections\\collectioninitialization\\helpers\\selectiondataparser.cpp",
      (const char *)(unsigned int)v5);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return v6;
}

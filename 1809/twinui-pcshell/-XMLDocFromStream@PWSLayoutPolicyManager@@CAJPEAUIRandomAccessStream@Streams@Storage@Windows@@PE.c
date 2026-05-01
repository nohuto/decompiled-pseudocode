/*
 * XREFs of ?XMLDocFromStream@PWSLayoutPolicyManager@@CAJPEAUIRandomAccessStream@Streams@Storage@Windows@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x1801A04A4
 * Callers:
 *     ?GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z @ 0x18019F640 (-GetDefaultLayoutXML@PWSLayoutPolicyManager@@AEAAJPEAPEAUIXMLDOMDocument2@@@Z.c)
 *     ?LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsoft@@PEAPEAUIXMLDOMDocument2@@@Z @ 0x18019F9C8 (-LoadLayoutXMLFromFilePath@PWSLayoutPolicyManager@@CAJPEAVHStringReference@Wrappers@WRL@Microsof.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIPersistStream@@@?$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPersistStream@@@WRL@Microsoft@@@Details@12@@Z @ 0x180137BC0 (--$As@UIPersistStream@@@-$ComPtr@UIXMLDOMDocument2@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PWSLayoutPolicyManager::XMLDocFromStream(
        struct Windows::Storage::Streams::IRandomAccessStream *a1,
        struct IXMLDOMDocument2 **a2)
{
  HRESULT v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  struct IXMLDOMDocument2 *v8; // rcx
  _QWORD *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  LPVOID ppv; // [rsp+68h] [rbp+28h] BYREF
  _QWORD *v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  ppv = 0LL;
  v13 = 0LL;
  v3 = CreateStreamOverRandomAccessStream(a1, &GUID_0000000c_0000_0000_c000_000000000046, &v13);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 273LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_17;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v3 = CoCreateInstance(
         &GUID_88d96a05_f192_11d4_a65f_0040963251e5,
         0LL,
         1u,
         &GUID_2933bf95_7b36_11d2_b20e_00c04f983e60,
         &ppv);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 274LL;
    goto LABEL_7;
  }
  v3 = (*(__int64 (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv + 504LL))(ppv, 0LL);
  v4 = v3;
  if ( v3 < 0 )
  {
    v5 = 275LL;
    goto LABEL_7;
  }
  v14 = 0LL;
  v6 = Microsoft::WRL::ComPtr<IXMLDOMDocument2>::As<IPersistStream>(&ppv, &v14);
  v4 = v6;
  if ( v6 >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 40LL))(v14, v13);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v8 = (struct IXMLDOMDocument2 *)ppv;
      if ( ppv )
      {
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 8LL))(ppv);
        v8 = (struct IXMLDOMDocument2 *)ppv;
      }
      *a2 = v8;
      v4 = 0;
      goto LABEL_16;
    }
    v7 = 279LL;
  }
  else
  {
    v7 = 278LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\penworkspacelayoutpolicy\\pwspolicymanager.cpp",
    (const char *)(unsigned int)v6);
LABEL_16:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
LABEL_17:
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v4;
}

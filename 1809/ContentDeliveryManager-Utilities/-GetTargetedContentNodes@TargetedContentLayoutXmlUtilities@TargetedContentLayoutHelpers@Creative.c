/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x18009CAEC
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x18009FE40 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180031A74 (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800A0EE8 (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  unsigned __int64 v4; // rax
  UINT32 v5; // edi
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  unsigned int i; // esi
  int v10; // eax
  unsigned __int64 v11; // rdx
  char v12; // al
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r8
  __int64 v28; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+38h] [rbp-48h]
  __int64 v32; // [rsp+40h] [rbp-40h]
  _QWORD *v33; // [rsp+48h] [rbp-38h]
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v32 = -2LL;
  v33 = a2;
  v31 = 0;
  v30 = 0LL;
  v3 = *a1;
  v4 = -1LL;
  do
    ++v4;
  while ( aStartTargetedc[v4] );
  v5 = -1;
  if ( v4 > 0xFFFFFFFF )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  else
    v5 = v4;
  WindowsCreateStringReference(L"start:TargetedContentTile", v5, &hstringHeader, &string);
  v6 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v3 + 128LL))(v3, string, &v30);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_43:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x89,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v30 + 48LL))(v30, &v29);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8);
LABEL_45:
    std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v31 = 1;
  for ( i = 0; i < v29; ++i )
  {
    v28 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 56LL))(v30, i, &v28);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x93,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
        (const char *)(unsigned int)v10);
      goto LABEL_43;
    }
    v11 = a2[1];
    if ( (unsigned __int64)&v28 >= v11 || (v12 = 1, *a2 > (unsigned __int64)&v28) )
      v12 = 0;
    v13 = a2[2];
    if ( v12 )
    {
      v14 = ((__int64)&v28 - *a2) >> 3;
      v15 = *a2;
      v16 = (_QWORD *)a2[1];
      if ( v11 == v13 && !((__int64)(v13 - v11) >> 3) )
      {
        v17 = (__int64)(v11 - v15) >> 3;
        if ( v17 == 0x1FFFFFFFFFFFFFFFLL )
          goto LABEL_45;
        v18 = v17 + 1;
        v19 = (v13 - v15) >> 3;
        v20 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v19 >> 1) >= v19 )
          v20 = v19 + (v19 >> 1);
        if ( v20 >= v18 )
          v18 = v20;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v18);
        v15 = *a2;
        v16 = (_QWORD *)a2[1];
      }
      v21 = *(_QWORD *)(v15 + 8 * v14);
      *v16 = v21;
      if ( !v21 )
        goto LABEL_34;
    }
    else
    {
      v22 = (_QWORD *)a2[1];
      if ( v11 == v13 && !((__int64)(v13 - v11) >> 3) )
      {
        v23 = (__int64)(v11 - *a2) >> 3;
        if ( v23 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v24 = v23 + 1;
        v25 = (v13 - *a2) >> 3;
        v26 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v25 >> 1) >= v25 )
          v26 = v25 + (v25 >> 1);
        if ( v26 >= v24 )
          v24 = v26;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v24);
        v22 = (_QWORD *)a2[1];
      }
      *v22 = v28;
      v21 = v28;
      if ( !v28 )
        goto LABEL_35;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
LABEL_34:
    v21 = v28;
LABEL_35:
    a2[1] += 8LL;
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return a2;
}

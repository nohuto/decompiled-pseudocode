/*
 * XREFs of ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A0A28
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800A3B14 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
        __int64 a1,
        HSTRING *a2,
        _QWORD *a3)
{
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, HSTRING, __int64 *); // r15
  unsigned __int64 v8; // rdi
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  __int64 v16; // [rsp+28h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v18[1] = -2LL;
  v18[2] = a2;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 128LL))(*a3, &v17);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_17;
  v16 = 0LL;
  v6 = v17;
  v7 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v17 + 64LL);
  v8 = -1LL;
  do
    ++v8;
  while ( aTileid[v8] );
  if ( v8 > 0xFFFFFFFF )
  {
    LODWORD(v8) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"TileID", v8, &hstringHeader, &string);
  v9 = v7(v6, string, &v16);
  v10 = retaddr;
  if ( v9 < 0 )
  {
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  *a2 = 0LL;
  v11 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v16)(
          v16,
          &GUID_ac144aa4_b4f1_4db6_b206_8a22c308db0a,
          v18);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x1800A0C30LL);
  }
  v12 = v18[0];
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18[0] + 64LL);
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v14 = v13(v12, a2);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v14);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v4);
    goto LABEL_18;
  }
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return a2;
}

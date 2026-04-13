/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800A2CA8
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A36B8 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, char *); // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, _QWORD **); // r14
  HSTRING_HEADER *v17; // rdi
  _QWORD *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  _QWORD *v21; // rbx
  __int64 (__fastcall *v22)(_QWORD *, HSTRING *); // rdi
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  _QWORD *v25; // rbx
  __int64 (__fastcall *v26)(_QWORD *, HSTRING *); // rdi
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  __int64 (__fastcall *v29)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING); // rbx
  HSTRING_HEADER *v30; // rax
  int v31; // eax
  char v32[8]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v35[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v36; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v35[1] = -2LL;
  v7 = *(_QWORD *)a2;
  v35[0] = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(v7 + 80))(
         a2,
         v35);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_16;
  v32[0] = 0;
  v10 = v35[0];
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, char *))(*(_QWORD *)v35[0] + 64LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)&off_1800F6010);
  v13 = v11(v10, v12[1].Reserved.Reserved1, v32);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x12A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x12E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_19;
  }
  if ( !v32[0] )
    goto LABEL_12;
  v33 = 0LL;
  v15 = v35[0];
  v16 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD **))(*(_QWORD *)v35[0] + 48LL);
  v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)&off_1800F6010);
  v18 = v33;
  v33 = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v18 + 16LL))(v18, *v18);
  v19 = v16(v15, v17[1].Reserved.Reserved1, &v33);
  v20 = retaddr;
  if ( v19 < 0 )
    goto LABEL_18;
  v21 = v33;
  v22 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v33 + 64LL);
  WindowsDeleteString(*this);
  *this = 0LL;
  v23 = v22(v21, this);
  v24 = retaddr;
  if ( v23 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x12F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v23);
    goto LABEL_20;
  }
  string = 0LL;
  v25 = v33;
  v26 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v33 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v27 = v26(v25, &string);
  v28 = retaddr;
  if ( v27 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v28,
      (void *)0x132,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v27);
    JUMPOUT(0x1800A2F26LL);
  }
  v29 = *(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL);
  v30 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v36, (const WCHAR **)off_1800F6008);
  v31 = v29(a4, v30[1].Reserved.Reserved1, a3, string);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v31);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(_QWORD *))(*v33 + 16LL))(v33);
LABEL_12:
  if ( v35[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v35[0] + 16LL))(v35[0]);
}

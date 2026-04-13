/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x18009EEA0
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009F864 (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rsi
  _QWORD *v15; // rcx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  _QWORD *v18; // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  _QWORD *v21; // rbx
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  char v26[8]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD *v27; // [rsp+38h] [rbp-21h] BYREF
  HSTRING string; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v29[2]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v30[32]; // [rsp+58h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v29[1] = -2LL;
  v29[0] = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, _QWORD *))(*(_QWORD *)a2 + 80LL))(
         a2,
         v29);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_16;
  v26[0] = 0;
  v9 = v29[0];
  v10 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                      (__int64)v30,
                      (const WCHAR **)off_1800F1978)
                  + 24);
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v9 + 64LL))(v9, v10, v26);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x12A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v11);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x12E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_19;
  }
  if ( !v26[0] )
    goto LABEL_12;
  v27 = 0LL;
  v13 = v29[0];
  v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)off_1800F1978);
  v15 = v27;
  v27 = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v15 + 16LL))(v15, *v15);
  v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v13 + 48LL))(
          v13,
          *(_QWORD *)(v14 + 24),
          &v27);
  v17 = retaddr;
  if ( v16 < 0 )
    goto LABEL_18;
  v18 = v27;
  WindowsDeleteString(*this);
  *this = 0LL;
  v19 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v18 + 64LL))(v18, this);
  v20 = retaddr;
  if ( v19 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x12F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_20;
  }
  string = 0LL;
  v21 = v27;
  WindowsDeleteString(0LL);
  string = 0LL;
  v22 = (*(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v21 + 56LL))(v21, &string);
  v23 = retaddr;
  if ( v22 < 0 )
  {
LABEL_20:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x132,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v22);
    JUMPOUT(0x18009F10DLL);
  }
  v24 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v30, (const WCHAR **)&off_1800F1980);
  v25 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, _QWORD, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL))(
          a4,
          *(_QWORD *)(v24 + 24),
          a3,
          string);
  if ( v25 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x133,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v25);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x127,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7);
    goto LABEL_17;
  }
  WindowsDeleteString(string);
  string = 0LL;
  if ( v27 )
    (*(void (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
LABEL_12:
  if ( v29[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
}

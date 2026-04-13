/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x1800878D8
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087180 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087280 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180088A68 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *a2,
        char a3)
{
  __int64 (__fastcall **v5)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *); // rax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING, HSTRING, HSTRING); // rdi
  __int64 v22; // rax
  const WCHAR *v23; // rcx
  HRESULT v24; // eax
  __int64 v25; // rax
  const WCHAR *v26; // rcx
  HRESULT v27; // eax
  int v28; // eax
  wil::details::in1diag3 *v29; // rcx
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  wil::details::in1diag3 *v34; // rcx
  int v35; // eax
  _BYTE v36[8]; // [rsp+38h] [rbp-49h] BYREF
  __int64 v37; // [rsp+40h] [rbp-41h] BYREF
  HSTRING v38; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v39; // [rsp+50h] [rbp-31h] BYREF
  __int64 *v40; // [rsp+58h] [rbp-29h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-11h] BYREF
  HSTRING string; // [rsp+88h] [rbp+7h] BYREF
  HSTRING_HEADER v44; // [rsp+90h] [rbp+Fh] BYREF
  HSTRING v45; // [rsp+A8h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v41[1] = -2LL;
  v5 = *(__int64 (__fastcall ***)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *))a2;
  v41[0] = 0LL;
  v6 = (*v5)(a2, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, v41);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_28:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x243,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_29;
  }
  v38 = 0LL;
  v8 = v41[0];
  v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41[0] + 48LL);
  WindowsDeleteString(0LL);
  v38 = 0LL;
  v10 = v9(v8, &v38);
  v11 = retaddr;
  if ( v10 < 0 )
  {
LABEL_29:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x246,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_30;
  }
  v39 = 0LL;
  v12 = v41[0];
  v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41[0] + 56LL);
  WindowsDeleteString(0LL);
  v39 = 0LL;
  v14 = v13(v12, &v39);
  v15 = retaddr;
  if ( v14 < 0 )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x248,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x24E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v40);
  if ( !a3 )
  {
    v30 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _BYTE *))(*v40 + 56))(v40, v38, v36);
    v31 = retaddr;
    if ( v30 < 0 )
    {
LABEL_37:
      wil::details::in1diag3::Throw_Hr(
        v31,
        (void *)0x257,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v30);
      goto LABEL_38;
    }
    if ( !v36[0] )
      goto LABEL_22;
    v37 = 0LL;
    v32 = *v40;
    v37 = 0LL;
    v33 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _QWORD, __int64 *))(v32 + 64))(v40, v38, 0LL, &v37);
    v34 = retaddr;
    if ( v33 < 0 )
    {
LABEL_38:
      wil::details::in1diag3::Throw_Hr(
        v34,
        (void *)0x25B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v33);
      JUMPOUT(0x180087C66LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v37 + 80LL))(v37, v39);
    if ( v35 >= 0 )
      goto LABEL_20;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v35);
    goto LABEL_28;
  }
  v37 = 0LL;
  v17 = *v40;
  v37 = 0LL;
  LOBYTE(v16) = 1;
  v18 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64, __int64 *))(v17 + 64))(v40, v38, v16, &v37);
  v19 = retaddr;
  if ( v18 < 0 )
    goto LABEL_31;
  v20 = v37;
  v21 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v37 + 48LL);
  v22 = *((_QWORD *)this + 20);
  v23 = (const WCHAR *)((char *)this + 144);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v23 = *(const WCHAR **)v23;
  string = 0LL;
  if ( (int)v22 + 1 < (unsigned int)v22 )
    goto LABEL_36;
  v24 = WindowsCreateStringReference(v23, v22, &hstringHeader, &string);
  if ( v24 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v24);
LABEL_33:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v27);
    goto LABEL_34;
  }
  v25 = *((_QWORD *)this + 16);
  v26 = (const WCHAR *)((char *)this + 112);
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v26 = *(const WCHAR **)v26;
  v45 = 0LL;
  if ( (int)v25 + 1 < (unsigned int)v25 )
    goto LABEL_35;
  v27 = WindowsCreateStringReference(v26, v25, &v44, &v45);
  if ( v27 < 0 )
    goto LABEL_33;
  v28 = v21(v20, v39, v45, string);
  v29 = retaddr;
  if ( v28 < 0 )
  {
LABEL_34:
    wil::details::in1diag3::Throw_Hr(
      v29,
      (void *)0x252,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v28);
LABEL_35:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
LABEL_36:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
    goto LABEL_37;
  }
LABEL_20:
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
LABEL_22:
  if ( v40 )
    (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
  WindowsDeleteString(v39);
  v39 = 0LL;
  WindowsDeleteString(v38);
  v38 = 0LL;
  if ( v41[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
}

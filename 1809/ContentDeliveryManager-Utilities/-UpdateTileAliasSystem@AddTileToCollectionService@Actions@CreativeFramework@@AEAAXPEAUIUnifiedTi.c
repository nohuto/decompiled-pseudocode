/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180085B3C
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085410 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085510 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086CBC (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *a2,
        char a3)
{
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  __int64 v7; // rbx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r8
  const WCHAR *v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // r9d
  UINT32 v22; // edx
  HRESULT v23; // eax
  __int64 v24; // rcx
  const WCHAR *v25; // r10
  unsigned int v26; // eax
  unsigned int v27; // edx
  UINT32 v28; // edx
  HRESULT v29; // eax
  int v30; // eax
  wil::details::in1diag3 *v31; // rcx
  int v32; // eax
  wil::details::in1diag3 *v33; // rcx
  int v34; // eax
  wil::details::in1diag3 *v35; // rcx
  int v36; // eax
  _BYTE v37[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v38; // [rsp+40h] [rbp-31h] BYREF
  __int64 v39; // [rsp+48h] [rbp-29h] BYREF
  HSTRING v40; // [rsp+50h] [rbp-21h] BYREF
  __int64 v41; // [rsp+58h] [rbp-19h] BYREF
  _QWORD v42[2]; // [rsp+60h] [rbp-11h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+88h] [rbp+17h] BYREF
  HSTRING_HEADER v45; // [rsp+90h] [rbp+1Fh] BYREF
  HSTRING v46; // [rsp+A8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v42[1] = -2LL;
  v42[0] = 0LL;
  v5 = (**(__int64 (__fastcall ***)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, _QWORD *))a2)(
         a2,
         &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
         v42);
  v6 = retaddr;
  if ( v5 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x242,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_37;
  }
  v7 = v42[0];
  WindowsDeleteString(0LL);
  v38 = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v7 + 48LL))(v7, &v38);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x245,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_38;
  }
  v40 = 0LL;
  v10 = v42[0];
  WindowsDeleteString(0LL);
  v40 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v10 + 56LL))(v10, &v40);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x247,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x24D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(&v41);
  if ( !a3 )
  {
    v32 = (*(__int64 (__fastcall **)(__int64, HSTRING, _BYTE *))(*(_QWORD *)v41 + 56LL))(v41, v38, v37);
    v33 = retaddr;
    if ( v32 < 0 )
    {
LABEL_45:
      wil::details::in1diag3::Throw_Hr(
        v33,
        (void *)0x256,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v32);
      goto LABEL_46;
    }
    if ( !v37[0] )
      goto LABEL_30;
    v39 = 0LL;
    v34 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD, __int64 *))(*(_QWORD *)v41 + 64LL))(v41, v38, 0LL, &v39);
    v35 = retaddr;
    if ( v34 < 0 )
    {
LABEL_46:
      wil::details::in1diag3::Throw_Hr(
        v35,
        (void *)0x25A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v34);
      JUMPOUT(0x180085EEBLL);
    }
    v36 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v39 + 80LL))(v39, v40);
    if ( v36 >= 0 )
      goto LABEL_28;
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v36);
    goto LABEL_36;
  }
  v39 = 0LL;
  LOBYTE(v13) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64 *))(*(_QWORD *)v41 + 64LL))(v41, v38, v13, &v39);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_39;
  v16 = v39;
  v17 = *((_QWORD *)this + 20);
  v18 = (const WCHAR *)((char *)this + 144);
  if ( *((_QWORD *)this + 21) >= 8uLL )
    v18 = *(const WCHAR **)v18;
  string = 0LL;
  v19 = v17 + 1;
  v20 = -1;
  v21 = -1;
  if ( (int)v17 + 1 >= (unsigned int)v17 )
    v21 = v17 + 1;
  if ( v19 < (unsigned int)v17 )
  {
    Microsoft::WRL::Details::RaiseException(v19 < (unsigned int)v17 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
    __debugbreak();
  }
  v22 = v21 - 1;
  if ( (unsigned int)v17 < v21 )
    v22 = v17;
  v23 = WindowsCreateStringReference(v18, v22, &hstringHeader, &string);
  if ( v23 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23);
    goto LABEL_42;
  }
  v24 = *((_QWORD *)this + 16);
  v25 = (const WCHAR *)((char *)this + 112);
  if ( *((_QWORD *)this + 17) >= 8uLL )
    v25 = *(const WCHAR **)v25;
  v46 = 0LL;
  v26 = v24 + 1;
  if ( (int)v24 + 1 >= (unsigned int)v24 )
    v20 = v24 + 1;
  v27 = v26 < (unsigned int)v24 ? 0x80070216 : 0;
  if ( v26 < (unsigned int)v24 )
  {
LABEL_42:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v27);
    __debugbreak();
  }
  v28 = v20 - 1;
  if ( (unsigned int)v24 < v20 )
    v28 = v24;
  v29 = WindowsCreateStringReference(v25, v28, &v45, &v46);
  if ( v29 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v29);
    goto LABEL_44;
  }
  v30 = (*(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, HSTRING))(*(_QWORD *)v16 + 48LL))(v16, v40, v46, string);
  v31 = retaddr;
  if ( v30 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v31,
      (void *)0x251,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_45;
  }
LABEL_28:
  if ( v39 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
LABEL_30:
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  WindowsDeleteString(v40);
  v40 = 0LL;
  WindowsDeleteString(v38);
  v38 = 0LL;
  if ( v42[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v42[0] + 16LL))(v42[0]);
}

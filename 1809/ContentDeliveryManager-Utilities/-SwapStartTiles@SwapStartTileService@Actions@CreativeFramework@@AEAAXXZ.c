/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008394C
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180083940 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180023C88 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004A89C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x1800831B0 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x1800832A0 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180083394 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180083394.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18008355C (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180083F5C (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdi
  const WCHAR *v5; // rax
  const WCHAR *v6; // rdx
  const WCHAR *v7; // r8
  const WCHAR *v8; // rdx
  _QWORD *SourceTileIdentifier; // rax
  int v10; // eax
  int v11; // eax
  DWORD v12; // edx
  int v13; // r8d
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  const WCHAR *v17; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+68h] [rbp+28h] BYREF
  void (__fastcall ***v21)(__int64, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  v18[1] = -2LL;
  CreativeFramework::Actions::GetStartGridCollection(&v22);
  v2 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v22)(
         v22,
         &GUID_adbf8965_6056_4126_ab26_6660af4661ce,
         &v16);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_31;
  v4 = v16;
  if ( *((_QWORD *)this + 7) )
  {
    v5 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    v17 = v5;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v20, &v17);
  }
  else if ( *((_QWORD *)this + 11) )
  {
    v6 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v20, v6);
  }
  else
  {
    v7 = (const WCHAR *)((char *)this + 136);
    if ( *((_QWORD *)this + 20) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    v8 = (const WCHAR *)((char *)this + 104);
    if ( *((_QWORD *)this + 16) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v20, v8, v7);
  }
  SourceTileIdentifier = (_QWORD *)CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(this, v18);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v4 + 72LL))(v4, *SourceTileIdentifier, v20);
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFB,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v10);
  if ( v18[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v22 + 224LL))(
          v22,
          &v21);
  v14 = retaddr;
  if ( v11 < 0 )
  {
LABEL_32:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0xFE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11);
    JUMPOUT(0x180083B3BLL);
  }
  v15 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v21, v12, v13);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63B,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v15);
LABEL_31:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v2);
    goto LABEL_32;
  }
  if ( v21 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v21)[2])(v21);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
}

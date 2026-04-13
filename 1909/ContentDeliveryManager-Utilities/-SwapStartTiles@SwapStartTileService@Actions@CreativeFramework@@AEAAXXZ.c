/*
 * XREFs of ?SwapStartTiles@SwapStartTileService@Actions@CreativeFramework@@AEAAXXZ @ 0x18008580C
 * Callers:
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085800 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024328 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18004C224 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180085080 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W@Z @ 0x180085170 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180085264 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UI_ea_180085264.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18008540C (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085E54 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::SwapStartTileService::SwapStartTiles(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64); // rsi
  const WCHAR *v6; // rax
  const WCHAR *v7; // rdx
  const WCHAR *v8; // r8
  const WCHAR *v9; // rdx
  _QWORD *SourceTileIdentifier; // rax
  unsigned int v11; // ebx
  __int64 (__fastcall **v13)(__int64, GUID *, __int64 *); // rax
  int v14; // eax
  DWORD v15; // edx
  int v16; // r8d
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  const WCHAR *v20; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v23; // [rsp+68h] [rbp+28h] BYREF
  void (__fastcall ***v24)(__int64, GUID *, __int64 *); // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v25)(__int64, GUID *, __int64 *); // [rsp+78h] [rbp+38h] BYREF

  v21[1] = -2LL;
  CreativeFramework::Actions::GetStartGridCollection(&v25);
  v2 = (**v25)((__int64)v25, &GUID_adbf8965_6056_4126_ab26_6660af4661ce, &v19);
  v3 = retaddr;
  if ( v2 < 0 )
    goto LABEL_35;
  v4 = v19;
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v19 + 72LL);
  if ( *((_QWORD *)this + 7) )
  {
    v6 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v20 = v6;
    CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v23, &v20);
  }
  else if ( *((_QWORD *)this + 11) )
  {
    v7 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v7 = *(const WCHAR **)v7;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier((const WCHAR *)&v23, v7);
  }
  else
  {
    v8 = (const WCHAR *)((char *)this + 136);
    if ( *((_QWORD *)this + 20) >= 8uLL )
      v8 = *(const WCHAR **)v8;
    v9 = (const WCHAR *)((char *)this + 104);
    if ( *((_QWORD *)this + 16) >= 8uLL )
      v9 = *(const WCHAR **)v9;
    CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v23, v9, v8);
  }
  SourceTileIdentifier = (_QWORD *)CreativeFramework::Actions::SwapStartTileService::GetSourceTileIdentifier(this, v21);
  v11 = v5(v4, *SourceTileIdentifier, v23);
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( (int)(v11 + 0x80000000) >= 0 && v11 != -2147024811 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v11);
  v24 = 0LL;
  v13 = *v25;
  v24 = 0LL;
  v14 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *), void (__fastcall ****)(__int64, GUID *, __int64 *)))v13[28])(
          v25,
          &v24);
  v17 = retaddr;
  if ( v14 < 0 )
  {
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0xFF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v14);
    JUMPOUT(0x180085A27LL);
  }
  v18 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v24, v15, v16);
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x62B,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v18);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v2);
    goto LABEL_36;
  }
  if ( v24 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v24)[2])(v24);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v25 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(__int64, GUID *, __int64 *)))(*v25)[2])(v25);
}

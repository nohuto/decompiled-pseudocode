/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x1800A1AC4
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800A20F0 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18008895C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(__int64, PVOID, bool *); // rdi
  HSTRING_HEADER *v4; // rax
  int v5; // eax
  wil::details::in1diag3 *v6; // rcx
  bool v7; // zf
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, _QWORD **); // rsi
  HSTRING_HEADER *v10; // rdi
  _QWORD *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  bool v18; // bl
  bool v20[8]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-58h] BYREF
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  int v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v25[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER v26; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v25[1] = (const WCHAR *)-2LL;
  v25[0] = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v24);
  v2 = v24;
  v3 = *(__int64 (__fastcall **)(__int64, PVOID, bool *))(*(_QWORD *)v24 + 80LL);
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, v25);
  v5 = v3(v2, v4[1].Reserved.Reserved1, v20);
  v6 = retaddr;
  if ( v5 < 0 )
    goto LABEL_17;
  v7 = !v20[0];
  if ( !v20[0] )
    goto LABEL_13;
  v21 = 0LL;
  v8 = v24;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD **))(*(_QWORD *)v24 + 56LL);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v26, v25);
  v11 = v21;
  v21 = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v11 + 16LL))(v11, *v11);
  v12 = v9(v8, v10[1].Reserved.Reserved1, &v21);
  v13 = retaddr;
  if ( v12 < 0 )
    goto LABEL_18;
  v22 = 0LL;
  v14 = *v21;
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v14 + 104))(v21, &v22);
  v16 = retaddr;
  if ( v15 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x1800A1CBBLL);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 56LL))(v22, &v23);
  if ( v17 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v17);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v6,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v5);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_19;
  }
  v20[0] = v23 != 0;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD *))(*v21 + 16LL))(v21);
  v7 = !v20[0];
LABEL_13:
  v18 = !v7;
  if ( v24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  return v18;
}

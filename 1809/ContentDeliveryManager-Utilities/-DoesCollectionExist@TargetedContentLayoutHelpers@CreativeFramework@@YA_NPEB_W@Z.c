/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x18009DE68
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086BB8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  bool v6; // zf
  __int64 v7; // rbx
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  bool v15; // bl
  bool v17[8]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD *v18; // [rsp+28h] [rbp-58h] BYREF
  int v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  const WCHAR *v22[2]; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v23[32]; // [rsp+58h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v22[1] = (const WCHAR *)-2LL;
  v22[0] = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v21);
  v2 = v21;
  v3 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22) + 24);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, bool *))(*(_QWORD *)v2 + 80LL))(v2, v3, v17);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_17;
  v6 = !v17[0];
  if ( !v17[0] )
    goto LABEL_13;
  v18 = 0LL;
  v7 = v21;
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)v23, v22);
  v9 = v18;
  v18 = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 16LL))(v9, *v9);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD **))(*(_QWORD *)v7 + 56LL))(v7, *(_QWORD *)(v8 + 24), &v18);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_18;
  v20 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*v18 + 104LL))(v18, &v20);
  v13 = retaddr;
  if ( v12 < 0 )
  {
LABEL_19:
    wil::details::in1diag3::Throw_Hr(
      v13,
      (void *)0x8A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18009E04CLL);
  }
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v20 + 56LL))(v20, &v19);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v14);
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v4);
LABEL_18:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x87,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v10);
    goto LABEL_19;
  }
  v17[0] = v19 != 0;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD *))(*v18 + 16LL))(v18);
  v6 = !v17[0];
LABEL_13:
  v15 = !v6;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v15;
}

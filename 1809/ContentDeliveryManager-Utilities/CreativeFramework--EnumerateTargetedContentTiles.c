/*
 * XREFs of CreativeFramework::EnumerateTargetedContentTiles @ 0x18009CFFC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x18009E47C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180086BB8 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A9FE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
char __fastcall CreativeFramework::EnumerateTargetedContentTiles(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  int v10; // eax
  wil::details::in1diag3 *v11; // rcx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r14
  __int64 v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  const WCHAR *v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  char v28; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v29[7]; // [rsp+21h] [rbp-B7h] BYREF
  __int64 v30; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+30h] [rbp-A8h] BYREF
  const WCHAR *v32; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-98h] BYREF
  int v34; // [rsp+48h] [rbp-90h]
  __int64 v35; // [rsp+50h] [rbp-88h] BYREF
  __int64 v36; // [rsp+58h] [rbp-80h] BYREF
  __int64 v37; // [rsp+60h] [rbp-78h] BYREF
  __int64 v38; // [rsp+68h] [rbp-70h] BYREF
  __int64 v39; // [rsp+70h] [rbp-68h] BYREF
  _QWORD v40[3]; // [rsp+78h] [rbp-60h] BYREF
  __int64 v41; // [rsp+90h] [rbp-48h] BYREF
  int v42; // [rsp+98h] [rbp-40h]
  __int64 v43; // [rsp+A0h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v40[2] = -2LL;
  v40[1] = a2;
  v32 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v39);
  v3 = v39;
  v4 = Microsoft::WRL::Wrappers::HStringReference::HStringReference((__int64)&v41, &v32);
  v31 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, *(_QWORD *)(v4 + 24), &v31);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v5);
    goto LABEL_48;
  }
  v38 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 104LL))(v31, &v38);
  v7 = retaddr;
  if ( v6 < 0 )
  {
LABEL_48:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x18,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v6);
    goto LABEL_49;
  }
  v37 = 0LL;
  v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v38)(
         v38,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         &v37);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_49:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
LABEL_50:
    wil::details::in1diag3::Throw_Hr(
      v11,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v33 = 0LL;
  v35 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 48LL))(v37, &v33);
  v11 = retaddr;
  if ( v10 < 0 )
    goto LABEL_50;
  v12 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v33 + 56LL))(v33, &v28);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v12);
LABEL_52:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v17);
LABEL_53:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x22,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v19);
LABEL_54:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x25,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\targetedcontenttileenumerator.h",
      (const char *)(unsigned int)v21);
LABEL_55:
    std::_Xbad_function_call();
  }
  LOBYTE(v13) = -v28;
  v14 = (v28 != 0) - 1;
  v34 = v14;
  v41 = 0LL;
  v42 = -1;
  v43 = 0LL;
  while ( v14 != -1 )
  {
    v15 = v33;
    v16 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 48LL))(v15, &v35);
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_52;
    v36 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 56LL))(v35, &v36);
    v20 = retaddr;
    if ( v19 < 0 )
      goto LABEL_53;
    v30 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v36 + 48LL))(v36, &v30);
    v22 = retaddr;
    if ( v21 < 0 )
      goto LABEL_54;
    (**(void (__fastcall ***)(__int64, GUID *, const WCHAR **))v30)(
      v30,
      &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
      &v32);
    v23 = v32;
    if ( v32 )
    {
      v40[0] = v30;
      v24 = *(_QWORD *)(a2 + 24);
      if ( !v24 )
        goto LABEL_55;
      LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v24 + 16LL))(v24, v40);
      if ( !(_BYTE)v13 )
      {
        if ( v32 )
          LOBYTE(v13) = (*(__int64 (__fastcall **)(const WCHAR *))(*(_QWORD *)v32 + 16LL))(v32);
        if ( v30 )
          LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        if ( v36 )
          LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        break;
      }
      v23 = v32;
    }
    if ( v23 )
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v30 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    if ( v36 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 64LL))(v33, v29);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x18009D548LL);
    }
    if ( v29[0] )
      v14 = v34 + 1;
    else
      v14 = -1;
    v34 = v14;
  }
  v25 = v35;
  if ( v35 )
  {
    v35 = 0LL;
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  if ( v37 )
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v38 )
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v31 )
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v39 )
    LOBYTE(v13) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  return v13;
}

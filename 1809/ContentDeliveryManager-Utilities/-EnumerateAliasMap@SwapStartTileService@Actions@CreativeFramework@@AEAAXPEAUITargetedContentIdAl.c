/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180083B44
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180083F5C (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800A9FE0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
char __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  wil::details::in1diag3 *v17; // rcx
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v26; // [rsp+20h] [rbp-88h] BYREF
  int v27; // [rsp+28h] [rbp-80h]
  __int64 v28; // [rsp+30h] [rbp-78h] BYREF
  __int64 v29; // [rsp+38h] [rbp-70h] BYREF
  __int64 v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-50h] BYREF
  int v34; // [rsp+68h] [rbp-40h]
  __int64 v35; // [rsp+70h] [rbp-38h]
  __int64 v36; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v38; // [rsp+B0h] [rbp+8h] BYREF
  char v39; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v40; // [rsp+C0h] [rbp+18h]
  HSTRING string; // [rsp+C8h] [rbp+20h] BYREF

  v40 = a3;
  v38 = a1;
  v36 = -2LL;
  v30 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 72LL))(a2, &v30);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v30)(
         v30,
         &GUID_c86cab97_c160_561a_9b32_542f9e2e4911,
         &v31);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v26 = 0LL;
  v28 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v31 + 48LL))(v31, &v26);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_35;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 56LL))(v26, &v38);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v8);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v14,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v13);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v17,
      (void *)0x110,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v16);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x113,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v18);
LABEL_40:
    std::_Xbad_function_call();
  }
  LOBYTE(v9) = -(char)v38;
  v10 = ((_BYTE)v38 != 0) - 1;
  v27 = v10;
  v33[1] = 0LL;
  v34 = -1;
  v35 = 0LL;
  while ( v10 != -1 )
  {
    v11 = v26;
    v12 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v28);
    v14 = retaddr;
    if ( v13 < 0 )
      goto LABEL_37;
    string = 0LL;
    v15 = v28;
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 48LL))(v15, &string);
    v17 = retaddr;
    if ( v16 < 0 )
      goto LABEL_38;
    v29 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v28 + 56LL))(v28, &v29);
    v19 = retaddr;
    if ( v18 < 0 )
      goto LABEL_39;
    v20 = v29;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v32 = v20;
    v33[0] = StringRawBuffer;
    v22 = *(_QWORD *)(a3 + 24);
    if ( !v22 )
      goto LABEL_40;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v22 + 16LL))(v22, v33, &v32) )
    {
      if ( v29 )
        (*(void (**)(void))(*(_QWORD *)v29 + 16LL))();
      LOBYTE(v9) = WindowsDeleteString(string);
      break;
    }
    if ( v29 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    WindowsDeleteString(string);
    v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v26 + 64LL))(v26, &v39);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x16A8,
        (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
        (const char *)(unsigned int)v9);
      JUMPOUT(0x180083F53LL);
    }
    if ( v39 )
      v10 = v27 + 1;
    else
      v10 = -1;
    v27 = v10;
  }
  v23 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  }
  v24 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v31 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  if ( v30 )
    LOBYTE(v9) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  return v9;
}

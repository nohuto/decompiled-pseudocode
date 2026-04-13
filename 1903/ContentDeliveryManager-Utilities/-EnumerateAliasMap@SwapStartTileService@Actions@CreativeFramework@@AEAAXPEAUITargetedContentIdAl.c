/*
 * XREFs of ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x180085880
 * Callers:
 *     ?GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180085CA4 (-GetSourceTileIdentifier@SwapStartTileService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UIUn.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800ADF60 (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
char __fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, _QWORD **); // rdi
  _QWORD *v14; // rcx
  int v15; // eax
  wil::details::in1diag3 *v16; // rcx
  _QWORD *v17; // rdi
  __int64 (__fastcall *v18)(_QWORD *, HSTRING *); // rbx
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  __int64 v24; // rbx
  PCWSTR StringRawBuffer; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v30; // [rsp+20h] [rbp-98h] BYREF
  int v31; // [rsp+28h] [rbp-90h]
  _QWORD *v32; // [rsp+30h] [rbp-88h] BYREF
  HSTRING string; // [rsp+38h] [rbp-80h] BYREF
  __int64 v34; // [rsp+40h] [rbp-78h] BYREF
  __int64 v35; // [rsp+48h] [rbp-70h] BYREF
  __int64 v36; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-60h] BYREF
  int v38; // [rsp+68h] [rbp-50h]
  __int64 v39; // [rsp+70h] [rbp-48h]
  __int64 v40; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  __int64 v42; // [rsp+C0h] [rbp+8h] BYREF
  char v43; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v44; // [rsp+D0h] [rbp+18h]
  __int64 v45; // [rsp+D8h] [rbp+20h] BYREF

  v44 = a3;
  v42 = a1;
  v40 = -2LL;
  v4 = *a2;
  v34 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v4 + 72))(a2, &v34);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x108,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v34)(
         v34,
         &GUID_c86cab97_c160_561a_9b32_542f9e2e4911,
         &v35);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
LABEL_35:
    wil::details::in1diag3::Throw_Hr(
      v8,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7);
    __debugbreak();
  }
  v30 = 0LL;
  v32 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v35 + 48LL))(v35, &v30);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_35;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 56LL))(v30, &v42);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v9);
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v15);
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v20,
      (void *)0x111,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v19);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x114,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v22);
LABEL_40:
    std::_Xbad_function_call();
  }
  LOBYTE(v10) = -(char)v42;
  v11 = ((_BYTE)v42 != 0) - 1;
  v31 = v11;
  v37[1] = 0LL;
  v38 = -1;
  v39 = 0LL;
  while ( v11 != -1 )
  {
    v12 = v30;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD **))(*(_QWORD *)v30 + 48LL);
    v14 = v32;
    if ( v32 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v14 + 16LL))(v14, *v14);
    }
    v15 = v13(v12, &v32);
    v16 = retaddr;
    if ( v15 < 0 )
      goto LABEL_37;
    string = 0LL;
    v17 = v32;
    v18 = *(__int64 (__fastcall **)(_QWORD *, HSTRING *))(*v32 + 48LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v19 = v18(v17, &string);
    v20 = retaddr;
    if ( v19 < 0 )
      goto LABEL_38;
    v45 = 0LL;
    v21 = *v32;
    v45 = 0LL;
    v22 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(v21 + 56))(v32, &v45);
    v23 = retaddr;
    if ( v22 < 0 )
      goto LABEL_39;
    v24 = v45;
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    v36 = v24;
    v37[0] = StringRawBuffer;
    v26 = *(_QWORD *)(a3 + 24);
    if ( !v26 )
      goto LABEL_40;
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD *, __int64 *))(*(_QWORD *)v26 + 16LL))(v26, v37, &v36) )
    {
      if ( v45 )
        (*(void (**)(void))(*(_QWORD *)v45 + 16LL))();
      LOBYTE(v10) = WindowsDeleteString(string);
      break;
    }
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    WindowsDeleteString(string);
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v30 + 64LL))(v30, &v43);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x152D,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
        (const char *)(unsigned int)v10);
      JUMPOUT(0x180085C9DLL);
    }
    if ( v43 )
      v11 = v31 + 1;
    else
      v11 = -1;
    v31 = v11;
  }
  v27 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(_QWORD *))(*v27 + 16LL))(v27);
  }
  v28 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v35 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v34 )
    LOBYTE(v10) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  return v10;
}

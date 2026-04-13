/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___ @ 0x180088EB8
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180087280 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
HRESULT __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_d6cc9bbba6eee700d8b52555e0ea8f6d___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  HRESULT result; // eax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 **); // rdi
  __int64 *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rdi
  int v22; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v24; // rax
  wil::details::in1diag3 *v25; // rcx
  int v26; // eax
  __int64 *v27; // rcx
  __int64 v28; // rax
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  _BYTE v31[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 *v33; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-21h] BYREF
  __int64 v35; // [rsp+58h] [rbp-19h] BYREF
  __int64 v36; // [rsp+60h] [rbp-11h] BYREF
  __int64 v37; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v38[3]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v39; // [rsp+88h] [rbp+17h] BYREF
  __int128 v40; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v38[1] = -2LL;
  v3 = *a1;
  v37 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(a1, &v37);
  v5 = retaddr;
  if ( v4 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v5,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v37)(
         v37,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         v38);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x152D,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v34 = 0LL;
  v7 = *(_QWORD *)v38[0];
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(v7 + 48))(v38[0], &v34);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_39;
  v31[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v34 + 56))(v34, v31);
  if ( result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0xA9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v30,
      (void *)0x230,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
  while ( 1 )
  {
    if ( !v31[0] )
      goto LABEL_28;
    v33 = 0LL;
    v36 = 0LL;
    v11 = *v34;
    v36 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v11 + 48))(v34, &v36);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12);
      goto LABEL_37;
    }
    v13 = v36;
    v14 = *(__int64 (__fastcall **)(__int64, __int64 **))(*(_QWORD *)v36 + 56LL);
    v15 = v33;
    v33 = 0LL;
    if ( v15 )
      (*(void (__fastcall **)(__int64 *))(*v15 + 16))(v15);
    v16 = v14(v13, &v33);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v16);
      __debugbreak();
    }
    v35 = 0LL;
    v17 = *v33;
    v35 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 48))(v33, &v35);
    v19 = retaddr;
    if ( v18 < 0 )
      goto LABEL_45;
    string = 0LL;
    v20 = v35;
    v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v22 = v21(v20, &string);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v22);
LABEL_45:
      wil::details::in1diag3::Throw_Hr(
        v19,
        (void *)0x228,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v18);
      JUMPOUT(0x18008930DLL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a2, 0LL);
    v24 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(v24, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(string);
    string = 0LL;
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    result = (*(__int64 (__fastcall **)(__int64 *, _BYTE *))(*v34 + 64))(v34, v31);
    v25 = retaddr;
    if ( result < 0 )
      goto LABEL_41;
    if ( v36 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    if ( v33 )
      result = (*(__int64 (__fastcall **)(__int64 *))(*v33 + 16))(v33);
  }
  v26 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(*v33 + 56))(v33, &v40);
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v26);
    __debugbreak();
  }
  v27 = **(__int64 ***)(a2 + 8);
  v28 = *v27;
  v39 = v40;
  v29 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v28 + 208))(v27, &v39);
  v30 = retaddr;
  if ( v29 < 0 )
    goto LABEL_42;
  **(_BYTE **)(a2 + 16) = 1;
  result = WindowsDeleteString(string);
  string = 0LL;
  if ( v35 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  if ( v36 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v33 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v33 + 16))(v33);
LABEL_28:
  if ( v34 )
    result = (*(__int64 (__fastcall **)(__int64 *))(*v34 + 16))(v34);
  if ( v38[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v38[0] + 16LL))(v38[0]);
  if ( v37 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  return result;
}

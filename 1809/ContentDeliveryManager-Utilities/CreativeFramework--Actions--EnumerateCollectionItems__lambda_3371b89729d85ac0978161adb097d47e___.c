/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_3371b89729d85ac0978161adb097d47e___ @ 0x18008710C
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180085510 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
HRESULT __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_3371b89729d85ac0978161adb097d47e___(
        __int64 a1,
        __int64 a2)
{
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  HRESULT result; // eax
  int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v18; // rax
  wil::details::in1diag3 *v19; // rcx
  int v20; // eax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  _BYTE v23[8]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 v25; // [rsp+48h] [rbp-29h] BYREF
  __int64 v26; // [rsp+50h] [rbp-21h] BYREF
  __int64 v27; // [rsp+58h] [rbp-19h] BYREF
  __int64 v28; // [rsp+60h] [rbp-11h] BYREF
  __int64 v29; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp-1h] BYREF
  __int128 v31; // [rsp+88h] [rbp+17h] BYREF
  __int128 v32; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v30[1] = -2LL;
  v29 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 104LL))(a1, &v29);
  v4 = retaddr;
  if ( v3 < 0 )
  {
LABEL_37:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v29)(
         v29,
         &GUID_29e14483_299b_51db_a4a9_4fa71439ba45,
         v30);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x16A8,
      (__int64)"internal\\sdk\\inc\\wil\\resultmacros.h",
      (const char *)(unsigned int)v5);
LABEL_39:
    wil::details::in1diag3::Throw_Hr(
      v7,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  v26 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v30[0] + 48LL))(v30[0], &v26);
  v7 = retaddr;
  if ( v6 < 0 )
    goto LABEL_39;
  v23[0] = 0;
  result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 56LL))(v26, v23);
  if ( result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0xA9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)result);
LABEL_42:
    wil::details::in1diag3::Throw_Hr(
      v22,
      (void *)0x22F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v21);
    __debugbreak();
  }
  while ( 1 )
  {
    if ( !v23[0] )
      goto LABEL_28;
    v25 = 0LL;
    v28 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 48LL))(v26, &v28);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA1,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v9);
      goto LABEL_37;
    }
    v10 = v28;
    v11 = v25;
    v25 = 0LL;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 56LL))(v10, &v25);
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v27 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 48LL))(v25, &v27);
    v14 = retaddr;
    if ( v13 < 0 )
      goto LABEL_45;
    string = 0LL;
    v15 = v27;
    WindowsDeleteString(0LL);
    string = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15 + 56LL))(v15, &string);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v16);
LABEL_45:
      wil::details::in1diag3::Throw_Hr(
        v14,
        (void *)0x227,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v13);
      JUMPOUT(0x180087544LL);
    }
    StringRawBuffer = WindowsGetStringRawBuffer(**(HSTRING **)a2, 0LL);
    v18 = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(v18, -1, StringRawBuffer, -1, 1) == 2 )
      break;
    WindowsDeleteString(string);
    string = 0LL;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    result = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v26 + 64LL))(v26, v23);
    v19 = retaddr;
    if ( result < 0 )
      goto LABEL_41;
    if ( v28 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    if ( v25 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v20 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 56LL))(v25, &v32);
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x22E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v20);
    __debugbreak();
  }
  v31 = v32;
  v21 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(***(_QWORD ***)(a2 + 8) + 208LL))(**(_QWORD **)(a2 + 8), &v31);
  v22 = retaddr;
  if ( v21 < 0 )
    goto LABEL_42;
  **(_BYTE **)(a2 + 16) = 1;
  result = WindowsDeleteString(string);
  string = 0LL;
  if ( v27 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  if ( v28 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v25 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_28:
  if ( v26 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v30[0] )
    result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v30[0] + 16LL))(v30[0]);
  if ( v29 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return result;
}

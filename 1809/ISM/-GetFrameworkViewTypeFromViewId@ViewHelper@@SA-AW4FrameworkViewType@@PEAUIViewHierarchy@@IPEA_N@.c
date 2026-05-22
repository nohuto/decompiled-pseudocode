/*
 * XREFs of ?GetFrameworkViewTypeFromViewId@ViewHelper@@SA?AW4FrameworkViewType@@PEAUIViewHierarchy@@IPEA_N@Z @ 0x18000CC04
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ViewHelper::GetFrameworkViewTypeFromViewId(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  int v6; // edx
  int v7; // eax
  wil::details::in1diag3 *v8; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v19; // rcx
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-38h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-30h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-18h] BYREF
  const wchar_t *v26; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  unsigned int v28; // [rsp+80h] [rbp+20h] BYREF
  __int64 v29; // [rsp+90h] [rbp+30h] BYREF
  __int64 v30; // [rsp+98h] [rbp+38h] BYREF

  v29 = a3;
  v24[1] = -2LL;
  v3 = 5;
  LOBYTE(v29) = 0;
  (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v24, a2);
  v4 = v24[0];
  if ( !v24[0] )
    goto LABEL_23;
  v5 = L"FrameworkViewType";
  v26 = L"FrameworkViewType";
  v6 = 0;
  do
  {
    ++v5;
    ++v6;
  }
  while ( *v5 );
  v25 = v6 | 0x80000000;
  v30 = 0LL;
  v23 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v24[0]
                                                                                               + 136LL))(
         v24[0],
         &v23);
  v8 = retaddr;
  if ( v7 < 0 )
    goto LABEL_27;
  v9 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (**v23)(v23, &GUID_3ec52a26_f33c_4241_8dc1_da292661fe9a, &v30);
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 72LL))(
          v30,
          (unsigned __int64)&v25 & ((unsigned __int128)-(__int128)(unsigned __int64)v26 >> 64),
          &v29);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0xD5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_30;
  }
  if ( (_BYTE)v29 )
  {
    v22 = 0LL;
    v21 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v30 + 48LL))(
            v30,
            (unsigned __int64)&v25 & ((unsigned __int128)-(__int128)(unsigned __int64)v26 >> 64),
            &v22);
    v13 = retaddr;
    if ( v12 >= 0 )
    {
      v14 = (**v22)(v22, &GUID_636d7eb3_e062_45f3_9b1f_78bd16c6134a, &v21);
      if ( v14 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xDE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v14);
        JUMPOUT(0x18000CEBBLL);
      }
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v28);
      if ( v15 >= 0 )
      {
        v3 = v28;
        v16 = v21;
        if ( v21 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        v17 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[2])(v17);
        }
        goto LABEL_18;
      }
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xE0,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v15);
LABEL_27:
      wil::details::in1diag3::FailFast_Hr(
        v8,
        (void *)0xD2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
LABEL_30:
    wil::details::in1diag3::FailFast_Hr(
      v13,
      (void *)0xDD,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v12);
    __debugbreak();
  }
  v3 = 0;
LABEL_18:
  v18 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
  }
  v19 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  v4 = v24[0];
LABEL_23:
  if ( v4 )
  {
    v24[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}

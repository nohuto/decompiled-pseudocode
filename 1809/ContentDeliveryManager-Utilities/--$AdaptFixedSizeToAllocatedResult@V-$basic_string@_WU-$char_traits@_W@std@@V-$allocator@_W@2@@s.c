/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@wil@@YAJAEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x1800967D4
 * Callers:
 *     ??$GetStateFolder@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@$0BAE@@@YAJPEAXW4tag_STATE_PERSIST_ATTRIB@@AEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Z @ 0x1800965A0 (--$GetStateFolder@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@$0BAE@@@YAJPE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000381C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180003854 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x18003148C (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?make@?$string_maker@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@details@wil@@QEAAJPEB_W_K@Z @ 0x180096C3C (-make@-$string_maker@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@details@w.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<std::wstring,260>(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6; // esi
  __int64 v7; // rcx
  int v9; // eax
  int v10; // eax
  void **v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  const char *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 *v18; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 **v20; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v21[3]; // [rsp+58h] [rbp-B0h] BYREF
  void *v22; // [rsp+70h] [rbp-98h] BYREF
  __int128 v23; // [rsp+78h] [rbp-90h]
  unsigned __int64 v24; // [rsp+88h] [rbp-80h]
  void *v25[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v27; // [rsp+A8h] [rbp-60h]
  _WORD v28[264]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+300h] [rbp+1F8h]

  v21[1] = -2LL;
  v21[2] = a2;
  v24 = 7LL;
  *((_QWORD *)&v23 + 1) = 0LL;
  LOWORD(v22) = 0;
  v28[0] = 0;
  v17 = 0LL;
  v18 = &v17;
  v19 = 260LL;
  v20 = (unsigned __int64 **)v28;
  v4 = *(_QWORD *)(a2 + 104);
  if ( !v4 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
  v6 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 ***, __int64 *, unsigned __int64 **))(*(_QWORD *)v4 + 16LL))(
         v4,
         &v20,
         &v19,
         &v18);
  if ( v6 < 0 )
  {
    if ( v24 >= 8 )
      operator delete(v22);
    v24 = 7LL;
    *((_QWORD *)&v23 + 1) = 0LL;
    LOWORD(v22) = 0;
LABEL_6:
    v7 = *(_QWORD *)(a2 + 104);
    if ( v7 )
    {
      LOBYTE(v5) = v7 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 24LL))(v7, v5);
      *(_QWORD *)(a2 + 104) = 0LL;
    }
    return (unsigned int)v6;
  }
  if ( v17 > 0x104 )
  {
    v10 = wil::details::string_maker<std::wstring>::make(&v22, 0LL, v17 - 1);
    v6 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x57,
        (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
        (const char *)(unsigned int)v10);
      if ( v24 >= 8 )
        operator delete(v22);
      v24 = 7LL;
      *((_QWORD *)&v23 + 1) = 0LL;
      LOWORD(v22) = 0;
      goto LABEL_6;
    }
    v18 = 0LL;
    v11 = &v22;
    if ( v24 >= 8 )
      v11 = (void **)v22;
    v20 = &v18;
    v19 = v17;
    v21[0] = v11;
    v12 = *(_QWORD *)(a2 + 104);
    if ( !v12 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(0LL);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64 *, unsigned __int64 ***))(*(_QWORD *)v12 + 16LL))(
            v12,
            v21,
            &v19,
            &v20);
    v6 = v13;
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
        (const char *)(unsigned int)v13);
      if ( v24 >= 8 )
        operator delete(v22);
      v24 = 7LL;
      *((_QWORD *)&v23 + 1) = 0LL;
      LOWORD(v22) = 0;
      goto LABEL_6;
    }
    if ( (unsigned __int64 *)v17 != v18 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x5D,
        (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
        v14);
      __debugbreak();
    }
  }
  else
  {
    v9 = wil::details::string_maker<std::wstring>::make(&v22, v28, v17 - 1);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x51,
        (__int64)"internal\\sdk\\inc\\wil\\win32helpers.h",
        (const char *)(unsigned int)v9);
      if ( v24 >= 8 )
        operator delete(v22);
      v24 = 7LL;
      *((_QWORD *)&v23 + 1) = 0LL;
      LOWORD(v22) = 0;
      goto LABEL_6;
    }
  }
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  std::wstring::_Assign_rv(v25, &v22);
  if ( (void **)a1 != v25 )
  {
    if ( *(_QWORD *)(a1 + 24) >= 8uLL )
      operator delete(*(void **)a1);
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_WORD *)a1 = 0;
    std::wstring::_Assign_rv((_QWORD *)a1, v25);
  }
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  if ( v24 >= 8 )
    operator delete(v22);
  v24 = 7LL;
  *((_QWORD *)&v23 + 1) = 0LL;
  LOWORD(v22) = 0;
  v16 = *(_QWORD *)(a2 + 104);
  if ( v16 )
  {
    LOBYTE(v15) = v16 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, v15);
    *(_QWORD *)(a2 + 104) = 0LL;
  }
  return 0LL;
}

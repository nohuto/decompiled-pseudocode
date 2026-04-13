/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x18008A470
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800844E4 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x18008A5F8 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  _QWORD *v11; // [rsp+28h] [rbp-59h] BYREF
  _QWORD *v12; // [rsp+30h] [rbp-51h] BYREF
  _QWORD *v13; // [rsp+38h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-41h]
  _BYTE v15[8]; // [rsp+48h] [rbp-39h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-31h]
  int v17[2]; // [rsp+58h] [rbp-29h] BYREF
  __int64 v18; // [rsp+68h] [rbp-19h]
  unsigned __int64 v19; // [rsp+70h] [rbp-11h]
  int v20[2]; // [rsp+78h] [rbp-9h] BYREF
  __int64 v21; // [rsp+88h] [rbp+7h]
  unsigned __int64 v22; // [rsp+90h] [rbp+Fh]
  int v23[2]; // [rsp+98h] [rbp+17h] BYREF
  unsigned __int64 v24; // [rsp+B0h] [rbp+2Fh]

  v14 = -2LL;
  v11 = a1;
  v5 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>((__int64)v23, a3, (char *)L"category");
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  v12 = v5;
  v6 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v20,
                   a3,
                   (char *)L"packageRelativeAppId");
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v13 = v6;
  v7 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v17,
                   a3,
                   (char *)L"packageFamilyName");
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  v8 = (_QWORD *)std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
                   v15,
                   &v11,
                   &v13,
                   &v12,
                   v7,
                   v12,
                   v13,
                   v14);
  *a1 = *v8;
  a1[1] = v8[1];
  *v8 = 0LL;
  v8[1] = 0LL;
  v9 = v16;
  if ( v16 )
  {
    if ( _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  if ( v19 >= 8 )
    operator delete(*(void **)v17);
  v19 = 7LL;
  v18 = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v22 >= 8 )
    operator delete(*(void **)v20);
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  if ( v24 >= 8 )
    operator delete(*(void **)v23);
  return a1;
}

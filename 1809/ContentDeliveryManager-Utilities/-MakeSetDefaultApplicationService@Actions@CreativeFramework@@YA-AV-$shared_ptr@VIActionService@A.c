/*
 * XREFs of ?MakeSetDefaultApplicationService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180088520
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180082620 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA?AV?$shared_ptr@VSetDefaultApplicationService@Actions@CreativeFramework@@@0@$$QEAPEB_W00@Z @ 0x1800886A4 (--$make_shared@VSetDefaultApplicationService@Actions@CreativeFramework@@PEB_WPEB_WPEB_W@std@@YA-.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::MakeSetDefaultApplicationService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void **v5; // rax
  void **v6; // rax
  void **v7; // rax
  _QWORD *v8; // rax
  volatile signed __int32 *v9; // rbx
  void **v11; // [rsp+28h] [rbp-59h] BYREF
  void **v12; // [rsp+30h] [rbp-51h] BYREF
  __int64 v13; // [rsp+38h] [rbp-49h] BYREF
  __int64 v14; // [rsp+40h] [rbp-41h]
  _BYTE v15[8]; // [rsp+48h] [rbp-39h] BYREF
  volatile signed __int32 *v16; // [rsp+50h] [rbp-31h]
  void *v17[3]; // [rsp+58h] [rbp-29h] BYREF
  unsigned __int64 v18; // [rsp+70h] [rbp-11h]
  void *v19[3]; // [rsp+78h] [rbp-9h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+Fh]
  void *v21[4]; // [rsp+98h] [rbp+17h] BYREF

  v14 = -2LL;
  v5 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v21, a3, (char *)L"category");
  if ( (unsigned __int64)v5[3] >= 8 )
    v5 = (void **)*v5;
  v11 = v5;
  v6 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v19, a3, (char *)L"packageRelativeAppId");
  if ( (unsigned __int64)v6[3] >= 8 )
    v6 = (void **)*v6;
  v12 = v6;
  v7 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v17, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v7[3] >= 8 )
    v7 = (void **)*v7;
  v8 = (_QWORD *)std::make_shared<CreativeFramework::Actions::SetDefaultApplicationService,wchar_t const *,wchar_t const *,wchar_t const *>(
                   v15,
                   &v13,
                   &v12,
                   &v11,
                   v11,
                   v12,
                   v7,
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
  if ( v18 >= 8 )
    operator delete(v17[0]);
  v18 = 7LL;
  v17[2] = 0LL;
  LOWORD(v17[0]) = 0;
  if ( v20 >= 8 )
    operator delete(v19[0]);
  v20 = 7LL;
  v19[2] = 0LL;
  LOWORD(v19[0]) = 0;
  if ( v21[3] >= (void *)8 )
    operator delete(v21[0]);
  return a1;
}

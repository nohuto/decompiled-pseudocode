/*
 * XREFs of ?MakePublishWindowsTipService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180094800
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x1800844E4 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA?AV?$shared_ptr@VPublishWindowsTipService@Actions@CreativeFramework@@@0@$$QEAPEB_W0@Z @ 0x180094948 (--$make_shared@VPublishWindowsTipService@Actions@CreativeFramework@@PEB_WPEB_W@std@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::Actions::MakePublishWindowsTipService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  volatile signed __int32 *v8; // rbx
  _QWORD *v10; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-21h] BYREF
  _BYTE v12[8]; // [rsp+40h] [rbp-11h] BYREF
  volatile signed __int32 *v13; // [rsp+48h] [rbp-9h]
  int v14[2]; // [rsp+50h] [rbp-1h] BYREF
  __int64 v15; // [rsp+60h] [rbp+Fh]
  unsigned __int64 v16; // [rsp+68h] [rbp+17h]
  int v17[2]; // [rsp+70h] [rbp+1Fh] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+37h]

  v11[1] = -2LL;
  v10 = a1;
  v5 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v17,
                   a3,
                   (char *)L"ctx.containerPath");
  if ( v5[3] >= 8uLL )
    v5 = (_QWORD *)*v5;
  v11[0] = v5;
  v6 = (_QWORD *)CreativeFramework::Actions::GetRequiredParameter<std::wstring>(
                   (__int64)v14,
                   a3,
                   (char *)L"ctx.contentId");
  if ( v6[3] >= 8uLL )
    v6 = (_QWORD *)*v6;
  v10 = v6;
  v7 = (_QWORD *)std::make_shared<CreativeFramework::Actions::PublishWindowsTipService,wchar_t const *,wchar_t const *>(
                   v12,
                   &v10,
                   v11);
  *a1 = *v7;
  a1[1] = v7[1];
  *v7 = 0LL;
  v7[1] = 0LL;
  v8 = v13;
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( v16 >= 8 )
    operator delete(*(void **)v14);
  v16 = 7LL;
  v15 = 0LL;
  LOWORD(v14[0]) = 0;
  if ( v18 >= 8 )
    operator delete(*(void **)v17);
  return a1;
}

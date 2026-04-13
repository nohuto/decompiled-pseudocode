/*
 * XREFs of ?MakeLaunchAppByIdService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180089860
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetRequiredParameter@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@3@PEB_W@Z @ 0x180082620 (--$GetRequiredParameter@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@@Action.c)
 *     ??$make_shared@VLaunchAppByIdService@Actions@CreativeFramework@@PEB_W@std@@YA?AV?$shared_ptr@VLaunchAppByIdService@Actions@CreativeFramework@@@0@$$QEAPEB_W@Z @ 0x18008A524 (--$make_shared@VLaunchAppByIdService@Actions@CreativeFramework@@PEB_W@std@@YA-AV-$shared_ptr@VLa.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall CreativeFramework::Actions::MakeLaunchAppByIdService(_QWORD *a1, __int64 a2, _QWORD *a3)
{
  void **v4; // rax
  _QWORD *v5; // rax
  volatile signed __int32 *v6; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v9[8]; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int32 *v10; // [rsp+38h] [rbp-40h]
  void *v11[4]; // [rsp+40h] [rbp-38h] BYREF

  v8[1] = -2LL;
  v4 = CreativeFramework::Actions::GetRequiredParameter<std::wstring>(v11, a3, (char *)L"packageFamilyName");
  if ( (unsigned __int64)v4[3] >= 8 )
    v4 = (void **)*v4;
  v8[0] = v4;
  v5 = (_QWORD *)std::make_shared<CreativeFramework::Actions::LaunchAppByIdService,wchar_t const *>(v9, v8);
  *a1 = *v5;
  a1[1] = v5[1];
  *v5 = 0LL;
  v5[1] = 0LL;
  v6 = v10;
  if ( v10 )
  {
    if ( _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  if ( v11[3] >= (void *)8 )
    operator delete(v11[0]);
  return a1;
}
